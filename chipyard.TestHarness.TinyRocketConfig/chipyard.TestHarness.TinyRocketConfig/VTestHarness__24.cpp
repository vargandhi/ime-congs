// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1183(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1183\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_244)
            ? ((1U == (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                ? ((0xfffffffcU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_paddr) 
                   | (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_addr))
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_35)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_35);
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1184(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1184\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_fence_i 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_fence_i;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_xcpt)
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_33)
                    ? 0U : ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_T_5))
                             ? 1U : 0U)) : (((((0U 
                                                == 
                                                (0x48U 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                               | (0U 
                                                  == 
                                                  (0x18U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                              | (0x4000U 
                                                 == 
                                                 (0x4008U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                             << 1U) 
                                            | (((((0U 
                                                   == 
                                                   (0x58U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                                  | (0U 
                                                     == 
                                                     (0x20U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                 | (4U 
                                                    == 
                                                    (0xcU 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                | (0x48U 
                                                   == 
                                                   (0x48U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                               | (0x4050U 
                                                  == 
                                                  (0x4050U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1185(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1185\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 
                = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_1)
                            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     >> 5U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_vaddr_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_addr;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_52)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_jal 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_jal;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_1027) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_1 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1027) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__source_1 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1070) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1052) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_div 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_div;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1186(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1186\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_illegal_insn) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_0 
                = (0x3fffffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__inst 
                                  >> 2U));
        } else {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_38) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_0 
                    = (0x3fffffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_rs_0 
                                      >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_52)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_branch 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_branch;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0x1ffffffU 
                                        & (((IData)(0xfffU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                           >> 2U)))
                                  : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_1 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_2 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_3 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_6 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_7 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((8U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_8 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((9U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_9 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_10 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_11 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_12 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_13 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_14 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_15 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x10U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_16 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x11U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_17 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x12U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_18 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x13U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_19 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x14U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_20 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x15U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_21 
                = (0xfU & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1187(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1187\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__req_tag 
            = (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_inst 
                        >> 7U));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__blockUncachedGrant 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_270)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__dataArb_io_in_0_valid)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore2_addr 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_addr;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm 
            = (((((4U == (0x1cU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                  | (0x10U == (0x14U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                 | (0U == (0x30U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                << 2U) | ((((4U == (0x44U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                            | (8U == (8U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                           << 1U) | ((8U == (8U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                     | (0x40U == (0x44U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                      : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                         >> 5U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_30)
                  ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_34)
                      : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_34)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1188(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1188\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_xcpt)
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_33)
                    ? 2U : ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_T_5))
                             ? 2U : 1U)) : ((((4U == 
                                               (0x24U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                              | (0x48U 
                                                 == 
                                                 (0x48U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                             << 1U) 
                                            | ((((0U 
                                                  == 
                                                  (0x4004U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                                 | (0U 
                                                    == 
                                                    (0x50U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                | (0U 
                                                   == 
                                                   (0x44U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                               | (0U 
                                                  == 
                                                  (0x18U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? 1U : 4U);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1190(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1190\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vfunc_serial_tick__1__serial_out_ready;
    CData/*0:0*/ __Vfunc_serial_tick__1__serial_in_valid;
    IData/*31:0*/ __Vfunc_serial_tick__1__Vfuncout;
    IData/*31:0*/ __Vfunc_serial_tick__1__serial_in_bits;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? 1U : 4U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg = 0U;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg = 0U;
    } else {
        vlSymsp->TOP____024unit.__Vdpiimwrap_serial_tick_TOP____024unit(
                                                                        (5U 
                                                                         == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)), __Vfunc_serial_tick__1__serial_out_ready, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0, __Vfunc_serial_tick__1__serial_in_valid, 
                                                                        ((((0U 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                                           | (1U 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                                                          | (2U 
                                                                             == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                                                         | (6U 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))), __Vfunc_serial_tick__1__serial_in_bits, __Vfunc_serial_tick__1__Vfuncout);
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready 
            = __Vfunc_serial_tick__1__serial_out_ready;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid 
            = __Vfunc_serial_tick__1__serial_in_valid;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits 
            = __Vfunc_serial_tick__1__serial_in_bits;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit 
            = __Vfunc_serial_tick__1__Vfuncout;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg 
            = (1U & vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1191(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1191\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0
                : 0U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid_REG 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s1_valid;
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_replay)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_imem_req_valid)))));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1192(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1192\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = (((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                  ? (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_RW0_rdata 
                                     >> 0x18U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3)) 
                                << 0x18U)) | (0xff0000U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_RW0_rdata 
                                                   >> 0x10U)
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2)) 
                                                 << 0x10U))) 
               | ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                ? (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_RW0_rdata 
                                   >> 8U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1)) 
                              << 8U)) | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_RW0_rdata
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0)))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killm)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_no_xcpt 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_no_xcpt;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_45[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_45[0U])));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1193(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1193\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_csr 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_csr;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_tag 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_dmem_req_valid)
                ? (0x7cU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_inst 
                            >> 5U)) : 1U);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_signed 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_dmem_req_valid) 
               & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_inst 
                     >> 0xeU)));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1194(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1194\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_held 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore2_valid)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore_drain))));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_52)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_slow_bypass 
                = ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                   | (2U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_mem_size)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_sink;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1195(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1195\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_denied;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___r = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_wen) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_124))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___r 
                = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_122 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_124)
                       ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                   >> 7U)))
                       : 0U));
        } else {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ll_wen) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___r 
                    = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_122;
            }
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__imem_might_request_reg 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_pc_valid)) 
                 | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                    >> 1U)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dscratch 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
            ? ((0x343U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                     >> 0x14U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_138)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_138);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1196(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1196\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x342U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (0x8000000fU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata)
                         : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_137)
                     : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_137));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm 
                    = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                             >> 0xfU));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step 
                    = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x340U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mscratch 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
            ? ((0x7b1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                     >> 0x14U))) ? 
               (~ (1U | (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_120)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_120);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1197(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1197\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x304U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
                = (0x888U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_244)
            ? ((1U == (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_36))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_36));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_hi_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? VL_ULL(0) : (VL_ULL(0x3ffffffffffffff) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                               ? ((0xb80U == (0xfffU 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x14U)))
                                   ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1979 
                                      >> 6U) : ((0xb00U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                     >> 0x14U)))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1978 
                                                 >> 6U)
                                                 : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_3))
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_3)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_lo_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (0x3fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                      ? ((0xb80U == 
                                          (0xfffU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x14U)))
                                          ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1979
                                          : ((0xb00U 
                                              == (0xfffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                     >> 0x14U)))
                                              ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1978
                                              : (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_2))))
                                      : (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_2))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1198(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1198\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp1368[4];
    WData/*127:0*/ __Vtemp1369[4];
    // Body
    VL_EXTEND_WI(103,32, __Vtemp1368, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp1368[0U] >> 7U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_177))
                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_177))));
    VL_EXTEND_WI(103,32, __Vtemp1369, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp1369[0U] >> 3U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_176))
                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_176))));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_hi 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? VL_ULL(0) : (VL_ULL(0x3ffffffffffffff) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                               ? ((0xb82U == (0xfffU 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x14U)))
                                   ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1981 
                                      >> 6U) : ((0xb02U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                     >> 0x14U)))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1980 
                                                 >> 6U)
                                                 : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_1))
                               : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_lo 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (0x3fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                      ? ((0xb82U == 
                                          (0xfffU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x14U)))
                                          ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1981
                                          : ((0xb02U 
                                              == (0xfffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                     >> 0x14U)))
                                              ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1980
                                              : (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_0))))
                                      : (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1199(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1199\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___pstore1_cmd_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_cmd 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_5 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_5 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
            ? ((0x341U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                     >> 0x14U))) ? 
               (~ (1U | (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_136)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_136);
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1200(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1200\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__dMode;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x305U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec 
                    = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x 
                        = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 2U));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action 
                        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__dMode) 
                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___newBPC_T_8 
                              >> 0xcU));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r 
                        = (1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1201(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1201\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w 
                        = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 1U));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_6 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_6 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__mask 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_mask;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1202(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1202\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___pstore1_cmd_T) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_rmw_r 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_read) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_write) 
                  & (0x11U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_cmd))));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa = 0x40801105U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x301U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                if ((1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_pc 
                               >> 1U)) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                          >> 2U)))) {
                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
                        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___reg_misa_T_8;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1203(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1203\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_valid 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_load_use 
            = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_valid) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__data_hazard_mem)) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_mem));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_5 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_6 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_7 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_8 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((9U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_9 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_10 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_11 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_12 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_13 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_14 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_15 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x10U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_16 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_17 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_18 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_19 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_20 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0x15U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_21 
                = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]);
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1204(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1204\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut 
                = ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)))
                    ? 0xcU : ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)))
                               ? 6U : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)))
                                        ? 0xeU : 8U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_696) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1205(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1205\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_source 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT___T_3) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__acq_param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater_io_deq_bits_param;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT___T_3) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__acq_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_52)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_store 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
                   & ((((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                        | (0x11U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___mem_reg_load_T_21)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_52)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_load 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
                   & ((((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                        | (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___mem_reg_load_T_21)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1206(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1206\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
            if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch 
                    = (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                             >> 7U));
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1207(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1207\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_1984) {
            if ((0x7a2U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                    = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___value_T_3;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_valid 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killm)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1024) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_opcode;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0 
                = (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1208(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1208\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_corrupt;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut 
                = ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_param)))
                    ? 0xcU : ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_param)))
                               ? 6U : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_param)))
                                        ? 0xeU : 8U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_mask;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_source 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_source;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_mem 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_mem;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT___T_3) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__acq_mask 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT__full)
                ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1209(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1209\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_999) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_999) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1024) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_address;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1024) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_size;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT___value_T_3;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_address;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1210(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1210\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__acknum))) {
                vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__acq_source) 
                             >> 4U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_999) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_999) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_999) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_999) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1211(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1211\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0 
                = (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_mask = 7U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT___readys_mask_T_3) 
                            << 2U)));
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_request_refill_REG 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT___s1_can_request_refill_T)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tagMatch;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) 
              & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_imem_req_valid) 
                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_replay)))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1212(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1212\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_565) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                            ? ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     >> 5U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dFirst_size;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1213(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1213\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                     >> 5U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_565) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_not_nacked_in_s1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_nack)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask = 0x7fU;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_mask_T_6) 
                   | (0x70U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_mask_T_6) 
                               << 4U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                << 0x1aU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                             >> 6U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 5U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1214(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1214\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                      << 0x1eU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                   >> 2U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 8U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xfU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 6U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1215(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1215\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s1_speculative 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_imem_req_valid)
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__take_pc_wb))
                  : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_replay)
                      ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_speculative)
                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s0_speculative))));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst 
            = (0U != (0x40U & (~ (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___prot_x_T_43) 
                                     & (~ ((3U >= (3U 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug) 
                                                      << 2U))) 
                                           & (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s1_pc))))))) 
                                    & (((2U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
                                         ? (0U == (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                    ^ 
                                                    (~ 
                                                     (3U 
                                                      | (~ 
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                          << 2U))))) 
                                                   & (~ 
                                                      (3U 
                                                       | (0xfffffffcU 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__pmp_mask_hi 
                                                             << 2U))))))
                                         : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___res_hit_T_180)))
                                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                           | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))
                                        : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_6)
                                            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))
                                            : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_5)
                                                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))
                                                : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_4)
                                                    ? 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_3)
                                                     ? 
                                                    ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_2)
                                                      ? 
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_1)
                                                       ? 
                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))
                                                       : 
                                                      ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit)) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                          | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l))))))))))))
                                    ? 3U : 0U) << 5U))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1216(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1216\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0x1fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1fffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = (0x1fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1217(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1217\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dToggle;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_2 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_2 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__earlyWinner_2;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_hit_state_state 
            = (((0x80000000U <= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_paddr) 
                & (0x80004000U > vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_paddr))
                ? 3U : 0U);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1218(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1218\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_valid_masked) 
              & (0x14U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_cmd))));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
            [0U];
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
            [0U];
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                            ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                               [0U] ? (~ (0x7ffU & 
                                          (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                           >> 2U)))
                                : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                     [0U] >> 5U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
            [0U];
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1219(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1219\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((0U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                 >> 2U))) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__r_tile_resets_0__DOT__reg_));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1220(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1220\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 
            = (0xffffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                            >> 2U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat)))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_tlb_xcpt_pf_st = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_tlb_xcpt_pf_ld = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_tlb_xcpt_ma_st 
            = (0U != (((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___misaligned_T_3) 
                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write))
                       ? (0x40U & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff)
                                        ? 3U : 0U) 
                                      << 5U))) : 0U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1221(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1221\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_tlb_xcpt_ma_ld 
            = (0U != (((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___misaligned_T_3) 
                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read))
                       ? (0x40U & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff)
                                        ? 3U : 0U) 
                                      << 5U))) : 0U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_tlb_xcpt_ae_ld 
            = (0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read)
                       ? (0x40U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array) 
                                   | (~ (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__deny_access_to_debug))) 
                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_7)
                                               ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))
                                               : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_6)
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_5)
                                                    ? 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_4)
                                                     ? 
                                                    ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_3)
                                                      ? 
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_2)
                                                       ? 
                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_1)
                                                        ? 
                                                       ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                        | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))
                                                        : 
                                                       ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit)) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                           | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l))))))))))))
                                           ? 3U : 0U) 
                                         << 5U)))) : 0U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_34) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_tlb_xcpt_ae_st 
            = (0U != (0x40U & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write) 
                                   | ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
                                      | (0x17U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))))
                                   ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array) 
                                      | (~ (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___prot_w_T_25) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__deny_access_to_debug))) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_7)
                                                  ? 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_6)
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_5)
                                                    ? 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_4)
                                                     ? 
                                                    ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_3)
                                                      ? 
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_2)
                                                       ? 
                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit_1)
                                                        ? 
                                                       ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                        | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))
                                                        : 
                                                       ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_hit)) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                           | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l))))))))))))
                                              ? 3U : 0U) 
                                            << 5U)))
                                   : 0U) | ((0x11U 
                                             == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))
                                             ? (~ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___prot_w_T_25)
                                                     ? 3U
                                                     : 0U) 
                                                   << 5U))
                                             : 0U)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_amo_logical)
                                    ? (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___prot_w_T_25)
                                            ? 3U : 0U) 
                                          << 5U)) : 0U)) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_amo_arithmetic)
                                   ? (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___prot_w_T_25)
                                           ? 3U : 0U) 
                                         << 5U)) : 0U))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1222(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1222\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                            ? ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_565) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                            ? ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                     >> 5U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1223(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1223\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_598) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                     >> 5U));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_593) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_565) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_52)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_rvc 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_rvc;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1224(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1224\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT___bundleIn_0_d_bits_T_2)
                ? 0U : 1U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1225(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1225\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___bundleIn_0_d_bits_corrupt_T)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1226(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1226\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___bundleIn_0_d_bits_denied_T)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = ((7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                [0U]) ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                ? 1U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1227(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1227\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__acq_source) 
                     >> 6U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__state))
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_data
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__bundleIn_0_d_bits_data_r);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__acknum))
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__dFirst_size)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__dOrig));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_690) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1228(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1228\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_0)
                  ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]
                  : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_1)
                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer_auto_out_d_bits_data
                            : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]
                                       : 0U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1229(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1229\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_0)
                 ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_opcode))
                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__logic_out
                     : ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param))
                         ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__adder_out
                         : (((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param)) 
                             == (1U & (((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_a_ext 
                                               >> 0x1fU)) 
                                        == (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_d_ext 
                                                  >> 0x1fU)))
                                        ? (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__adder_out 
                                              >> 0x1fU))
                                        : ((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                                  >> 1U)) 
                                           == (1U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_a_ext 
                                                >> 0x1fU))))))
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data
                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data)))
                 : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_1)
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data
                           : 0U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read__v0 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1230(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1230\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_696) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_579) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_564) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_696) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1231(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1231\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_579) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_564) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1232(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1232\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dToggle;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_repeat)))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___T_7) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc 
                = ((0xfffffffcU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc) 
                   | (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                            + ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                               << 1U))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1233(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1233\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_valid_masked) 
             & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_read) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_write)) 
                 | ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_size))) 
                | (0x17U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_cmd)))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_no_xcpt))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_nack)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT___value_T_3;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1234(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1234\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___GEN_46)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___T_7) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fdata 
                = (0xffffU & (IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data) 
                                                         | (0xffffU 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data 
                                                               >> 0x10U))))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data))) 
                                      >> (0x30U & (
                                                   ((1U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                                        >> 1U)) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady)) 
                                                   << 4U)))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1235(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1235\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat)))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
               ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_3)
               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___valid_0_T_6)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1236(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1236\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0)
                 ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_opcode))
                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out
                     : ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param))
                         ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out
                         : (((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param)) 
                             == (1U & (((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
                                               >> 0x1fU)) 
                                        == (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext 
                                                  >> 0x1fU)))
                                        ? (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out 
                                              >> 0x1fU))
                                        : ((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                                  >> 1U)) 
                                           == (1U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
                                                >> 0x1fU))))))
                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data
                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data)))
                 : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_data
                           : 0U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1237(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1237\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1238(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1238\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1239(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1239\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts) 
                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_48)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_cause 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_57)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_cause
                : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_58)
                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_debug_breakpoint)
                             ? 0xeU : 3U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1240(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1240\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__muxStateEarly_0)
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_write)
                    ? ((0x11U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                        : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_read)
                            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                            : ((8U 
                                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
                                                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data
                                                       : 0U)))))))))
                            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_data))
                    : 0U) : 0U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1241(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1241\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_pc 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_pc
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s2_pc);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_data 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_data
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_0);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_ae_inst)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_replay 
            = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_replay)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay));
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat)))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1242(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1242\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_559) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                     [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]
                      : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]
                                : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                           ? (((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                                               | ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                                                  | ((5U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                      ? 
                                                     (0U 
                                                      == 
                                                      (0xf7f7feU 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                       [0U]))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                       ? 
                                                      (0U 
                                                       == 
                                                       (0xf7f7feU 
                                                        & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                        [0U]))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                                                       | ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                           ? 
                                                          (0U 
                                                           == 
                                                           (0xf7f7feU 
                                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                            [0U]))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                            ? 
                                                           (0U 
                                                            == 
                                                            (0xf7f7feU 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                             [0U]))
                                                            : 
                                                           (0x400U 
                                                            == 
                                                            (0xf7f7feU 
                                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                             [0U])))))))))
                                               ? ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                   ? 0U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_0)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_0)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                        ? 
                                                       ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0) 
                                                        << 1U)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__priority_0)
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0) 
                                                         << 1U))))))))
                                               : 0U)
                                           : 0U)) | 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                    ? (((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                        | ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                           | ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                               ? (0xffeU == (0xffeU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 2U)))
                               : ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                   ? (0xffeU == (0xffeU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 2U)))
                                   : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                       ? (0U == (0xffeU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 2U)))
                                       : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                           ? (0U == 
                                              (0xffeU 
                                               & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 2U)))
                                           : ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex)) 
                                              | (0U 
                                                 == 
                                                 (0xffeU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 2U))))))))))
                        ? ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                            ? 0U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                     ? 0U : ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                              ? (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                         >> 0x20U))
                                              : ((4U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                              >> 0x20U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_iindex))
                                                     ? 0U
                                                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__ipi_0))))))))
                        : 0U) : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
                                         ? (((0x1ffU 
                                              == (0x1ffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))
                                              ? (0U 
                                                 == 
                                                 (0x200U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))
                                              : ((0x1feU 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (0x200U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  : 
                                                 ((0x1fdU 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (0x200U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   : 
                                                  ((0x1fcU 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (0x200U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3029)))))
                                             ? ((0x1ffU 
                                                 == 
                                                 (0x1ffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))
                                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_79
                                                 : 
                                                ((0x1feU 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_79
                                                  : 
                                                 ((0x1fdU 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_79
                                                   : 
                                                  ((0x1fcU 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_79
                                                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3541))))
                                             : 0U) : 0U)) 
                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_5)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_data
                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__value_1]
                    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_6)
                               ? ((0U != (0xfU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 0xcU)))
                                   ? 0U : ((0x3ffU 
                                            == (0x3ffU 
                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 2U)))
                                            ? 0U : 
                                           ((0x3feU 
                                             == (0x3ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 2U)))
                                             ? 0U : 
                                            ((0x3fdU 
                                              == (0x3ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 2U)))
                                              ? 0U : 
                                             ((0x3fcU 
                                               == (0x3ffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 2U)))
                                               ? 0U
                                               : ((0x3fbU 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0x3faU 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0x3f9U 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0x3f8U 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0x3f7U 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0U
                                                       : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_1014))))))))))
                               : 0U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1243(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1243\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_559) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__size 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_587) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__size_1 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_696) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__address 
            = (0x7fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = (0x7fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_579) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address 
            = (0x3fffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = (0x3fffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0xfffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0xfffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1244(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1244\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0x3ffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x3ffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0xfffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_564) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0x1ffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0xfffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1ffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1245(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1245\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_696) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_579) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_570) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1246(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1246\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_564) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_d_ready) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT___value_T_3;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1258(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1258\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1261(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1261\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1263(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1263\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT___value_T_3;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1264(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1264\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1265(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1265\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1266(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1266\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1267(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1267\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1268(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1268\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1269(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1269\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT___value_T_3;
        }
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1270(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1270\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1271(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1271\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1272(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1272\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_1002) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_1002) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_1002) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_1002) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_974) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_1002) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_1002) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___inflight_T_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1273(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1273\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___d_first_T))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0x1ffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 2U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0x1ffffffU 
                                        & (((IData)(0xfffU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                           >> 2U)))
                                  : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0x1ffffffU 
                                        & (((IData)(0xfffU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                           >> 2U)))
                                  : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1274(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1274\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0x1ffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 2U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0x1ffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 2U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0x1ffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 2U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0x1ffffffU 
                                        & (((IData)(0xfffU) 
                                            << vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
                                            [0U]) >> 2U)))
                                  : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter1)));
        }
    }
}
