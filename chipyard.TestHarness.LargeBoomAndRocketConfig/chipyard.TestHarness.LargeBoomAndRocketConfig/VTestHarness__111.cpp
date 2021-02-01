// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6771(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6771\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5152[3];
    WData/*95:0*/ __Vtemp5153[3];
    WData/*95:0*/ __Vtemp5158[3];
    WData/*95:0*/ __Vtemp5159[3];
    WData/*95:0*/ __Vtemp5164[3];
    WData/*95:0*/ __Vtemp5165[3];
    WData/*95:0*/ __Vtemp5170[3];
    WData/*95:0*/ __Vtemp5171[3];
    // Body
    __Vtemp5152[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5152[1U] = 0U;
    __Vtemp5152[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5153, __Vtemp5152);
    __Vtemp5158[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5158[1U] = 0U;
    __Vtemp5158[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5159, __Vtemp5158);
    __Vtemp5164[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5164[1U] = 0U;
    __Vtemp5164[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5165, __Vtemp5164);
    __Vtemp5170[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5170[1U] = 0U;
    __Vtemp5170[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5171, __Vtemp5170);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_872 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & __Vtemp5153[0U])) ? 4U
                  : ((6U == (7U & __Vtemp5159[0U]))
                      ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & __Vtemp5165[0U])) ? 4U
                    : ((6U == (7U & __Vtemp5171[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty)) 
              & (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                       ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                    == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                         ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6772(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6772\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5176[3];
    WData/*95:0*/ __Vtemp5177[3];
    WData/*95:0*/ __Vtemp5182[3];
    WData/*95:0*/ __Vtemp5183[3];
    WData/*95:0*/ __Vtemp5188[3];
    WData/*95:0*/ __Vtemp5189[3];
    WData/*95:0*/ __Vtemp5194[3];
    WData/*95:0*/ __Vtemp5195[3];
    // Body
    __Vtemp5176[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5176[1U] = 0U;
    __Vtemp5176[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5177, __Vtemp5176);
    __Vtemp5182[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5182[1U] = 0U;
    __Vtemp5182[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5183, __Vtemp5182);
    __Vtemp5188[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5188[1U] = 0U;
    __Vtemp5188[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5189, __Vtemp5188);
    __Vtemp5194[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5194[1U] = 0U;
    __Vtemp5194[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5195, __Vtemp5194);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_872 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & __Vtemp5177[0U])) ? 4U
                  : ((6U == (7U & __Vtemp5183[0U]))
                      ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & __Vtemp5189[0U])) ? 4U
                    : ((6U == (7U & __Vtemp5195[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty)) 
              & (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                       ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                    == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                         ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6773(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6773\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_39 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_35) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_848 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_783)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_703 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_848 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_783)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_848 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_783)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_703 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_703 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_514 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_514 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_563 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_563 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_510 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT___T_54 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_wflags) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_ren2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT___T_15 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
               >> 0x13U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6774(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6774\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT___T_22 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)))) & 
           (7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                    >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__fsgnj[0U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__fsgnj[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[0U]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__fsgnj[2U] 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_rm))
                  ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                  : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_rm))
                      ? (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                      : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in2[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
        = (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                     >> 0x1eU)))) & 
            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
             >> 0x1dU)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                              >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_rm)) 
            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_rm)) 
              & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[0U])))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6775(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6775\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5206[3];
    WData/*95:0*/ __Vtemp5207[3];
    WData/*95:0*/ __Vtemp5210[3];
    WData/*95:0*/ __Vtemp5211[3];
    WData/*127:0*/ __Vtemp5213[4];
    WData/*127:0*/ __Vtemp5214[4];
    WData/*127:0*/ __Vtemp5215[4];
    WData/*127:0*/ __Vtemp5216[4];
    WData/*127:0*/ __Vtemp5217[4];
    WData/*127:0*/ __Vtemp5218[4];
    WData/*127:0*/ __Vtemp5219[4];
    WData/*127:0*/ __Vtemp5220[4];
    WData/*127:0*/ __Vtemp5221[4];
    WData/*127:0*/ __Vtemp5222[4];
    WData/*127:0*/ __Vtemp5223[4];
    WData/*127:0*/ __Vtemp5224[4];
    WData/*127:0*/ __Vtemp5225[4];
    WData/*127:0*/ __Vtemp5226[4];
    WData/*127:0*/ __Vtemp5227[4];
    // Body
    __Vtemp5206[0U] = 0U;
    __Vtemp5206[1U] = 0U;
    __Vtemp5206[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5207, __Vtemp5206, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5210[0U] = 0U;
    __Vtemp5210[1U] = 0U;
    __Vtemp5210[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5211, __Vtemp5210, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25 
        = ((0xffU & ((0x4000U & (__Vtemp5207[2U] << 0xeU)) 
                     | (__Vtemp5207[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp5211[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp5211[1U] 
                                           >> 2U)))));
    VL_EXTEND_WQ(128,64, __Vtemp5213, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5214, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5215, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5216, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5217, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5218, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5219, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5220, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5221, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5222, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5223, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5224, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5225, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5226, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5227, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_130 
        = ((0x10000000U & __Vtemp5213[1U]) ? 3U : (
                                                   (0x8000000U 
                                                    & __Vtemp5214[1U])
                                                    ? 4U
                                                    : 
                                                   ((0x4000000U 
                                                     & __Vtemp5215[1U])
                                                     ? 5U
                                                     : 
                                                    ((0x2000000U 
                                                      & __Vtemp5216[1U])
                                                      ? 6U
                                                      : 
                                                     ((0x1000000U 
                                                       & __Vtemp5217[1U])
                                                       ? 7U
                                                       : 
                                                      ((0x800000U 
                                                        & __Vtemp5218[1U])
                                                        ? 8U
                                                        : 
                                                       ((0x400000U 
                                                         & __Vtemp5219[1U])
                                                         ? 9U
                                                         : 
                                                        ((0x200000U 
                                                          & __Vtemp5220[1U])
                                                          ? 0xaU
                                                          : 
                                                         ((0x100000U 
                                                           & __Vtemp5221[1U])
                                                           ? 0xbU
                                                           : 
                                                          ((0x80000U 
                                                            & __Vtemp5222[1U])
                                                            ? 0xcU
                                                            : 
                                                           ((0x40000U 
                                                             & __Vtemp5223[1U])
                                                             ? 0xdU
                                                             : 
                                                            ((0x20000U 
                                                              & __Vtemp5224[1U])
                                                              ? 0xeU
                                                              : 
                                                             ((0x10000U 
                                                               & __Vtemp5225[1U])
                                                               ? 0xfU
                                                               : 
                                                              ((0x8000U 
                                                                & __Vtemp5226[1U])
                                                                ? 0x10U
                                                                : 
                                                               ((0x4000U 
                                                                 & __Vtemp5227[1U])
                                                                 ? 0x11U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_115))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6776(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6776\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp5228[4];
    WData/*127:0*/ __Vtemp5229[4];
    WData/*127:0*/ __Vtemp5230[4];
    WData/*127:0*/ __Vtemp5231[4];
    WData/*127:0*/ __Vtemp5232[4];
    WData/*127:0*/ __Vtemp5233[4];
    WData/*127:0*/ __Vtemp5234[4];
    WData/*127:0*/ __Vtemp5235[4];
    WData/*127:0*/ __Vtemp5236[4];
    WData/*127:0*/ __Vtemp5237[4];
    WData/*127:0*/ __Vtemp5238[4];
    WData/*127:0*/ __Vtemp5239[4];
    WData/*127:0*/ __Vtemp5240[4];
    WData/*127:0*/ __Vtemp5241[4];
    WData/*127:0*/ __Vtemp5242[4];
    // Body
    VL_EXTEND_WQ(128,64, __Vtemp5228, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5229, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5230, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5231, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5232, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5233, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5234, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5235, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5236, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5237, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5238, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5239, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5240, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5241, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp5242, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_130 
        = ((0x10000000U & __Vtemp5228[1U]) ? 3U : (
                                                   (0x8000000U 
                                                    & __Vtemp5229[1U])
                                                    ? 4U
                                                    : 
                                                   ((0x4000000U 
                                                     & __Vtemp5230[1U])
                                                     ? 5U
                                                     : 
                                                    ((0x2000000U 
                                                      & __Vtemp5231[1U])
                                                      ? 6U
                                                      : 
                                                     ((0x1000000U 
                                                       & __Vtemp5232[1U])
                                                       ? 7U
                                                       : 
                                                      ((0x800000U 
                                                        & __Vtemp5233[1U])
                                                        ? 8U
                                                        : 
                                                       ((0x400000U 
                                                         & __Vtemp5234[1U])
                                                         ? 9U
                                                         : 
                                                        ((0x200000U 
                                                          & __Vtemp5235[1U])
                                                          ? 0xaU
                                                          : 
                                                         ((0x100000U 
                                                           & __Vtemp5236[1U])
                                                           ? 0xbU
                                                           : 
                                                          ((0x80000U 
                                                            & __Vtemp5237[1U])
                                                            ? 0xcU
                                                            : 
                                                           ((0x40000U 
                                                             & __Vtemp5238[1U])
                                                             ? 0xdU
                                                             : 
                                                            ((0x20000U 
                                                              & __Vtemp5239[1U])
                                                              ? 0xeU
                                                              : 
                                                             ((0x10000U 
                                                               & __Vtemp5240[1U])
                                                               ? 0xfU
                                                               : 
                                                              ((0x8000U 
                                                                & __Vtemp5241[1U])
                                                                ? 0x10U
                                                                : 
                                                               ((0x4000U 
                                                                 & __Vtemp5242[1U])
                                                                 ? 0x11U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_115))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6777(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6777\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_ctrl_fcn_dw 
        = (1U & (~ (((((((0x2bU == (0x7bU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc))) 
                         | (0x2cU == (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                        | (0x2dU == (0x6dU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                       | (0x2eU == (0x6eU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                      | (0x30U == (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                     | (0x30U == (0x77U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                    | (0x40U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_ctrl_op_fcn 
        = ((((((((((9U == (0x6fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc))) 
                   | (0xaU == (0x6fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                  | (0xcU == (0x6fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                 | (0x10U == (0x5eU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                | (0x12U == (0x7bU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
               | (0x18U == (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
              | (0x18U == (0x7aU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
             | (0x2dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc))) 
            << 3U) | (((((((((((6U == (0x7eU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc))) 
                               | (0x11U == (0x79U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                              | (0x12U == (0x56U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                             | (0x14U == (0x76U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                            | (0x39U == (0x79U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                           | (0x40U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc))) 
                          | (8U == (0x7dU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                         | (9U == (0x7bU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                        | (0x3cU == (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_2_uopc)))) 
                       << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__RegisterReadDecode_3__DOT___T_139)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6778(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6778\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_36 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_op_fcn)) 
           | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_op_fcn)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT__shin_r 
        = (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_fcn_dw)
                              ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu_io_in1 
                                         >> 0x20U))
                              : ((1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_op_fcn) 
                                         >> 3U) & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu_io_in1 
                                                           >> 0x1fU))))
                                  ? 0xffffffffU : 0U)))) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu_io_in1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1120) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__d_done));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__d_done));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___T_230 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerPrimitiveShiftReg_d3_i0__DOT__sync_0)
            ? (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid)
                          ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                             >> 6U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4120 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4444) 
           & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                   >> 0x34U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6779(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6779\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4446 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4444) 
           & (4U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                   >> 0x34U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48 
        = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                 ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0xfffU 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                                                << 0xcU) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                                  >> 0x14U)))) 
                      + VL_EXTENDS_II(14,13, (0xfffU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                                    >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm 
        = (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_346));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                   >> 0xcU)))) << 0x36U) 
           | (((QData)((IData)((0U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                             >> 0xaU))))) 
               << 0x35U) | (((QData)((IData)((0U != 
                                              (3U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                >> 8U))))) 
                             << 0x34U) | (((QData)((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                >> 6U))))) 
                                           << 0x33U) 
                                          | (((QData)((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                   >> 4U))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                      >> 2U))))) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U])))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x1eU))))) 
                                                                         << 6U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x1cU))))) 
                                                                            << 5U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 6U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x1aU))))) 
                                                                               << 4U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 8U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x18U))))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x16U))))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0xcU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x14U))))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0xeU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x12U)))))))))))) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x10U) 
                                                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0x10U)))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x12U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0xeU)))))) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x14U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0xcU)))))) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x16U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 0xaU)))))) 
                                                                   << 0x25U) 
                                                                  | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x18U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 8U)))))) 
                                                                      << 0x24U) 
                                                                     | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 6U)))))) 
                                                                         << 0x23U) 
                                                                        | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x1cU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 4U)))))) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                                                << 0x1eU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                >> 2U)))))) 
                                                                               << 0x21U) 
                                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x1eU))))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                << 6U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x1aU))))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                << 8U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x18U))))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x16U))))) 
                                                                                << 0x1bU) 
                                                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_260))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6780(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6780\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5244[3];
    WData/*95:0*/ __Vtemp5245[3];
    WData/*95:0*/ __Vtemp5248[3];
    WData/*95:0*/ __Vtemp5249[3];
    WData/*95:0*/ __Vtemp5252[3];
    WData/*95:0*/ __Vtemp5253[3];
    WData/*95:0*/ __Vtemp5256[3];
    WData/*95:0*/ __Vtemp5257[3];
    WData/*95:0*/ __Vtemp5260[3];
    WData/*95:0*/ __Vtemp5261[3];
    WData/*95:0*/ __Vtemp5264[3];
    WData/*95:0*/ __Vtemp5265[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
        = (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                              << 0xbU)) 
                              | (0x7fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
        = (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                              << 0xbU)) 
                              | (0x7fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23 
            = (0x10U == (0x30000010U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3 
            = (0x40U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    __Vtemp5244[0U] = 0U;
    __Vtemp5244[1U] = 0U;
    __Vtemp5244[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5245, __Vtemp5244, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp5248[0U] = 0U;
    __Vtemp5248[1U] = 0U;
    __Vtemp5248[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5249, __Vtemp5248, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp5252[0U] = 0U;
    __Vtemp5252[1U] = 0U;
    __Vtemp5252[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5253, __Vtemp5252, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp5256[0U] = 0U;
    __Vtemp5256[1U] = 0U;
    __Vtemp5256[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5257, __Vtemp5256, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp5260[0U] = 0U;
    __Vtemp5260[1U] = 0U;
    __Vtemp5260[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5261, __Vtemp5260, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp5264[0U] = 0U;
    __Vtemp5264[1U] = 0U;
    __Vtemp5264[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5265, __Vtemp5264, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_152 
        = ((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
            ? (QData)((IData)(((0x200U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                ? 0U : ((0x100U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                         ? 0U : ((0x80U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (__Vtemp5245[0U] 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & __Vtemp5249[0U]) 
                                                      | (1U 
                                                         & (__Vtemp5253[0U] 
                                                            >> 2U))))))))))
            : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
                            & ((~ ((0x200U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                    ? ((0x100U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                        ? ((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                            ? ((0x40U 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
                                                ? (~ 
                                                   (((QData)((IData)(
                                                                     ((0x55555555U 
                                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
                                                                          >> 1U)) 
                                                                      | (0xaaaaaaaaU 
                                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
                                                                            << 1U))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (((0x2aaa8U 
                                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
                                                                            << 2U)) 
                                                                        | (0x55550U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
                                                                              << 4U))) 
                                                                       | ((4U 
                                                                           & (__Vtemp5257[1U] 
                                                                              >> 0x1bU)) 
                                                                          | ((2U 
                                                                              & (__Vtemp5261[1U] 
                                                                                >> 0x1dU)) 
                                                                             | (1U 
                                                                                & (__Vtemp5265[1U] 
                                                                                >> 0x1fU)))))))))
                                                : VL_ULL(0))
                                            : VL_ULL(0))
                                        : VL_ULL(0))
                                    : VL_ULL(0))) << 3U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6781(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6781\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_636 
        = ((3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen) 
                  >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_639 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__write_port_busy)) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_653 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__write_port_busy)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_667 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__write_port_busy)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__oddSqrt_S)))
              ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
                 << 1U) : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
                                  ? ((0x6000000U & 
                                      (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
                                         >> 0x16U) 
                                        - (IData)(1U)) 
                                       << 0x19U)) | 
                                     (0x1fffff8U & 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
                                       << 3U))) : 0U)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
               ? 0U : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
                       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_92)
                ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
                   << 1U) : 0U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
                                       & (~ (0x1ffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                        >> 0x17U))))))
                                    ? 0x1000000U : 0U)) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
                 ? 0x2800000U : 0U)) | ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))))
                                         ? (0x1000000U 
                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
                                               << 1U))
                                         : 0U)) | (
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                                    ? 
                                                   ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                     << 1U) 
                                                    | (0x1ffffffU 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
                                                          >> 2U)))
                                                    : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6782(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6782\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__oddSqrt_S)))
              ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
                 << 1U) : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
                                         ? (((QData)((IData)(
                                                             (3U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
                                                                          >> 0x33U)) 
                                                                 - (IData)(1U))))) 
                                             << 0x36U) 
                                            | (VL_ULL(0x3ffffffffffff8) 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
                                                  << 3U)))
                                         : VL_ULL(0))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
               ? VL_ULL(0) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
                              << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_92)
                ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
                   << 1U) : VL_ULL(0)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
                                              & (~ 
                                                 (0xfffU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                      << 0xcU) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                        >> 0x14U))))))
                                           ? VL_ULL(0x20000000000000)
                                           : VL_ULL(0))) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
                 ? VL_ULL(0x50000000000000) : VL_ULL(0))) 
            | ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))))
                ? (VL_ULL(0x20000000000000) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
                                               << 1U))
                : VL_ULL(0))) | (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                  ? ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      << 1U) | (VL_ULL(0x3fffffffffffff) 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
                                                   >> 2U)))
                                  : VL_ULL(0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_833 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_inValid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_inReady));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6783(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6783\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5267[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_inValid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_844 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1_io_inValid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_inReady));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1_io_inValid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_290 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_761 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_709) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_717)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_840 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_709) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_789))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_761 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_709) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_717)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_840 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_709) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_789))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_cmd_uses_tlb 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_read) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_write)) 
            | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_size))) 
           | (0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore_drain_structural 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_valid_likely) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore2_valid)) 
           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_write)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_rmw)));
    __Vtemp5267[0U] = (IData)((((QData)((IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U])))) 
                                << 0x3cU) | (((QData)((IData)(
                                                              (0x7fU 
                                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U] 
                                                                     >> 0x15U))))) 
                                              << 0x35U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_232 
                                                                             >> 0x1fU))))) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    (0xfffffU 
                                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U]))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_232 
                                                                                >> 0x20U)) 
                                                                          << 0x1fU)) 
                                                                      | (0x7fffffffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_232))))))))));
    __Vtemp5267[1U] = ((0xe0000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U]) 
                       | (IData)(((((QData)((IData)(
                                                    (0xfffffU 
                                                     == 
                                                     (0xfffffU 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U])))) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U] 
                                                                       << 0xbU) 
                                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U] 
                                                                         >> 0x15U))))) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_232 
                                                                                >> 0x1fU))))) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        (0xfffffU 
                                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U]))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((0x80000000U 
                                                                           & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_232 
                                                                                >> 0x20U)) 
                                                                              << 0x1fU)) 
                                                                          | (0x7fffffffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_232))))))))) 
                                  >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[0U] 
        = __Vtemp5267[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[1U] 
        = __Vtemp5267[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[2U] 
        = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6784(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6784\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp5269[4];
    WData/*127:0*/ __Vtemp5270[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92);
    VL_EXTEND_WQ(114,51, __Vtemp5269, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp5270, __Vtemp5269, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
        = __Vtemp5270[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
        = __Vtemp5270[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[2U] 
        = __Vtemp5270[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[3U] 
        = (0x3ffffU & __Vtemp5270[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_247 
        = (((0x40U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6785(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6785\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5272[3];
    WData/*95:0*/ __Vtemp5273[3];
    WData/*95:0*/ __Vtemp5275[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53) 
                 ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
        = (((0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
                           << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                     >> 0x1dU)))) | 
            (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
                           << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                                     >> 0x1dU))))) 
           | VL_GTS_III(1,11,11, 0U, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_132_0 = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrDebugInt_0 = 0U;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_11 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_409)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__idx)
                ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_6))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_6));
    VL_EXTEND_WQ(95,64, __Vtemp5272, (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len 
                                      - VL_ULL(1)));
    VL_EXTEND_WQ(95,64, __Vtemp5273, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len);
    VL_EXTEND_WQ(95,64, __Vtemp5275, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_407)
                                       ? VL_ULL(0) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_442)
            ? __Vtemp5272[0U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_418)
                                  ? (__Vtemp5273[0U] 
                                     | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_412[0U])
                                  : __Vtemp5275[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_442)
            ? __Vtemp5272[1U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_418)
                                  ? (__Vtemp5273[1U] 
                                     | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_412[1U])
                                  : __Vtemp5275[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_442)
            ? __Vtemp5272[2U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_418)
                                  ? (__Vtemp5273[2U] 
                                     | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_412[2U])
                                  : __Vtemp5275[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes) 
                   >> ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_1102 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT__inflight_opcodes) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT__inflight_opcodes) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT__inflight_opcodes) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                  == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                               ? 1U : 4U)) ? 4U : (
                                                   (6U 
                                                    == 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                                      ? 1U
                                                      : 4U))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                    == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                 ? 1U : 4U)) ? 4U : 
                        ((6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                  ? 1U : 4U)) ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6786(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6786\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1102 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                  == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                               ? 1U : 4U)) ? 4U : (
                                                   (6U 
                                                    == 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                                      ? 1U
                                                      : 4U))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                    == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                 ? 1U : 4U)) ? 4U : 
                        ((6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                  ? 1U : 4U)) ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6787(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6787\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1102 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__inflight_opcodes) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__inflight_opcodes) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__inflight_opcodes) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                  == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                               ? 1U : 4U)) ? 4U : (
                                                   (6U 
                                                    == 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                                      ? 1U
                                                      : 4U))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                    == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                 ? 1U : 4U)) ? 4U : 
                        ((6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                  ? 1U : 4U)) ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6788(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6788\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5278[3];
    WData/*95:0*/ __Vtemp5279[3];
    WData/*95:0*/ __Vtemp5281[3];
    WData/*95:0*/ __Vtemp5286[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    __Vtemp5278[0U] = (0xfffffffcU & ((IData)((VL_ULL(1) 
                                               + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len)) 
                                      << 2U));
    __Vtemp5278[1U] = ((3U & ((IData)((VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len)) 
                              >> 0x1eU)) | (0xfffffffcU 
                                            & ((IData)(
                                                       ((VL_ULL(1) 
                                                         + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len) 
                                                        >> 0x20U)) 
                                               << 2U)));
    __Vtemp5278[2U] = (3U & ((IData)(((VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len) 
                                      >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WQ(66,64, __Vtemp5279, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__addr_size);
    VL_EXTEND_WQ(66,64, __Vtemp5281, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__addr_size);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
        = (VL_LT_W(3, __Vtemp5278, __Vtemp5279) ? (0xfffffffcU 
                                                   & ((IData)(
                                                              (VL_ULL(1) 
                                                               + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len)) 
                                                      << 2U))
            : __Vtemp5281[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
        = (VL_LT_W(3, __Vtemp5278, __Vtemp5279) ? (
                                                   (3U 
                                                    & ((IData)(
                                                               (VL_ULL(1) 
                                                                + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len)) 
                                                       >> 0x1eU)) 
                                                   | (0xfffffffcU 
                                                      & ((IData)(
                                                                 ((VL_ULL(1) 
                                                                   + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len) 
                                                                  >> 0x20U)) 
                                                         << 2U)))
            : __Vtemp5281[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U] 
        = (VL_LT_W(3, __Vtemp5278, __Vtemp5279) ? (3U 
                                                   & ((IData)(
                                                              ((VL_ULL(1) 
                                                                + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len) 
                                                               >> 0x20U)) 
                                                      >> 0x1eU))
            : __Vtemp5281[2U]);
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_mem_size 
            = (3U & (((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                      | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd)))
                      ? (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2)) 
                          << 1U) | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)))
                      : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
                         >> 0xcU)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD_io_way) 
            << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD_io_set) 
                         << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__empty)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_37)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__beat))));
    VL_EXTEND_WQ(65,64, __Vtemp5286, (VL_ULL(0x80000000) 
                                      ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInAddress));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_8 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_120) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_94) 
              | ((~ (((0U == (((0xf0000000U & __Vtemp5286[0U]) 
                               | __Vtemp5286[1U]) | 
                              (1U & __Vtemp5286[2U]))) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__maybe_full))) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_3))) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_35) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_848 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_783)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6789(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6789\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1618 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1516 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1618 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1516 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1618 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_679 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_673) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_673) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_670) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_30 
        = ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__freeOH 
                              >> 0x20U))) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__freeOH));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
            ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                              << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                        >> 0x1dU))))
                ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]
                             : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U]))
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
            ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                              << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                        >> 0x1dU))))
                ? 0xe0080000U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                    ? 0xe0080000U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                      ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U]
                                      : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U]))
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
            ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                              << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                        >> 0x1dU))))
                ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]
                             : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U]))
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
           & (VL_ULL(1) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                           << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
        = ((~ (VL_ULL(1) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                            << 1U))) & (VL_ULL(3) | 
                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                                         << 2U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6790(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6790\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp5300[3];
    WData/*95:0*/ __Vtemp5301[3];
    WData/*95:0*/ __Vtemp5306[3];
    WData/*95:0*/ __Vtemp5307[3];
    WData/*95:0*/ __Vtemp5312[3];
    WData/*95:0*/ __Vtemp5313[3];
    WData/*95:0*/ __Vtemp5318[3];
    WData/*95:0*/ __Vtemp5319[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_843)
            ? ((IData)(1U) << vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
               [0U]) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_590 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_586) 
           | (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_523))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_755 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_703) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_711)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_834 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_703) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_783))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)));
    __Vtemp5300[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5300[1U] = 0U;
    __Vtemp5300[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5301, __Vtemp5300);
    __Vtemp5306[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5306[1U] = 0U;
    __Vtemp5306[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5307, __Vtemp5306);
    __Vtemp5312[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5312[1U] = 0U;
    __Vtemp5312[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5313, __Vtemp5312);
    __Vtemp5318[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp5318[1U] = 0U;
    __Vtemp5318[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp5319, __Vtemp5318);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_872 
        = (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
             [0U] == ((7U == (7U & __Vtemp5301[0U]))
                       ? 4U : ((6U == (7U & __Vtemp5307[0U]))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28)))) 
            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
               [0U] == ((7U == (7U & __Vtemp5313[0U]))
                         ? 4U : ((6U == (7U & __Vtemp5319[0U]))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid) 
              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                  [0U] == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                            ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                     ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))) 
                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                    [0U] == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6791(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6791\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_35) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_trace_0_exception 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1197) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_exception));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1197) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_exception));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_eret 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1197) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_302 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_299) 
           | (4U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_299) 
                    << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1987 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_grant_valid) 
              & (5U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3_io_mem_grant_valid 
        = ((3U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_grant_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_mem_grant_valid 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_grant_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_mem_grant_valid 
        = ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_grant_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_mem_grant_valid 
        = ((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_grant_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable)
            ? 0xffffU : (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write)
                                     ? ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                         ? (0x7fffffU 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
                                               << (8U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                                               >> 3U)) 
                                                      << 3U))))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_read)
                                             ? ((0xfU 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)
                                                         : 0U)))))))))
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask)))
                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__get_mask))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6792(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6792\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3934 
        = ((VL_ULL(0xffffffffffff0000) & (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size))
                                            ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_signed) 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3923) 
                                                   >> 0xfU))
                                                ? VL_ULL(0xffffffffffff)
                                                : VL_ULL(0))
                                            : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3919 
                                               >> 0x10U)) 
                                          << 0x10U)) 
           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3923)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_47 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32) 
           & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
                 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
              >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_34 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_25) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_53 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35) 
           & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
                 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_56 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
              >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_37 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_25) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_59 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_38) 
           & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
                 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_62 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_38) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
              >> 1U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6793(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6793\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_40 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_28) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_38))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_65 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_41) 
           & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
                 >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_68 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_41) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address 
              >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_43 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_28) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_41))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1909 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
           & (QData)((IData)((0xfU & (((IData)(1U) 
                                       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_size)) 
                                      - (IData)(1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__bad_va 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (~ ((VL_ULL(0) == (VL_ULL(0xc000000000) 
                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                 | (VL_ULL(0xc000000000) == (VL_ULL(0xc000000000) 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6794(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6794\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6795(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6795\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_1
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_27 
        = ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_level))
            ? (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_33 
        = ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_level))
            ? (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU))) : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6796(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6796\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_656 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0) 
             & ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_tag 
                           >> 0x12U)) == (0x1ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                            >> 0x1eU))))) 
            & ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_level)) 
               | ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_tag 
                             >> 9U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x15U)))))) 
           & ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_level)) 
              | ((0x1ffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_tag) 
                 == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_1 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_2 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_3 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6797(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6797\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_0 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_423 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_387 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_393 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_399 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_417 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1826 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_c_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6798(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6798\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1877 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3846 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3768) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3776)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseRejected 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_release_data_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3768)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__dataArb_io_in_1_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3748)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3660))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3660));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3775 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
            ? (0xffU & (~ (0x7fffffU & (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
                                        >> 4U)))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
           + ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672
               : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_41));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_41));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_9;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_mem_busy 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_valid) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__cached_grant_wait)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_dmem_req_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6799(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6799\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3702 
        = (((QData)((IData)(((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_rw_cmd))
                              ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                                  << 9U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                             << 5U) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
                                               << 1U)))
                              : 0U))) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_701));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3872 
        = ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_rw_cmd))
              ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_366
              : VL_ULL(0)) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_701));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_514 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_15 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_12 
           | ((QData)((IData)((0xffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_12)))) 
              << 0x10U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6800(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6800\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_21 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_17) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_17)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1041 
        = ((VL_ULL(0xfffffffff) & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[2U])))) 
           | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[1U])) 
               << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[1U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[2U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[3U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U] 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__sels_0[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH 
        = (0xfffffffU & ((~ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_12 
                              << 1U) | (0x1ffe0000U 
                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_12 
                                           << 0x11U)))) 
                         & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_xcpt_causes_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ma_ld_0)
            ? 4U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ma_st_0)
                     ? 6U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__pf_ld_0)
                              ? 0xdU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__pf_st_0)
                                         ? 0xfU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ae_ld_0)
                                                    ? 5U
                                                    : 7U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_maybe_flush_pre_data_ecc_and_waw) 
           & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_maybe_flush_pre_data_ecc_and_waw) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_readwrite));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_uncached_pending 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_miss) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_miss) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_181 
        = (0xfffffffU & ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163))
                          ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_172) 
                                | (0xfU & ((IData)(1U) 
                                           << (2U | 
                                               (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163) 
                                                   >> 4U)))))))
                          : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_172 
                             | (0xfU & ((IData)(1U) 
                                        << (2U | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163) 
                                                     >> 4U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6801(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6801\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_760) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_inst 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                ? (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[2U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[1U] 
                                          >> 0x14U)))
                : (((VL_LTES_III(1,14,14, 0xe00U, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExpQuot_S_div))
                      ? 6U : (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExpQuot_S_div) 
                                      >> 9U))) << 9U) 
                   | (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExpQuot_S_div))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PB 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C 
                = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB)
                        ? 6U : 5U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_115));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PB)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_43)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_56)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_57)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_59)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_60)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                    ? (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[2U] 
                                     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[1U] 
                                               >> 0x1dU))))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_61)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PB)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_S));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PB)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_rm));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6802(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6802\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__ppred));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_set)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6803(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6803\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkc_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_resp_valid) 
           & ((0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_address___05FT_15_data 
                         >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_176 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_175) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1095 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1075) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                          << 0xcU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xcU] 
                                            >> 0x14U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                         << 8U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xcU] 
                                                   >> 0x18U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                        << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xcU] 
                                                  >> 0x1cU))) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU]) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                      << 0x1cU) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                                   >> 4U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                     << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                                  >> 8U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                    << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                                 >> 0xcU))) 
                               ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                                >> 0x10U))) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                  << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                              >> 0x14U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                 << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                           >> 0x18U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xdU] 
                                          >> 0x1cU))) 
                           ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU]) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                              << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                           >> 4U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                             << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                          >> 8U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                            << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                         >> 0xcU))) 
                       ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                        >> 0x10U))) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                          << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                      >> 0x14U))) ^ 
                     ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                       << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                 >> 0x18U))) ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU] 
                                                 << 4U) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xeU] 
                                                   >> 0x1cU))) 
                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0xfU]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6804(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6804\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1095 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1075) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                          << 0xcU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xcU] 
                                            >> 0x14U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                         << 8U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xcU] 
                                                   >> 0x18U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                        << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xcU] 
                                                  >> 0x1cU))) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU]) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                      << 0x1cU) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                                   >> 4U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                     << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                                  >> 8U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                    << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                                 >> 0xcU))) 
                               ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                                >> 0x10U))) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                  << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                              >> 0x14U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                 << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                           >> 0x18U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xdU] 
                                          >> 0x1cU))) 
                           ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU]) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                              << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                           >> 4U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                             << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                          >> 8U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                            << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                         >> 0xcU))) 
                       ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                        >> 0x10U))) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                          << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                      >> 0x14U))) ^ 
                     ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                       << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                 >> 0x18U))) ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU] 
                                                 << 4U) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xeU] 
                                                   >> 0x1cU))) 
                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0xfU]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6805(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6805\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_fu_code 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT___T_21)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_fu_code));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1146 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_brupdate_b1_resolve_mask)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_75 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_41) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_39) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_41) 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_39) 
                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_38) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_36) 
                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_38) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_36) 
                                                 & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_35) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_33) 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_35) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_33) 
                                                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_32) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_30) 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_32) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_30) 
                                                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6806(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6806\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_47 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_32) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_45))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_32) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_48))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_53 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_35) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_51))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_56 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_35) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_54))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_59 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_38) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_62 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_38) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_60))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6807(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6807\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_65 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_41) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_68 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_41) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_66))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_47 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_32) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_45))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_32) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_48))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_53 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_35) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_51))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_56 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_35) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_54))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6808(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6808\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_59 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_38) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_62 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_38) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_60))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_65 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_41) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_68 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_41) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_66))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_74 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_59) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_72))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_77 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_59) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_75))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6809(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6809\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_80 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_62) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_78))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_83 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_62) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_81))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_86 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_65) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_84))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_89 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_65) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_87))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_92 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_68) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_90))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_95 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_68) 
           | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_93))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6810(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6810\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_btb_entry 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_xcpt_ae_inst 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_replay 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_4 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_77)
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_90)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_btb_taken 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_btb_bridx 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_btb_bht_history 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_xcpt_pf_inst 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_pc 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_pc;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_83) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_4_data 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_490 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_478_0) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_266)) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_478_1) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_275))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_478_2) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_284)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_460 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_266) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_275)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_284));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_401 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_284) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_275) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_266)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_622 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_610_0) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_268)) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_610_1) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_277))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_610_2) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_286)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6811(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6811\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_592 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_268) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_277)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_286));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_533 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_286) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_277) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_268)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT__ram_size
           [0U] : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_size 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_size)
                      : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[3U] 
                          << 0xbU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
                                      >> 0x15U))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_offset 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_offset)
                         : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
                             << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[1U] 
                                       >> 0x1eU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set)
                          : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
                              << 0x12U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[1U] 
                                           >> 0xeU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way)
                      : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
                          << 0x19U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[1U] 
                                       >> 7U))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[0U] 
        = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1376);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[1U] 
        = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1376 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[2U] 
        = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1383);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[3U] 
        = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1383 
                   >> 0x20U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6812(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6812\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_mem_signed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_mem_signed)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_mem_signed)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_mem_signed)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_fp_val)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_is_fence 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_is_fence)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_fence)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_is_fence)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6813(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6813\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2077 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug 
        = ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_priv)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffffff000) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__legal_address 
        = ((((((((VL_ULL(0) == (VL_ULL(0x1fffffff000) 
                                & (VL_ULL(0x3000) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
                 | (VL_ULL(0) == (VL_ULL(0x1fffffff000) 
                                  & (VL_ULL(0x2010000) 
                                     ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
                | (VL_ULL(0) == (VL_ULL(0x1fffffff000) 
                                 & (VL_ULL(0x54000000) 
                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
               | (VL_ULL(0) == (VL_ULL(0x1fffc000000) 
                                & (VL_ULL(0xc000000) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
              | (VL_ULL(0) == (VL_ULL(0x1ffffff0000) 
                               & (VL_ULL(0x2000000) 
                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
             | (VL_ULL(0) == (VL_ULL(0x1fffffff000) 
                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffffff0000) 
                             & (VL_ULL(0x10000) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
           | (VL_ULL(0) == (VL_ULL(0x1fff0000000) & 
                            (VL_ULL(0x80000000) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6814(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6814\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_14 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_41 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                    << 2U)) 
                                                  >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1217 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                    << 2U)) 
                                                  >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_237 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                    << 2U)) 
                                                  >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_433 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                    << 2U)) 
                                                  >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_629 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                    << 2U)) 
                                                  >> 4U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6815(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6815\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_825 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                    << 2U)) 
                                                  >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1021 
        = ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U))) < (0xfffffffU 
                                              & (~ 
                                                 ((~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                    << 2U)) 
                                                  >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1224 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_48 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_244 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_440 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                  << 2U)) 
                                                >> 4U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6816(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6816\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_636 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_832 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1028 
        = (0xfffffffU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                  >> 4U)) ^ (~ ((~ 
                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                  << 2U)) 
                                                >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2024 
        = ((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_0) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_1)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_2)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_3)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2031 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_3) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_2) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_1) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_0))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_661 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5) 
            << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4) 
                       << 4U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
                                  << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2) 
                                             << 2U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1) 
                                                << 1U) 
                                               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__res_v 
        = (1U & ((1U & (((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                  >> 1U)) | (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                     >> 2U))) 
                        | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                   >> 3U)))) ? ((~ 
                                                 ((1U 
                                                   >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__count)) 
                                                  & (0U 
                                                     != 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                                 >> 0xaU)))))) 
                                                & ((~ 
                                                    ((0U 
                                                      >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__count)) 
                                                     & (0U 
                                                        != 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                                    >> 0x13U)))))) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data)))
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6817(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6817\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___T_253 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__invalidated) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___GEN_73 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___GEN_74 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__arb_io_in_1_ready 
        = ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__state)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___T_55 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__state)) 
              | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__state))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw_io_mem_s1_kill 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__s2_hit) 
           | (2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_0_mem_size 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_15_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_mem_size)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_14_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_mem_size)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_13_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_mem_size)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_12_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_mem_size)
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_11_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_mem_size)
                            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_10_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_mem_size)
                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_9_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_mem_size)
                                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_8_grant)
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_mem_size)
                                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_7_grant)
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_size)
                                            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_6_grant)
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_mem_size)
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_5_grant)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_mem_size)
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_4_grant)
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_mem_size)
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_3_grant)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_mem_size)
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_2_grant)
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_mem_size)
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_1_grant)
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_mem_size)
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_0_grant)
                                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_mem_size)
                                                         : 0U))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6818(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6818\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_26)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_pdst)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_203))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_232)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_255));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_209 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_206) 
           | (2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_206) 
                    << 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_43;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__room));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1_io_resp_f3_3_taken 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_99)
                  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_102)) 
                      | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_102)))
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_607)
                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_102) 
                         >> 2U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_81)
                                     ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_84)) 
                                         | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_84)))
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_598)
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_84) 
                                            >> 2U))
                                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_71)
                                         ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_74)) 
                                             | (4U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_74)))
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_589)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_74) 
                                                >> 2U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_67)
                                             ? (((3U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_70)) 
                                                 | (4U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_70)))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_580)
                                                 : 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_70) 
                                                 >> 2U))
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_67)
                                                 ? 
                                                (((3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_70)) 
                                                  | (4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_70)))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_571)
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_70) 
                                                  >> 2U))
                                                 : 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_67)
                                                  ? 
                                                 (((3U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_70)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_70)))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f3_3_taken)
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_70) 
                                                   >> 2U))
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f3_3_taken))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6819(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6819\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1_io_resp_f3_3_taken 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_99)
                  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_102)) 
                      | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_102)))
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_607)
                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_102) 
                         >> 2U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_81)
                                     ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_84)) 
                                         | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_84)))
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_598)
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_84) 
                                            >> 2U))
                                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_71)
                                         ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_74)) 
                                             | (4U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_74)))
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_589)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_74) 
                                                >> 2U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_67)
                                             ? (((3U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_70)) 
                                                 | (4U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_70)))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_580)
                                                 : 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_70) 
                                                 >> 2U))
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_67)
                                                 ? 
                                                (((3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_70)) 
                                                  | (4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_70)))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_571)
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_70) 
                                                  >> 2U))
                                                 : 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_67)
                                                  ? 
                                                 (((3U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_70)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_70)))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f3_3_taken)
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_70) 
                                                   >> 2U))
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f3_3_taken))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_0_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_predicted_pc_bits);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6820(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6820\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_1_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_2_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_3_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_4_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_5_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_6_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_7_predicted_pc_bits 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_predicted_pc_bits
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_predicted_pc_bits);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_7_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_7_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_7_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_0_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_1_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_predicted_pc_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6821(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6821\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_2_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_3_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_4_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_5_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_6_predicted_pc_valid 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_predicted_pc_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_predicted_pc_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_0_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_1_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_2_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_3_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_4_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_5_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_is_br));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_6_is_br 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_is_br)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_is_br));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__6822(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__6822\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_0_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_1_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_2_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_3_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_4_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_5_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f1_preds_6_taken 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_121 
                          >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_taken)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_taken));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code)));
    }
}
