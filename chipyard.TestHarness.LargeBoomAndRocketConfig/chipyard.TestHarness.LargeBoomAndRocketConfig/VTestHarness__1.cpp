// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2078(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2078\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2083(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2083\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:213846:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT___T_40))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at IDPool.scala:43 assert (!io.free.valid || !(bitmap & ~taken)(io.free.bits))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:213857:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT___T_40))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:213860: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.IDPool\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 213860, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64452:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64455: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64455, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64463:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64477: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64477, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64496:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64499: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64499, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64507:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64521: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64521, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64540:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64543: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64543, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64551:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64562:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64565: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64565, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64573:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64584:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64587: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64587, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64595:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64609: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64609, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64628:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64631: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64631, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64639:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64650:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64653: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64653, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64661:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64672:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64675: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64675, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64683:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64697: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64697, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64716:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64719: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64719, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64727:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64738:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64741: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64741, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64760:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64763: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64763, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64771:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64785: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64785, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64793:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64804:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64807: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64807, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64815:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64829: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64829, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64848:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64851: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64851, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64859:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64873: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64873, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64892:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64895: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64895, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64903:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64914:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64917: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64917, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64925:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64936:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64939: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64939, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64947:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64961: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64961, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64969:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64980:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64983: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 64983, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:64991:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65002:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65005: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65005, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65013:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65024:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65027: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65027, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65035:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65046:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65049: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65049, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65057:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65068:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65071: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65071, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65079:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65090:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65093: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65093, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65115: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65115, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65134:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65137: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65137, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65156:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65159: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65159, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65167:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65178:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65181: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65181, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65189:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65200:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65203: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65203, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65211:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65225: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65225, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65244:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65247: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65247, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65255:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65266:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65269: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65269, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65277:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65288:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65291: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65291, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65299:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65313: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65313, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65332:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65335: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65335, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65343:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65357: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65357, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65376:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65379: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65379, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65387:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65398:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65401: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65401, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65420:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65423: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65423, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65431:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65442:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65445: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65445, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65453:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65464:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65467: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65467, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65475:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65486:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65489: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65489, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65497:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65508:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65511: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65511, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65519:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65530:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65533: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65533, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65541:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65552:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65555: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65555, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65563:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65577: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65577, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65585:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65596:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65599: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65599, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65607:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65621: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65621, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65640:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65643: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65643, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65651:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65662:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65665: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65665, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65673:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65684:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65687: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65687, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65695:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65706:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65709: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65709, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65717:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65728:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65731: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65731, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65739:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65753: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65753, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65772:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65775: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65775, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65783:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65794:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65797: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65797, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65805:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65816:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65819: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65819, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65827:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65841: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65841, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65860:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65863: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65863, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65871:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65882:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65885: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65885, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65893:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65904:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65907: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65907, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65915:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_580))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65926:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_580))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65929: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65929, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65937:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65948:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65951: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65951, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65959:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65973: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65973, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65992:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:65995: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 65995, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66017: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66017, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66036:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66039: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66039, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66047:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66058:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66061: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66061, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66069:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66080:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66083: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66083, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66091:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_580))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_580))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66105: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66105, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66124:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66127: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66127, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66135:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66146:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66149: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66149, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66157:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66168:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66171: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66171, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66179:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66190:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66193: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66193, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66201:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66212:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66215: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66215, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66223:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_683))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_683))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66237: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66237, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_687))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66256:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_687))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66259: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66259, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66267:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66281: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66281, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66289:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_695))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66300:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_695))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66303: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66303, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66311:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_699))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66322:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_663))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_699))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66325: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66325, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66333:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_732))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66344:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_732))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66347: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66347, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66355:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_736))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66369: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66369, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_740))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66388:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_740))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66391: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66391, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66399:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_744))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66410:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_744))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66413: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66413, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66421:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66432:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66435: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66435, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66443:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_752))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_752))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66457: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66457, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_812) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_827))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66476:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_812) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_827))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66479: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66479, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66487:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_861))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66498:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_861))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66501: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66501, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_872) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66520:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_872) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66523: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66523, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66531:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_881))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_881))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66545: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66545, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66553:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_854)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66564:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_854)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66567: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66567, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66575:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_900))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66586:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_900))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66589: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66589, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66597:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_919))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66608:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_919))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:66611: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 66611, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2084(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2084\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_not_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_old_history__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2085(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2085\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:230652:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT___T_29))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Plic.scala:238 assert((claimer.asUInt & (claimer.asUInt - UInt(1))) === UInt(0)) // One-Hot\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:230663:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT___T_29))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:230666: Assertion failed in %NTestHarness.dut.system.plic\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 230666, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:230674:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT___T_56))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Plic.scala:255 assert((completer.asUInt & (completer.asUInt - UInt(1))) === UInt(0)) // One-Hot\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:230685:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT___T_56))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:230688: Assertion failed in %NTestHarness.dut.system.plic\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 230688, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2087(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2087\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2088(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2088\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911326: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911326, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911348: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911348, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911370: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911370, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911392: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911392, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911411:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911414: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911414, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911422:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911436: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911436, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911458: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911458, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911477:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911480: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911480, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911499:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911502: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911502, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911524: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911524, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911546: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911546, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911568: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911568, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911590: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911590, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911612: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911612, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911634: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911634, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911653:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911656: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911656, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911675:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911678: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911678, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfffff000U 
                                       & (0x54000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfffff000U 
                                       & (0x54000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911700: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911700, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911722: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911722, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911744: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911744, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911763:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911766: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911766, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911774:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911785:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911788: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911788, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911810: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911810, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfffff000U 
                                       & (0x54000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911829:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfffff000U 
                                       & (0x54000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911832: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911832, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911851:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911854: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911854, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911873:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911876: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911876, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911898: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911898, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911917:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911920: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911920, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfffff000U 
                                       & (0x54000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911939:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfffff000U 
                                       & (0x54000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911942: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911942, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911950:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911964: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911964, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911986: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 911986, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:911994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912005:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912008: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912008, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912027:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912030: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912030, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912038:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912052: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912052, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912074: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912074, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912096: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912096, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912118: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912118, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912140: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912140, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912162: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912162, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912184: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912184, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912206: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912206, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912228: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912228, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912250: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912250, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912272: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912272, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912291:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912294: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912294, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912302:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912316: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912316, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912338: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912338, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912360: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912360, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912379:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912382: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912382, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912602: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912602, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912624: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912624, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912668: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912668, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912690: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912690, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912712: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912712, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912731:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912734: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912734, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_559))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_559))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912756: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912756, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_592))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_592))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912778: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912778, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912797:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912800: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912800, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_604))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912819:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_604))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912822: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912822, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_687))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912841:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_687))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912844: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912844, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_721))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_721))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912866: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912866, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_732) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_732) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912888: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912888, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912907:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912910: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912910, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_625))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_753))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_625))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_753))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912932: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912932, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_772))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912951:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_772))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:912954: Assertion failed in %NTestHarness.dut.system.uartClockDomainWrapper.uart_0.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 912954, "");
        }
    }
}
