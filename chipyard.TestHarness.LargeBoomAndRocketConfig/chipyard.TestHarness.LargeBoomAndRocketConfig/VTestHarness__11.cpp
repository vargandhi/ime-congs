// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2147(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2147\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223613: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223613, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223635: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223635, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223657: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223657, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223676:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223679: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223679, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223687:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223701: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223701, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223723: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223723, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223745: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223745, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223767: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223767, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223789: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223789, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223811: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223811, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223833: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223833, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223852:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223855: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223855, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223863:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223877: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223877, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223899: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223899, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223921: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223921, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223940:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223943: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223943, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223951:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223965: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223965, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223987: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 223987, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:223995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224009: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224009, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224028:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224031: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224031, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224039:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224050:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224053: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224053, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224061:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224072:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224075: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224075, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224083:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224094:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224097: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224097, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224105:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224116:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224119: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224119, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224127:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224141: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224141, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224160:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224163: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224163, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224171:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224185: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224185, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224204:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224207: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224207, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224215:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224226:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224229: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224229, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224237:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224248:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224251: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224251, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224259:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224273: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224273, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224292:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224295: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224295, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224303:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224314:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224317: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224317, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224336:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224339: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224339, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224347:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224361: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224361, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224380:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224383: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224383, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224391:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224405: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224405, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224427: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224427, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224449: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224449, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224468:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224471: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224471, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224479:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224490:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224493: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224493, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224512:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224515: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224515, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224523:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224537: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224537, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224556:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224559: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224559, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224567:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224578:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0x13U >= (0x1fU & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                   >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224581: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224581, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224589:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224600:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224603: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224603, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224611:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224622:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224625: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224625, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224633:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224644:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224647: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224647, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224655:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224666:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224669: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224669, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224677:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224688:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224691: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224691, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224699:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224710:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224713: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224713, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224721:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224732:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224735: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224735, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224743:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224754:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224757: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224757, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224765:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224776:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224779: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224779, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224787:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224801: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224801, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224820:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224823: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224823, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224831:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224842:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224845: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224845, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224853:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224864:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224867: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224867, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224875:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224889: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224889, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224897:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224908:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224911: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224911, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224919:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224930:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224933: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224933, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224941:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_440))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224952:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_440))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224955: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224955, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224963:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224974:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224977: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224977, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224985:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224996:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:224999: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 224999, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225007:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225018:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225021: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225021, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225029:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_440))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225040:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_440))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225043: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225043, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225051:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((0x13U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225065: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225065, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225084:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225087: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225087, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225095:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225106:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225109: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225109, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225117:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225128:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225131: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225131, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225139:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225150:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225153: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225153, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225161:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225172:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225175: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225175, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225183:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_559))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225194:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_523))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_559))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225197: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225197, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225205:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_592))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225216:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_592))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225219: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225219, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225227:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225238:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225241: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225241, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225249:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_604))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225260:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_604))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225263: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225263, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225271:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_612))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225282:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_571))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_612))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225285: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225285, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225293:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_687))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225304:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_687))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225307: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225307, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225315:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_721))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225326:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_721))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225329: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225329, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225337:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_732) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225348:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_732) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225351: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225351, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225359:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225370:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225373: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225373, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225381:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_625))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_714)) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_753))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225392:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_708) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_625))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_714)) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_66)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_753))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225395: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225395, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225403:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_760))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225414:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_760))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225417: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225417, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_779))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:179:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225436:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_779))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:225439: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.coupler_to_bus_named_subsystem_mbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 225439, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2148(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2148\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:160956:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_145))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:160967:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_145))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:160970: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 160970, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:160978:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_151))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:160989:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_151))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:160992: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 160992, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161000:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161011:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161014: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161014, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161022:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_179))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161033:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_179))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161036: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161036, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161044:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_201))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161055:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_201))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161058: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161058, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161066:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161077:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161080: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161080, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161088:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161099:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161102: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161102, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161110:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161121:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161124: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161124, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161132:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161143:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161146: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161146, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161154:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161165:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161168: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161168, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161176:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_285))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161187:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_285))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161190: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161190, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161198:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_291))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161209:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_291))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161212: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161212, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161220:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_313))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161231:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_313))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161234: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161234, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161242:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_319))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161253:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_319))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161256: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161256, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161264:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_341))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161275:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_341))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161278: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161278, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161286:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_347))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161297:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_347))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161300: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161300, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161308:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_369))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161319:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_369))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161322: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161322, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161330:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_375))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161341:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_375))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161344: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161344, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161352:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_397))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161363:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_397))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161366: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161366, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161374:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_403))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161385:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_403))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161388: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161388, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161396:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_425))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161407:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_425))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161410: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161410, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161418:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_431))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161429:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_431))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161432: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161432, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161440:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_453))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161451:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_453))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161454: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161454, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161462:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_459))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161473:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_459))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161476: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161476, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161484:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_481))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161495:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_481))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161498: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161498, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_487))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161517:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_487))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161520: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161520, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161528:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_509))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161539:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_509))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161542: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161542, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161550:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_515))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161561:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_515))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161564: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161564, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161572:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_537))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161583:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_537))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161586: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161586, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161594:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161605:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161608: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161608, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161616:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_565))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161627:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_565))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161630: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161630, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161638:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_571))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161649:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_571))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161652: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161652, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161660:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161671:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161674: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161674, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_599))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161693:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_599))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161696: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161696, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161704:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_621))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161715:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_621))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161718: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161718, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161726:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_627))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161737:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_627))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161740: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161740, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161748:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_649))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161759:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_649))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161762: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161762, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161781:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161784: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161784, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161792:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:259 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161803:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161806: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161806, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161814:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_683))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:260 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161825:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_683))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:161828: Assertion failed in %NTestHarness.dut.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 161828, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_speculative 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_speculative;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264534:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_374) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at tile.scala:143:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264545:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_374) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264548: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264548, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ (1U | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at tile.scala:143:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264567:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ (1U | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264570: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264570, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264589:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264592: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264592, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264611:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264614: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264614, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264622:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264636: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264636, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264655:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264658: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264658, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264666:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264677:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264680: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264680, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264699:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264702: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264702, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264710:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264721:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264724: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264724, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264743:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264746: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264746, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264765:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264768: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264768, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264787:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264790: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264790, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264798:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264809:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264812: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264812, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264834: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264834, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_869))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264853:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_869))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264856: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264856, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264875:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264878: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264878, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264886:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264897:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264900: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264900, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264919:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264922: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264922, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_869))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264941:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_869))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264944: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264944, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264952:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264963:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264966: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264966, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264974:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264985:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264988: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 264988, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:264996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_988))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at tile.scala:143:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265007:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_988))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265010: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265010, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265018:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1021))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265029:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1021))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265032: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265032, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1025))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265051:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1025))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265054: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265054, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265062:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1029))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265073:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1029))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265076: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265076, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1037))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265095:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1037))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265098: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265098, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1041))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265117:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1000))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1041))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265120: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265120, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265128:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at tile.scala:143:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265139:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265142: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265142, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265150:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1150))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265161:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1150))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265164: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265164, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265172:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265183:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265186: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265186, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1170))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265205:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1170))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265208: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265208, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265216:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1120) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1054))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_a_ready) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265227:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1120) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1054))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_a_ready) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265230: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265230, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265238:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at tile.scala:143:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265249:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265252: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265252, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at tile.scala:143:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265271:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:265274: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 265274, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:899147:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1206))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: these conditions must be mutually exclusive\n    at CSR.scala:662 assert(PopCount(insn_ret :: insn_call :: insn_break :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:899158:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1206))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:899161: Assertion failed in %NTestHarness.dut.system.tile.core.csr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 899161, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:899169:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1228))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at CSR.scala:670 assert(!reg_singleStepped || io.retire === UInt(0))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:899180:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1228))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:899183: Assertion failed in %NTestHarness.dut.system.tile.core.csr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 899183, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:227983:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:227994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:227997: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 227997, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228016:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228019: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228019, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228041: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228041, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228060:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228063: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228063, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228071:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228085: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228085, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228104:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228107: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228107, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228115:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228129: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228129, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228148:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228151: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228151, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228159:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228170:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228173: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228173, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228181:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228192:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228195: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228195, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228217: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228217, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228225:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228236:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228239: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228239, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228247:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228261: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228261, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228283: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228283, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228305: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228305, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228324:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228327: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228327, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228335:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228349: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228349, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228368:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228371: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228371, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228379:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228393: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228393, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228412:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228415: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228415, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228423:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228437: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228437, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228456:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228459: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228459, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228467:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228481: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228481, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228500:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228503: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228503, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228511:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228525: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228525, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228547: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228547, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228569: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228569, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228588:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228591: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228591, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228613: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228613, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228635: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228635, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228657: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228657, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228676:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228679: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228679, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228687:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228701: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228701, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228723: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228723, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228745: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228745, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228767: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228767, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228789: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228789, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228811: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228811, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228833: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228833, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228852:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228855: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228855, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228863:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228877: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228877, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228899: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228899, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228921: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228921, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228940:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228943: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228943, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228951:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228965: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228965, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228987: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 228987, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:228995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229009: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229009, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229028:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229031: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229031, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229039:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229050:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229053: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229053, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229259:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229273: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229273, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                          [0U]) & (~ ((0x14fU >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                                       [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229292:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                          [0U]) & (~ ((0x14fU >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                                       [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229295: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229295, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229336:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229339: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229339, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229347:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229361: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229361, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229380:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229383: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229383, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229391:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229405: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229405, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_559))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_559))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229427: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229427, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_592))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_592))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229449: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229449, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229468:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229471: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229471, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229479:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_604))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229490:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_604))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229493: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229493, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_687))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229512:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_687))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229515: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229515, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229523:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_721))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_721))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229537: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229537, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_732) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229556:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_732) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229559: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229559, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229567:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229578:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229581: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229581, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229589:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_625))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_714)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_753))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229600:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_643))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_625))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_714)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_753))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229603: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229603, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229611:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_760))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Plic.scala:353:15)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229622:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_760))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229625: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229625, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229633:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_779))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Plic.scala:353:15)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229644:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_779))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:229647: Assertion failed in %NTestHarness.dut.system.plic.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 229647, "");
        }
    }
}
