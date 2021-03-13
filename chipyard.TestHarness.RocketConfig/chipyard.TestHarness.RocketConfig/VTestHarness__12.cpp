// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1894(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1894\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1895(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1895\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16432:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_83))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_83))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16448: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16448, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16469:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16472: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16472, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16480:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16493:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16496: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16496, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16504:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16517:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16520: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16520, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16528:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16541:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16544: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16544, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16552:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_83))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_83))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16568: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16568, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16589:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16592: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16592, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16613:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16616: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16616, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16637:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16640: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16640, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16648:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16661:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16664: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16664, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16672:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16685:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16688: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16688, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16696:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16712: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16712, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_406))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16733:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_406))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16736: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16736, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16744:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16757:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16760: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16760, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16768:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16781:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16784: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16784, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16792:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_501))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16805:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_501))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16808: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16808, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16816:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16829:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16832: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16832, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16853:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16856: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16856, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_501))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16877:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_501))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16880: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16880, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16888:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16901:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16904: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16904, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16912:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16925:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16928: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16928, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16936:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16949:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16952: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16952, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16960:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16973:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:16976: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 16976, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:16997:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17000: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17000, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17008:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17021:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17024: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17024, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17032:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17045:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17048: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17048, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17056:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17069:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17072: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17072, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17080:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_857))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_857))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17096: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17096, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17117:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17120: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17120, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17128:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17141:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_420))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17144: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17144, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17152:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17165:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17168: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17168, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17176:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17189:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17192: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17192, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17200:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17213:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17216: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17216, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17224:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17237:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17240: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17240, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17248:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17261:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17264: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17264, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17272:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17285:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17288: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17288, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17309:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17312: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17312, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17320:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17333:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17336: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17336, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17344:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17360: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17360, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17381:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17384: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17384, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17392:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17405:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17408: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17408, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17416:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17429:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17432: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17432, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17440:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17453:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17456: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17456, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17464:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17477:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17480: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17480, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17501:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17504: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17504, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17512:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_951))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17525:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_951))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17528: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17528, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17536:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17549:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17552: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17552, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17560:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17573:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17576: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17576, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17584:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17597:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17600: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17600, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17608:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17624: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17624, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17645:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17648: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17648, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17656:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_951))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17669:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_951))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17672: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17672, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17680:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17693:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17696: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17696, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17704:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17717:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17720: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17720, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17728:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17744: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17744, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1026))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17765:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1026))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17768: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17768, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1034))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17789:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1034))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17792: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17792, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17800:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1042))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17813:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1042))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17816: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17816, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17824:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1050))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17837:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1050))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17840: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17840, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17848:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1054))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17861:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1054))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17864: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17864, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1058))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1058))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17888: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17888, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1062))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17909:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1062))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17912: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17912, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17920:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1066))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17933:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1066))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17936: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17936, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17944:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1070))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17957:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1070))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17960: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17960, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17968:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1077) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17981:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1077) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:17984: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 17984, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:17992:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1102))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18005:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1102))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18008: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18008, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1108))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18029:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1108))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18032: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18032, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1112))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18053:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1112))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18056: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18056, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1120))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18077:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1120))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18080: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18080, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18088:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18101:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1088) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18104: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18104, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1085) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1136))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18123:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1085) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1136))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18126: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18126, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18134:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1143))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18147:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1143))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18150: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18150, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18158:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1152))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18171:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1152))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18174: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18174, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18182:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18195:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18198: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18198, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18206:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1196))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:331:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v:18219:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1196))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.harness.v:18222: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.harness.v", 18222, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1899(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1899\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1900(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1900\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31129:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31132: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31132, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_104))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31153:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_104))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31156: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31156, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31164:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31177:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31180: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31180, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31188:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31201:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31204: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31204, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31212:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31228: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31228, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31249:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31252: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31252, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31273:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31276: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31276, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31284:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31297:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31300: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31300, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31308:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31321:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31324: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31324, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31332:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_104))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_104))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31348: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31348, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31369:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31372: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31372, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31393:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31396: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31396, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31404:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31417:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31420: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31420, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31428:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31441:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31444: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31444, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31452:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31465:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31468: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31468, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31476:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31492: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31492, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31513:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31516: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31516, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31524:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31537:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31540: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31540, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31548:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_251) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31561:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_251) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31564: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31564, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31572:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31585:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31588: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31588, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31596:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31612: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31612, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31636: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31636, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31657:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31660: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31660, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31668:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31681:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31684: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31684, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31692:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_306))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31705:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_306))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31708: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31708, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31716:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31729:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31732: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31732, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31740:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31756: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31756, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31777:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31780: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31780, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31788:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31801:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31804: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31804, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31812:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_306))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31825:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_306))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31828: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31828, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31836:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31849:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31852: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31852, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31860:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31873:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31876: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31876, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31897:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31900: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31900, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_370))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31921:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_370))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31924: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31924, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31932:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_404))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31945:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_404))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31948: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31948, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31956:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31969:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31972: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31972, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31980:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:31993:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:31996: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 31996, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32020: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32020, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32041:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32044: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32044, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32052:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_404))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32065:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_404))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32068: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32068, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32076:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32089:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32092: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32092, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32113:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32116: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32116, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32124:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32140: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32140, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32161:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32164: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32164, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32172:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32185:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32188: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32188, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32196:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32209:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32212: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32212, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32220:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32233:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32236: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32236, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32244:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32257:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32260: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32260, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32281:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_268))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32284: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32284, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32305:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32308: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32308, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32316:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32329:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32332: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32332, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32340:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32353:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32356: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32356, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32364:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32377:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32380: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32380, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32388:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32404: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32404, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32425:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32428: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32428, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32436:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32449:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32452: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32452, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32460:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32473:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32476: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32476, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32484:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32497:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32500: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32500, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32508:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32524: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32524, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32545:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32548: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32548, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32569:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32572: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32572, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32580:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32593:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32596: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32596, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32604:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32617:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32620: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32620, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32628:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32641:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32644: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32644, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32652:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32668: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32668, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32689:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32692: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32692, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32700:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32713:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32716: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32716, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32724:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32737:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32740: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32740, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32748:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_591))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32761:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_591))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32764: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32764, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32772:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32785:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32788: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32788, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32809:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32812: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32812, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32833:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32836: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32836, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32844:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32857:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32860: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32860, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32868:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32881:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32884: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32884, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32892:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32905:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32908: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32908, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32932: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32932, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_591))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32953:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_591))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32956: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32956, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32964:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32977:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:32980: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 32980, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:32988:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33001:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_523))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33004: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33004, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33012:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33025:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33028: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33028, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33036:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33052: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33052, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33073:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33076: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33076, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_666))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33097:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_666))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33100: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33100, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33108:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33121:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33124: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33124, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33132:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_674))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33145:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_674))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33148: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33148, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33156:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_678))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33169:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_678))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33172: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33172, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_682))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33193:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_682))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33196: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33196, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33217:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33220: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33220, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33228:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_694))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33241:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_694))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33244: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33244, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33252:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33265:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33268: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33268, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33276:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_702))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33289:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_702))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33292: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33292, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33300:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_706))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_706))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33316: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33316, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_710))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33337:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_710))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33340: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33340, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33348:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_717) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_723))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33361:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_717) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_723))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33364: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33364, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33372:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_742))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33385:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_742))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33388: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33388, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33396:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_748))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33409:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_748))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33412: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33412, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33420:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_752))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_752))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33436: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33436, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_760))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33457:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_760))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33460: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33460, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_764))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33481:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_728) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_764))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33484: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33484, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33492:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_725) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_776))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33503:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_725) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_776))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33506: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33506, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33514:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_783))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33527:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_783))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33530: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33530, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33538:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33551:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33554: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33554, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33562:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33575:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33578: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33578, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33586:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_836))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33599:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_836))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33602: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33602, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_861))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:33623:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_861))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:33626: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 33626, "");
        }
    }
}
