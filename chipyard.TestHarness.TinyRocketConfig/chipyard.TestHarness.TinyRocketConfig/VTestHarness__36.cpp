// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2072(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2072\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_598 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_618 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_2) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_71 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_110 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_149 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
             ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)
                       : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_97 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_140 
        = (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)
                 : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                           ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)
                           : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                      ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_bits_size)
                                      : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_bits_size)
                                                 : 0U)) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)
                : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_5)
                           ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)
                           : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2073(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2073\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_166 
        = (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)
                 : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                           ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)
                           : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                     [0U] : 0U)) | 
             ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
               ? (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
               : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
                          ? (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                          : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_5)
                                     ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)
                                     : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_127 
        = (3U & (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)
                       : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                 ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)
                                 : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                            ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                               [0U] 
                                               >> 5U)
                                            : 0U)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                       ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                          >> 5U) : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
                                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                               >> 5U)
                                            : 0U)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_5)
                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_source
                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value_1]
                     : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_598 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_615 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2074(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2074\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___out_wofireMux_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3164 
        = ((0x82U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0x81U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0x7fU 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0x7eU 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0x7dU 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0x7cU 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0x7bU 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0x7aU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0x79U 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0x78U 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0x77U 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0x76U 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3151)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2076(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2076\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_714)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_714)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xff) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_627)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_627)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_627)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2077(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2077\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_831)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_831)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xf) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                << 2U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_728)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_744)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_744)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                             << 2U)))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_618)
                                    ? (0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                                      [0U] 
                                                      >> 5U))))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_618)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << (0xcU & 
                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                              [0U] 
                                              >> 3U))))
            : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2078(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2078\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2152[4];
    WData/*127:0*/ __Vtemp2153[4];
    WData/*127:0*/ __Vtemp2158[4];
    WData/*127:0*/ __Vtemp2159[4];
    WData/*1055:0*/ __Vtemp2166[33];
    WData/*1055:0*/ __Vtemp2167[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_2 
        = (7U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_rofireMux_T) 
                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                    [0U]) & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                             >> 5U)) & (0U == (0xf7f7feU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                               [0U]))) 
                 & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_wofireMux_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_rofireMux_T) 
           & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
              [0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_593 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)));
    __Vtemp2152[0U] = 1U;
    __Vtemp2152[1U] = 0U;
    __Vtemp2152[2U] = 0U;
    __Vtemp2152[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2153, __Vtemp2152, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp2158[0U] = 1U;
    __Vtemp2158[1U] = 0U;
    __Vtemp2158[2U] = 0U;
    __Vtemp2158[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2159, __Vtemp2158, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2153[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
                                                ? __Vtemp2159[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2153[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
                                                ? __Vtemp2159[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2153[2U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
                                                ? __Vtemp2159[2U]
                                                : 0U)));
    __Vtemp2166[0U] = 0xfU;
    __Vtemp2166[1U] = 0U;
    __Vtemp2166[2U] = 0U;
    __Vtemp2166[3U] = 0U;
    __Vtemp2166[4U] = 0U;
    __Vtemp2166[5U] = 0U;
    __Vtemp2166[6U] = 0U;
    __Vtemp2166[7U] = 0U;
    __Vtemp2166[8U] = 0U;
    __Vtemp2166[9U] = 0U;
    __Vtemp2166[0xaU] = 0U;
    __Vtemp2166[0xbU] = 0U;
    __Vtemp2166[0xcU] = 0U;
    __Vtemp2166[0xdU] = 0U;
    __Vtemp2166[0xeU] = 0U;
    __Vtemp2166[0xfU] = 0U;
    __Vtemp2166[0x10U] = 0U;
    __Vtemp2166[0x11U] = 0U;
    __Vtemp2166[0x12U] = 0U;
    __Vtemp2166[0x13U] = 0U;
    __Vtemp2166[0x14U] = 0U;
    __Vtemp2166[0x15U] = 0U;
    __Vtemp2166[0x16U] = 0U;
    __Vtemp2166[0x17U] = 0U;
    __Vtemp2166[0x18U] = 0U;
    __Vtemp2166[0x19U] = 0U;
    __Vtemp2166[0x1aU] = 0U;
    __Vtemp2166[0x1bU] = 0U;
    __Vtemp2166[0x1cU] = 0U;
    __Vtemp2166[0x1dU] = 0U;
    __Vtemp2166[0x1eU] = 0U;
    __Vtemp2166[0x1fU] = 0U;
    __Vtemp2166[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp2167, __Vtemp2166, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? __Vtemp2167[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_604)
            ? (0x7fffU & __Vtemp2167[0x20U]) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_609)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << (0xcU & 
                                             ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                                              >> 3U))))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_564 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2079(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2079\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*511:0*/ __Vtemp2171[16];
    WData/*511:0*/ __Vtemp2172[16];
    WData/*511:0*/ __Vtemp2173[16];
    WData/*511:0*/ __Vtemp2174[16];
    WData/*511:0*/ __Vtemp2175[16];
    WData/*511:0*/ __Vtemp2176[16];
    WData/*511:0*/ __Vtemp2177[16];
    WData/*511:0*/ __Vtemp2178[16];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_596 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_618)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << (0xcU & 
                                             ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                              >> 3U))))
            : VL_ULL(0));
    __Vtemp2171[0U] = 1U;
    __Vtemp2171[1U] = 0U;
    __Vtemp2171[2U] = 0U;
    __Vtemp2171[3U] = 0U;
    __Vtemp2171[4U] = 0U;
    __Vtemp2171[5U] = 0U;
    __Vtemp2171[6U] = 0U;
    __Vtemp2171[7U] = 0U;
    __Vtemp2171[8U] = 0U;
    __Vtemp2171[9U] = 0U;
    __Vtemp2171[0xaU] = 0U;
    __Vtemp2171[0xbU] = 0U;
    __Vtemp2171[0xcU] = 0U;
    __Vtemp2171[0xdU] = 0U;
    __Vtemp2171[0xeU] = 0U;
    __Vtemp2171[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2172, __Vtemp2171, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_40 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2172[6U] >> 0x19U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2173[0U] = 1U;
    __Vtemp2173[1U] = 0U;
    __Vtemp2173[2U] = 0U;
    __Vtemp2173[3U] = 0U;
    __Vtemp2173[4U] = 0U;
    __Vtemp2173[5U] = 0U;
    __Vtemp2173[6U] = 0U;
    __Vtemp2173[7U] = 0U;
    __Vtemp2173[8U] = 0U;
    __Vtemp2173[9U] = 0U;
    __Vtemp2173[0xaU] = 0U;
    __Vtemp2173[0xbU] = 0U;
    __Vtemp2173[0xcU] = 0U;
    __Vtemp2173[0xdU] = 0U;
    __Vtemp2173[0xeU] = 0U;
    __Vtemp2173[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2174, __Vtemp2173, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_176 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2174[6U] >> 0x18U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2175[0U] = 1U;
    __Vtemp2175[1U] = 0U;
    __Vtemp2175[2U] = 0U;
    __Vtemp2175[3U] = 0U;
    __Vtemp2175[4U] = 0U;
    __Vtemp2175[5U] = 0U;
    __Vtemp2175[6U] = 0U;
    __Vtemp2175[7U] = 0U;
    __Vtemp2175[8U] = 0U;
    __Vtemp2175[9U] = 0U;
    __Vtemp2175[0xaU] = 0U;
    __Vtemp2175[0xbU] = 0U;
    __Vtemp2175[0xcU] = 0U;
    __Vtemp2175[0xdU] = 0U;
    __Vtemp2175[0xeU] = 0U;
    __Vtemp2175[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2176, __Vtemp2175, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2176[6U] >> 0x13U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2177[0U] = 1U;
    __Vtemp2177[1U] = 0U;
    __Vtemp2177[2U] = 0U;
    __Vtemp2177[3U] = 0U;
    __Vtemp2177[4U] = 0U;
    __Vtemp2177[5U] = 0U;
    __Vtemp2177[6U] = 0U;
    __Vtemp2177[7U] = 0U;
    __Vtemp2177[8U] = 0U;
    __Vtemp2177[9U] = 0U;
    __Vtemp2177[0xaU] = 0U;
    __Vtemp2177[0xbU] = 0U;
    __Vtemp2177[0xcU] = 0U;
    __Vtemp2177[0xdU] = 0U;
    __Vtemp2177[0xeU] = 0U;
    __Vtemp2177[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2178, __Vtemp2177, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_232 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2178[6U] >> 0x1dU)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2080(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2080\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*511:0*/ __Vtemp2179[16];
    WData/*511:0*/ __Vtemp2180[16];
    WData/*511:0*/ __Vtemp2181[16];
    WData/*511:0*/ __Vtemp2182[16];
    WData/*511:0*/ __Vtemp2183[16];
    WData/*511:0*/ __Vtemp2184[16];
    WData/*511:0*/ __Vtemp2185[16];
    WData/*511:0*/ __Vtemp2186[16];
    WData/*511:0*/ __Vtemp2187[16];
    WData/*511:0*/ __Vtemp2188[16];
    // Body
    __Vtemp2179[0U] = 1U;
    __Vtemp2179[1U] = 0U;
    __Vtemp2179[2U] = 0U;
    __Vtemp2179[3U] = 0U;
    __Vtemp2179[4U] = 0U;
    __Vtemp2179[5U] = 0U;
    __Vtemp2179[6U] = 0U;
    __Vtemp2179[7U] = 0U;
    __Vtemp2179[8U] = 0U;
    __Vtemp2179[9U] = 0U;
    __Vtemp2179[0xaU] = 0U;
    __Vtemp2179[0xbU] = 0U;
    __Vtemp2179[0xcU] = 0U;
    __Vtemp2179[0xdU] = 0U;
    __Vtemp2179[0xeU] = 0U;
    __Vtemp2179[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2180, __Vtemp2179, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_309 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2180[6U] >> 0x1cU)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2181[0U] = 1U;
    __Vtemp2181[1U] = 0U;
    __Vtemp2181[2U] = 0U;
    __Vtemp2181[3U] = 0U;
    __Vtemp2181[4U] = 0U;
    __Vtemp2181[5U] = 0U;
    __Vtemp2181[6U] = 0U;
    __Vtemp2181[7U] = 0U;
    __Vtemp2181[8U] = 0U;
    __Vtemp2181[9U] = 0U;
    __Vtemp2181[0xaU] = 0U;
    __Vtemp2181[0xbU] = 0U;
    __Vtemp2181[0xcU] = 0U;
    __Vtemp2181[0xdU] = 0U;
    __Vtemp2181[0xeU] = 0U;
    __Vtemp2181[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2182, __Vtemp2181, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_403 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & __Vtemp2182[7U]) & (0U == (0x200U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 2U))));
    __Vtemp2183[0U] = 1U;
    __Vtemp2183[1U] = 0U;
    __Vtemp2183[2U] = 0U;
    __Vtemp2183[3U] = 0U;
    __Vtemp2183[4U] = 0U;
    __Vtemp2183[5U] = 0U;
    __Vtemp2183[6U] = 0U;
    __Vtemp2183[7U] = 0U;
    __Vtemp2183[8U] = 0U;
    __Vtemp2183[9U] = 0U;
    __Vtemp2183[0xaU] = 0U;
    __Vtemp2183[0xbU] = 0U;
    __Vtemp2183[0xcU] = 0U;
    __Vtemp2183[0xdU] = 0U;
    __Vtemp2183[0xeU] = 0U;
    __Vtemp2183[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2184, __Vtemp2183, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_467 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2184[6U] >> 0x14U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2185[0U] = 1U;
    __Vtemp2185[1U] = 0U;
    __Vtemp2185[2U] = 0U;
    __Vtemp2185[3U] = 0U;
    __Vtemp2185[4U] = 0U;
    __Vtemp2185[5U] = 0U;
    __Vtemp2185[6U] = 0U;
    __Vtemp2185[7U] = 0U;
    __Vtemp2185[8U] = 0U;
    __Vtemp2185[9U] = 0U;
    __Vtemp2185[0xaU] = 0U;
    __Vtemp2185[0xbU] = 0U;
    __Vtemp2185[0xcU] = 0U;
    __Vtemp2185[0xdU] = 0U;
    __Vtemp2185[0xeU] = 0U;
    __Vtemp2185[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2186, __Vtemp2185, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_624 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2186[6U] >> 0x1bU)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2187[0U] = 1U;
    __Vtemp2187[1U] = 0U;
    __Vtemp2187[2U] = 0U;
    __Vtemp2187[3U] = 0U;
    __Vtemp2187[4U] = 0U;
    __Vtemp2187[5U] = 0U;
    __Vtemp2187[6U] = 0U;
    __Vtemp2187[7U] = 0U;
    __Vtemp2187[8U] = 0U;
    __Vtemp2187[9U] = 0U;
    __Vtemp2187[0xaU] = 0U;
    __Vtemp2187[0xbU] = 0U;
    __Vtemp2187[0xcU] = 0U;
    __Vtemp2187[0xdU] = 0U;
    __Vtemp2187[0xeU] = 0U;
    __Vtemp2187[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2188, __Vtemp2187, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_668 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2188[6U] >> 0x10U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2081(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2081\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*511:0*/ __Vtemp2189[16];
    WData/*511:0*/ __Vtemp2190[16];
    WData/*511:0*/ __Vtemp2191[16];
    WData/*511:0*/ __Vtemp2192[16];
    WData/*511:0*/ __Vtemp2193[16];
    WData/*511:0*/ __Vtemp2194[16];
    WData/*511:0*/ __Vtemp2195[16];
    WData/*511:0*/ __Vtemp2196[16];
    WData/*511:0*/ __Vtemp2197[16];
    WData/*511:0*/ __Vtemp2198[16];
    // Body
    __Vtemp2189[0U] = 1U;
    __Vtemp2189[1U] = 0U;
    __Vtemp2189[2U] = 0U;
    __Vtemp2189[3U] = 0U;
    __Vtemp2189[4U] = 0U;
    __Vtemp2189[5U] = 0U;
    __Vtemp2189[6U] = 0U;
    __Vtemp2189[7U] = 0U;
    __Vtemp2189[8U] = 0U;
    __Vtemp2189[9U] = 0U;
    __Vtemp2189[0xaU] = 0U;
    __Vtemp2189[0xbU] = 0U;
    __Vtemp2189[0xcU] = 0U;
    __Vtemp2189[0xdU] = 0U;
    __Vtemp2189[0xeU] = 0U;
    __Vtemp2189[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2190, __Vtemp2189, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_696 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2190[6U] >> 0x15U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2191[0U] = 1U;
    __Vtemp2191[1U] = 0U;
    __Vtemp2191[2U] = 0U;
    __Vtemp2191[3U] = 0U;
    __Vtemp2191[4U] = 0U;
    __Vtemp2191[5U] = 0U;
    __Vtemp2191[6U] = 0U;
    __Vtemp2191[7U] = 0U;
    __Vtemp2191[8U] = 0U;
    __Vtemp2191[9U] = 0U;
    __Vtemp2191[0xaU] = 0U;
    __Vtemp2191[0xbU] = 0U;
    __Vtemp2191[0xcU] = 0U;
    __Vtemp2191[0xdU] = 0U;
    __Vtemp2191[0xeU] = 0U;
    __Vtemp2191[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2192, __Vtemp2191, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_733 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2192[6U] >> 0x1fU)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2193[0U] = 1U;
    __Vtemp2193[1U] = 0U;
    __Vtemp2193[2U] = 0U;
    __Vtemp2193[3U] = 0U;
    __Vtemp2193[4U] = 0U;
    __Vtemp2193[5U] = 0U;
    __Vtemp2193[6U] = 0U;
    __Vtemp2193[7U] = 0U;
    __Vtemp2193[8U] = 0U;
    __Vtemp2193[9U] = 0U;
    __Vtemp2193[0xaU] = 0U;
    __Vtemp2193[0xbU] = 0U;
    __Vtemp2193[0xcU] = 0U;
    __Vtemp2193[0xdU] = 0U;
    __Vtemp2193[0xeU] = 0U;
    __Vtemp2193[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2194, __Vtemp2193, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_785 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2194[6U] >> 0x11U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2195[0U] = 1U;
    __Vtemp2195[1U] = 0U;
    __Vtemp2195[2U] = 0U;
    __Vtemp2195[3U] = 0U;
    __Vtemp2195[4U] = 0U;
    __Vtemp2195[5U] = 0U;
    __Vtemp2195[6U] = 0U;
    __Vtemp2195[7U] = 0U;
    __Vtemp2195[8U] = 0U;
    __Vtemp2195[9U] = 0U;
    __Vtemp2195[0xaU] = 0U;
    __Vtemp2195[0xbU] = 0U;
    __Vtemp2195[0xcU] = 0U;
    __Vtemp2195[0xdU] = 0U;
    __Vtemp2195[0xeU] = 0U;
    __Vtemp2195[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2196, __Vtemp2195, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_918 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2196[6U] >> 0x1aU)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2197[0U] = 1U;
    __Vtemp2197[1U] = 0U;
    __Vtemp2197[2U] = 0U;
    __Vtemp2197[3U] = 0U;
    __Vtemp2197[4U] = 0U;
    __Vtemp2197[5U] = 0U;
    __Vtemp2197[6U] = 0U;
    __Vtemp2197[7U] = 0U;
    __Vtemp2197[8U] = 0U;
    __Vtemp2197[9U] = 0U;
    __Vtemp2197[0xaU] = 0U;
    __Vtemp2197[0xbU] = 0U;
    __Vtemp2197[0xcU] = 0U;
    __Vtemp2197[0xdU] = 0U;
    __Vtemp2197[0xeU] = 0U;
    __Vtemp2197[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2198, __Vtemp2197, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_991 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2198[6U] >> 0x16U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2082(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2082\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*511:0*/ __Vtemp2199[16];
    WData/*511:0*/ __Vtemp2200[16];
    WData/*511:0*/ __Vtemp2201[16];
    WData/*511:0*/ __Vtemp2202[16];
    WData/*511:0*/ __Vtemp2203[16];
    WData/*511:0*/ __Vtemp2204[16];
    WData/*511:0*/ __Vtemp2205[16];
    WData/*511:0*/ __Vtemp2206[16];
    WData/*511:0*/ __Vtemp2207[16];
    WData/*511:0*/ __Vtemp2208[16];
    // Body
    __Vtemp2199[0U] = 1U;
    __Vtemp2199[1U] = 0U;
    __Vtemp2199[2U] = 0U;
    __Vtemp2199[3U] = 0U;
    __Vtemp2199[4U] = 0U;
    __Vtemp2199[5U] = 0U;
    __Vtemp2199[6U] = 0U;
    __Vtemp2199[7U] = 0U;
    __Vtemp2199[8U] = 0U;
    __Vtemp2199[9U] = 0U;
    __Vtemp2199[0xaU] = 0U;
    __Vtemp2199[0xbU] = 0U;
    __Vtemp2199[0xcU] = 0U;
    __Vtemp2199[0xdU] = 0U;
    __Vtemp2199[0xeU] = 0U;
    __Vtemp2199[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2200, __Vtemp2199, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1043 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2200[6U] >> 0x12U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2201[0U] = 1U;
    __Vtemp2201[1U] = 0U;
    __Vtemp2201[2U] = 0U;
    __Vtemp2201[3U] = 0U;
    __Vtemp2201[4U] = 0U;
    __Vtemp2201[5U] = 0U;
    __Vtemp2201[6U] = 0U;
    __Vtemp2201[7U] = 0U;
    __Vtemp2201[8U] = 0U;
    __Vtemp2201[9U] = 0U;
    __Vtemp2201[0xaU] = 0U;
    __Vtemp2201[0xbU] = 0U;
    __Vtemp2201[0xcU] = 0U;
    __Vtemp2201[0xdU] = 0U;
    __Vtemp2201[0xeU] = 0U;
    __Vtemp2201[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2202, __Vtemp2201, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1159 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2202[6U] >> 0x17U)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2203[0U] = 1U;
    __Vtemp2203[1U] = 0U;
    __Vtemp2203[2U] = 0U;
    __Vtemp2203[3U] = 0U;
    __Vtemp2203[4U] = 0U;
    __Vtemp2203[5U] = 0U;
    __Vtemp2203[6U] = 0U;
    __Vtemp2203[7U] = 0U;
    __Vtemp2203[8U] = 0U;
    __Vtemp2203[9U] = 0U;
    __Vtemp2203[0xaU] = 0U;
    __Vtemp2203[0xbU] = 0U;
    __Vtemp2203[0xcU] = 0U;
    __Vtemp2203[0xdU] = 0U;
    __Vtemp2203[0xeU] = 0U;
    __Vtemp2203[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2204, __Vtemp2203, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1167 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
            & (__Vtemp2204[6U] >> 0x1eU)) & (0U == 
                                             (0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U))));
    __Vtemp2205[0U] = 1U;
    __Vtemp2205[1U] = 0U;
    __Vtemp2205[2U] = 0U;
    __Vtemp2205[3U] = 0U;
    __Vtemp2205[4U] = 0U;
    __Vtemp2205[5U] = 0U;
    __Vtemp2205[6U] = 0U;
    __Vtemp2205[7U] = 0U;
    __Vtemp2205[8U] = 0U;
    __Vtemp2205[9U] = 0U;
    __Vtemp2205[0xaU] = 0U;
    __Vtemp2205[0xbU] = 0U;
    __Vtemp2205[0xcU] = 0U;
    __Vtemp2205[0xdU] = 0U;
    __Vtemp2205[0xeU] = 0U;
    __Vtemp2205[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2206, __Vtemp2205, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_470 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
             & (__Vtemp2206[2U] >> 1U)) & (0U == (0x200U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))) 
           & (0x3ffU == (0x3ffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)));
    __Vtemp2207[0U] = 1U;
    __Vtemp2207[1U] = 0U;
    __Vtemp2207[2U] = 0U;
    __Vtemp2207[3U] = 0U;
    __Vtemp2207[4U] = 0U;
    __Vtemp2207[5U] = 0U;
    __Vtemp2207[6U] = 0U;
    __Vtemp2207[7U] = 0U;
    __Vtemp2207[8U] = 0U;
    __Vtemp2207[9U] = 0U;
    __Vtemp2207[0xaU] = 0U;
    __Vtemp2207[0xbU] = 0U;
    __Vtemp2207[0xcU] = 0U;
    __Vtemp2207[0xdU] = 0U;
    __Vtemp2207[0xeU] = 0U;
    __Vtemp2207[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2208, __Vtemp2207, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_941 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
             & (__Vtemp2208[2U] >> 3U)) & (0U == (0x200U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))) 
           & (0x3ffU == (0x3ffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2083(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2083\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*511:0*/ __Vtemp2209[16];
    WData/*511:0*/ __Vtemp2210[16];
    WData/*511:0*/ __Vtemp2211[16];
    WData/*511:0*/ __Vtemp2212[16];
    // Body
    __Vtemp2209[0U] = 1U;
    __Vtemp2209[1U] = 0U;
    __Vtemp2209[2U] = 0U;
    __Vtemp2209[3U] = 0U;
    __Vtemp2209[4U] = 0U;
    __Vtemp2209[5U] = 0U;
    __Vtemp2209[6U] = 0U;
    __Vtemp2209[7U] = 0U;
    __Vtemp2209[8U] = 0U;
    __Vtemp2209[9U] = 0U;
    __Vtemp2209[0xaU] = 0U;
    __Vtemp2209[0xbU] = 0U;
    __Vtemp2209[0xcU] = 0U;
    __Vtemp2209[0xdU] = 0U;
    __Vtemp2209[0xeU] = 0U;
    __Vtemp2209[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2210, __Vtemp2209, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_647 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
             & __Vtemp2210[2U]) & (0U == (0x200U & 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 2U)))) 
           & (0x3ffU == (0x3ffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)));
    __Vtemp2211[0U] = 1U;
    __Vtemp2211[1U] = 0U;
    __Vtemp2211[2U] = 0U;
    __Vtemp2211[3U] = 0U;
    __Vtemp2211[4U] = 0U;
    __Vtemp2211[5U] = 0U;
    __Vtemp2211[6U] = 0U;
    __Vtemp2211[7U] = 0U;
    __Vtemp2211[8U] = 0U;
    __Vtemp2211[9U] = 0U;
    __Vtemp2211[0xaU] = 0U;
    __Vtemp2211[0xbU] = 0U;
    __Vtemp2211[0xcU] = 0U;
    __Vtemp2211[0xdU] = 0U;
    __Vtemp2211[0xeU] = 0U;
    __Vtemp2211[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp2212, __Vtemp2211, 
                  (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_808 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_134) 
             & (__Vtemp2212[2U] >> 2U)) & (0U == (0x200U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))) 
           & (0x3ffU == (0x3ffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_3) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_71) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_69));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_71) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_69));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_110) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_108));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_110) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_108));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_149) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_147));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_149) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_147));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2084(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2084\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_97) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_95));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_97) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_95));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_140) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_135));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_140) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_135));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_166) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_6)
               ? 1U : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_166) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_6)
               ? 1U : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_127) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_122));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_127) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_122));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_615)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << (0xcU & 
                                             ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                                              >> 3U))))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_565 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_593 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_14 
        = (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___out_wofireMux_T_2) 
                     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                        >> 2U)) & (0U == (0xffeU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2085(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2085\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_2 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___out_wofireMux_T_2) 
                     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                        >> 3U)) & (0U == (0xffeU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 2U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_6 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___out_wofireMux_T_2) 
                    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                       >> 4U)) & (0xffeU == (0xffeU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 2U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_10 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___out_wofireMux_T_2) 
                  & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                     >> 5U)) & (0xffeU == (0xffeU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_11 
        = (((((((VL_ULL(0) == (VL_ULL(0x96112000) & (QData)((IData)(
                                                                    (0x2000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_1) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))) 
              | ((VL_ULL(0) == (VL_ULL(0x94000000) 
                                & (QData)((IData)((0x4000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
             | ((VL_ULL(0) == (VL_ULL(0x96110000) & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
            | ((VL_ULL(0) == (VL_ULL(0x96112000) & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
           | ((VL_ULL(0) == (VL_ULL(0x96110000) & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2086(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2086\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3177 
        = ((0x8fU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0x8eU 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0x8dU 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0x8cU 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0x8bU 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0x8aU 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0x89U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0x88U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0x87U 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0x86U 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0x85U 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0x84U 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0x83U 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3164)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2088(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2088\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_728)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_728)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_728)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_728)
                                                          ? 
                                                         (1U 
                                                          | (0xeU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U)))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | (0xeU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U)))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2091(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2091\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_570 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_4) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1085 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1082) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1170 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1085 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1082) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1170 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                     >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                         << 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes) 
                     >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                         << 2U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2092(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2092\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2213[4];
    WData/*127:0*/ __Vtemp2214[4];
    WData/*127:0*/ __Vtemp2219[4];
    WData/*127:0*/ __Vtemp2220[4];
    WData/*1055:0*/ __Vtemp2227[33];
    WData/*1055:0*/ __Vtemp2228[33];
    // Body
    __Vtemp2213[0U] = 1U;
    __Vtemp2213[1U] = 0U;
    __Vtemp2213[2U] = 0U;
    __Vtemp2213[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2214, __Vtemp2213, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp2219[0U] = 1U;
    __Vtemp2219[1U] = 0U;
    __Vtemp2219[2U] = 0U;
    __Vtemp2219[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2220, __Vtemp2219, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597)
                ? __Vtemp2214[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2220[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597)
                ? __Vtemp2214[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2220[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597)
                ? __Vtemp2214[2U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2220[2U]
                                                : 0U)));
    __Vtemp2227[0U] = 0xfU;
    __Vtemp2227[1U] = 0U;
    __Vtemp2227[2U] = 0U;
    __Vtemp2227[3U] = 0U;
    __Vtemp2227[4U] = 0U;
    __Vtemp2227[5U] = 0U;
    __Vtemp2227[6U] = 0U;
    __Vtemp2227[7U] = 0U;
    __Vtemp2227[8U] = 0U;
    __Vtemp2227[9U] = 0U;
    __Vtemp2227[0xaU] = 0U;
    __Vtemp2227[0xbU] = 0U;
    __Vtemp2227[0xcU] = 0U;
    __Vtemp2227[0xdU] = 0U;
    __Vtemp2227[0xeU] = 0U;
    __Vtemp2227[0xfU] = 0U;
    __Vtemp2227[0x10U] = 0U;
    __Vtemp2227[0x11U] = 0U;
    __Vtemp2227[0x12U] = 0U;
    __Vtemp2227[0x13U] = 0U;
    __Vtemp2227[0x14U] = 0U;
    __Vtemp2227[0x15U] = 0U;
    __Vtemp2227[0x16U] = 0U;
    __Vtemp2227[0x17U] = 0U;
    __Vtemp2227[0x18U] = 0U;
    __Vtemp2227[0x19U] = 0U;
    __Vtemp2227[0x1aU] = 0U;
    __Vtemp2227[0x1bU] = 0U;
    __Vtemp2227[0x1cU] = 0U;
    __Vtemp2227[0x1dU] = 0U;
    __Vtemp2227[0x1eU] = 0U;
    __Vtemp2227[0x1fU] = 0U;
    __Vtemp2227[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp2228, __Vtemp2227, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2228[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? (0x7fffU & __Vtemp2228[0x20U]) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_14) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_14) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_16 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_14) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_17 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_14) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_2) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_2) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_2) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_2) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x18U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2093(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2093\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_6) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_6) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_6) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_6) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_10) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_10) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_10) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_10) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_570 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_11) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_6));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_11) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_6));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2096(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2096\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1055:0*/ __Vtemp2233[33];
    WData/*1055:0*/ __Vtemp2234[33];
    WData/*1055:0*/ __Vtemp2244[33];
    WData/*1055:0*/ __Vtemp2245[33];
    // Body
    VL_EXTEND_WI(1027,4, __Vtemp2233, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp2234, __Vtemp2233, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2234[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xbU]));
    VL_EXTEND_WI(1026,3, __Vtemp2244, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp2245, __Vtemp2244, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2245[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_618)
                                    ? (0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                      >> 5U))))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2097(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2097\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | (0xeU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U)))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_5) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1170)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1170)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xff) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 << 3U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1170)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1170)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xff) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                 << 3U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2098(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2098\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2101(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2101\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | (0xeU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U)))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3203 
        = ((0xa9U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xa8U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xa7U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xa6U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0xa5U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xa4U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xa3U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xa2U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xa1U 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xa0U 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0x9fU 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0x9eU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0x9dU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3190)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2103(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2103\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3216 
        = ((0xb6U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xb5U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xb4U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xb3U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0xb2U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xb1U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xb0U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xafU 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xaeU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xadU 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0xacU 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0xabU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0xaaU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3203)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2105(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2105\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                            << 2U)))
                                  : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))
                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2106(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2106\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                            << 2U)))
                                  : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3229 
        = ((0xc3U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xc2U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xc1U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xc0U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0x380006fU
                                                    : 
                                                   ((0xbfU 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xbeU 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xbdU 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xbcU 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xbbU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xbaU 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0xb9U 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0xb8U 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0xb7U 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3216)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2147(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2147\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2148(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2148\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT___T = (1U 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_177 
        = (((0U == (0x74U & (0x40U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))) 
            | (0U == (0x78U & (0x50U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_297 
        = (((((((0U == (0x3c0U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))) 
                | (0U == (0x3f4U & (0x44U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
               | (0U == (0x3f8U & (0x58U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
              | (0U == (0x3e0U & (0x60U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
             | (0U == (0x380U & (0x80U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
            | (0U == (0x300U & (0x100U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_297 
        = (((((((0U == (0x3c0U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))) 
                | (0U == (0x3f4U & (0x44U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
               | (0U == (0x3f8U & (0x58U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
              | (0U == (0x3e0U & (0x60U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
             | (0U == (0x380U & (0x80U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
            | (0U == (0x300U & (0x100U ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2254[4];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_495 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__address)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_555 
        = (((0x7fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_795 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__address)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    VL_EXTEND_WI(128,9, __Vtemp2254, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_504 
        = ((0U == ((((__Vtemp2254[0U] ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[0U]) 
                     | (__Vtemp2254[1U] ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[1U])) 
                    | (__Vtemp2254[2U] ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[2U])) 
                   | (__Vtemp2254[3U] ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[3U]))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_795 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__address)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_621 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode)) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_30)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode)) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_861 
        = ((((7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                            >> 0x28U))) == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                                             ? 4U : 
                                            ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_30)))) 
            | ((7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 0x28U))) == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_615 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_587)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_807 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_819 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_815 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_855 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
                   >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_896 
        = (1U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_827)
                     ? 1U : 0U) != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_841)
                                     ? (1U & ((IData)(1U) 
                                              << (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x23U)))))
                                     : 0U)) | (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_827)
                                                   ? 1U
                                                   : 0U))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_564 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_536)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___T_26 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___T_33 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_855 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
                   >> (1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x23U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_532 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_520 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
              ? 2U : 0U) == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_586 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
              ? 2U : 0U) == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes) 
                                   >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_651 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
              ? 2U : 0U) == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1) 
                                   >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_823 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_413 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_denied)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_811 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_877 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size) 
            == (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes) 
                       >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                           << 2U)) >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_942 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size) 
            == (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1) 
                       >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                           << 2U)) >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_512 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_570 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_30)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_582 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_46)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_22 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_10)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_10)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_8 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_0)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_1))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_15 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_10)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_0) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_1))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_507 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_519 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_404 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_denied)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_corrupt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_523 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_511 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_577 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size) 
            == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes) 
                      >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_642 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size) 
            == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1) 
                      >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_503 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2160(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2160\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_656 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_550 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__param)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_13 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_575 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_546 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_570 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_633 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_30)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_408 
        = ((((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                           >> 5U))) | (1U == (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                               >> 5U)))) 
            | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2161(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2161\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2255[3];
    WData/*383:0*/ __Vtemp2258[12];
    WData/*383:0*/ __Vtemp2261[12];
    WData/*383:0*/ __Vtemp2262[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_587 
        = (((3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   >> 5U)) == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_558 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__source)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_582 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    VL_SHIFTR_WWI(96,96,7, __Vtemp2255, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_603 
        = (1U & ((~ __Vtemp2255[0U]) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_632 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)) 
            == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_554 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_578 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    VL_SHIFTR_WWI(384,384,10, __Vtemp2258, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    __Vtemp2261[0U] = (7U & (__Vtemp2258[0U] >> 1U));
    __Vtemp2261[1U] = 0U;
    __Vtemp2261[2U] = 0U;
    __Vtemp2261[3U] = 0U;
    __Vtemp2261[4U] = 0U;
    __Vtemp2261[5U] = 0U;
    __Vtemp2261[6U] = 0U;
    __Vtemp2261[7U] = 0U;
    __Vtemp2261[8U] = 0U;
    __Vtemp2261[9U] = 0U;
    __Vtemp2261[0xaU] = 0U;
    __Vtemp2261[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp2262, __Vtemp2261);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_644 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)) 
            == (0xfU & __Vtemp2262[0U])) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_628 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_30)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_67 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                         & (~ (0x1fU & ((IData)(3U) 
                                        << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_562 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__address)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_80 
        = (1U & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                  [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_67 
        = ((0U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                         & (~ (0x1fU & ((IData)(3U) 
                                        << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag)))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_562 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
            == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__address) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_627 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                         >> (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                   >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_645 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2263[3];
    WData/*383:0*/ __Vtemp2266[12];
    WData/*383:0*/ __Vtemp2269[12];
    WData/*383:0*/ __Vtemp2270[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_550 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__param)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_546 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__opcode)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_570 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_558 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__source)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_582 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    VL_SHIFTR_WWI(96,96,7, __Vtemp2263, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_603 
        = (1U & ((~ __Vtemp2263[0U]) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_554 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_578 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    VL_SHIFTR_WWI(384,384,10, __Vtemp2266, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    __Vtemp2269[0U] = (7U & (__Vtemp2266[0U] >> 1U));
    __Vtemp2269[1U] = 0U;
    __Vtemp2269[2U] = 0U;
    __Vtemp2269[3U] = 0U;
    __Vtemp2269[4U] = 0U;
    __Vtemp2269[5U] = 0U;
    __Vtemp2269[6U] = 0U;
    __Vtemp2269[7U] = 0U;
    __Vtemp2269[8U] = 0U;
    __Vtemp2269[9U] = 0U;
    __Vtemp2269[0xaU] = 0U;
    __Vtemp2269[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp2270, __Vtemp2269);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_644 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
            == (0xfU & __Vtemp2270[0U])) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_67 
        = ((0U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         & (~ (0x1fU & ((IData)(3U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_562 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
            == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__address) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_62 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_35)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_35)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_628 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_30)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_656 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_d_ready)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp2275[12];
    WData/*383:0*/ __Vtemp2276[12];
    WData/*383:0*/ __Vtemp2281[12];
    WData/*383:0*/ __Vtemp2282[12];
    WData/*383:0*/ __Vtemp2287[12];
    WData/*383:0*/ __Vtemp2288[12];
    WData/*383:0*/ __Vtemp2293[12];
    WData/*383:0*/ __Vtemp2294[12];
    WData/*95:0*/ __Vtemp2295[3];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    __Vtemp2275[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp2275[1U] = 0U;
    __Vtemp2275[2U] = 0U;
    __Vtemp2275[3U] = 0U;
    __Vtemp2275[4U] = 0U;
    __Vtemp2275[5U] = 0U;
    __Vtemp2275[6U] = 0U;
    __Vtemp2275[7U] = 0U;
    __Vtemp2275[8U] = 0U;
    __Vtemp2275[9U] = 0U;
    __Vtemp2275[0xaU] = 0U;
    __Vtemp2275[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp2276, __Vtemp2275);
    __Vtemp2281[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp2281[1U] = 0U;
    __Vtemp2281[2U] = 0U;
    __Vtemp2281[3U] = 0U;
    __Vtemp2281[4U] = 0U;
    __Vtemp2281[5U] = 0U;
    __Vtemp2281[6U] = 0U;
    __Vtemp2281[7U] = 0U;
    __Vtemp2281[8U] = 0U;
    __Vtemp2281[9U] = 0U;
    __Vtemp2281[0xaU] = 0U;
    __Vtemp2281[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp2282, __Vtemp2281);
    __Vtemp2287[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp2287[1U] = 0U;
    __Vtemp2287[2U] = 0U;
    __Vtemp2287[3U] = 0U;
    __Vtemp2287[4U] = 0U;
    __Vtemp2287[5U] = 0U;
    __Vtemp2287[6U] = 0U;
    __Vtemp2287[7U] = 0U;
    __Vtemp2287[8U] = 0U;
    __Vtemp2287[9U] = 0U;
    __Vtemp2287[0xaU] = 0U;
    __Vtemp2287[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp2288, __Vtemp2287);
    __Vtemp2293[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp2293[1U] = 0U;
    __Vtemp2293[2U] = 0U;
    __Vtemp2293[3U] = 0U;
    __Vtemp2293[4U] = 0U;
    __Vtemp2293[5U] = 0U;
    __Vtemp2293[6U] = 0U;
    __Vtemp2293[7U] = 0U;
    __Vtemp2293[8U] = 0U;
    __Vtemp2293[9U] = 0U;
    __Vtemp2293[0xaU] = 0U;
    __Vtemp2293[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp2294, __Vtemp2293);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_640 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
             == ((7U == (7U & __Vtemp2276[0U])) ? 4U
                  : ((6U == (7U & __Vtemp2282[0U]))
                      ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
               == ((7U == (7U & __Vtemp2288[0U])) ? 4U
                    : ((6U == (7U & __Vtemp2294[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    VL_SHIFTR_WWI(96,96,7, __Vtemp2295, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_622 
        = (1U & ((__Vtemp2295[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_594)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_661 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_out_2_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_583 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_637 
        = (((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_649 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
            == (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                       >> (0xcU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                   >> 3U))) >> 1U))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_781 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_781 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_670 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_d_ready)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_787 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_d_ready)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_661 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_650 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_d_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_656 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__2167(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__2167\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_655 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_656 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_656 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_661 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_661 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___T_5 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_2) 
                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_2) 
                        - (IData)(1U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_588 
        = (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_941))) 
                  | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1063 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1063 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1051 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1051 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_948 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1067 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}
