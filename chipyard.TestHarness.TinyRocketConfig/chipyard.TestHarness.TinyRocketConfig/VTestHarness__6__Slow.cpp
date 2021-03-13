// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_settle__TOP__374(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__374\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___s0_read_T_21 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
              | (9U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
             | (0xaU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
            | (0xbU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
           | (((((8U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
                 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
                | (0xdU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
               | (0xeU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
              | (0xfU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___dataArb_io_in_3_valid_res_T_2 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
           | (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shin_T_31 
        = ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shin_T_21 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shin_T_21 
                                      << 4U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_in1 
           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_adder_out 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_in1 
            + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv) 
           + (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_615 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_587)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___io_decode_0_read_illegal_T_163 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___io_decode_0_read_illegal_T_148) 
                         | (0x7b1U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                 >> 0x14U)))) 
                        | (0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                >> 0x14U)))) 
                       | (0x320U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                               >> 0x14U)))) 
                      | (0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                              >> 0x14U)))) 
                     | (0xb02U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                             >> 0x14U)))) 
                    | (0x323U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                            >> 0x14U)))) 
                   | (0xb03U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U)))) 
                  | (0xb83U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                          >> 0x14U)))) 
                 | (0x324U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                         >> 0x14U)))) 
                | (0xb04U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                        >> 0x14U)))) 
               | (0xb84U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                       >> 0x14U)))) 
              | (0x325U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                      >> 0x14U)))) 
             | (0xb05U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                     >> 0x14U)))) | 
            (0xb85U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                  >> 0x14U)))) | (0x326U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                      >> 0x14U))));
}

void VTestHarness::_settle__TOP__375(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__375\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT__io_out_s_12_bits 
        = ((3U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                         >> 0xaU))) ? (0x840400U | 
                                       (((0x700000U 
                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                             << 0x12U)) 
                                         | ((0x38000U 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                << 8U)) 
                                            | ((((7U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                  ? 3U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                      ? 7U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T))
                                                        ? 4U
                                                        : 0U))))))) 
                                                << 0xcU) 
                                               | ((0x380U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in) 
                                                  | ((0x1000U 
                                                      & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in)
                                                      ? 0x3bU
                                                      : 0x33U))))) 
                                        | ((0U == (3U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                      >> 5U)))
                                            ? 0x40000000U
                                            : 0U)))
            : ((2U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                             >> 0xaU))) ? (0x47413U 
                                           | ((((0x1000U 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in)
                                                 ? 0x7fU
                                                 : 0U) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                     << 0x12U)) 
                                                 | ((0x38000U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in)))))
                : ((1U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                 >> 0xaU))) ? (0x40000000U 
                                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_T_88)
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_T_88)));
}

void VTestHarness::_settle__TOP__378(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__378\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___T_830)
                        ? (0x7ffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___T_830)
                                         ? (1U | (0xeU 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x34U)) 
                                                     << 1U)))
                                         : 0U) << (4U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                               >> 0x2eU)) 
                                                      << 2U))))
                        : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_sizes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___T_830)
                        ? (0x3ffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___T_830)
                                         ? (1U | (6U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x2fU)) 
                                                     << 1U)))
                                         : 0U) << (4U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                               >> 0x2eU)) 
                                                      << 2U))))
                        : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_38 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
            & ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume))))
            ? 4U : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_61) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))
                     ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr) 
                        & (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 9U)))) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr)));
}

void VTestHarness::_settle__TOP__379(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__379\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_86) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_86)
            ? (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 1U)) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F4) 
           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F4) 
           & (0xffffU == (0xffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                     >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_93 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F92) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_94 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F92) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_95 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F92) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_92 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F92) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_97 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F96) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_98 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F96) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_99 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F96) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_96 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F96) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
}

void VTestHarness::_settle__TOP__380(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__380\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_12 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F11) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_13 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F11) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_14 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F11) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_11 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F11) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_37 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F35) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_38 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F35) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_36 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F35) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_35 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F35) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F0) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F0) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F0) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F0) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
}

void VTestHarness::_settle__TOP__381(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__381\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_79 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F78) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_80 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F78) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_81 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F78) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_78 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F78) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_67 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F66) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_68 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F66) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_69 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F66) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_66 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F66) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_71 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F70) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_72 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F70) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_73 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F70) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_70 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F70) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
}

void VTestHarness::_settle__TOP__382(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__382\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_83 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F82) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_84 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F82) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_85 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F82) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_82 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F82) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_24 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F23) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_25 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F23) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_26 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F23) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F23) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_18 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F15) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_16 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F15) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_17 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F15) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_15 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F15) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
}

void VTestHarness::_settle__TOP__383(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__383\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_88 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F87) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_89 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F87) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_90 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F87) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_87 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F87) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_8 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F7) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_9 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F7) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_10 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F7) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_7 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F7) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_76 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F74) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_77 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F74) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_75 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F74) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_74 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F74) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
}

void VTestHarness::_settle__TOP__384(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__384\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_28 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F27) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_29 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F27) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_30 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F27) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_27 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F27) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_20 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F19) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_21 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F19) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_22 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F19) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_19 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F19) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_32 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F31) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 8U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_33 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F31) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x10U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_34 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F31) 
           & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
                                 >> 0x18U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_31 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F31) 
           & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask)));
}

void VTestHarness::_settle__TOP__385(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__385\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_855 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
                   >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__adder_out 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_d_ext
               : (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_d_ext)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext
               : (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext)));
}

void VTestHarness::_settle__TOP__386(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__386\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_718 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_825 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_738 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_739 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_736) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_724 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_831 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_744 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___io_rw_rdata_T_264 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___io_rw_rdata_T_262 
           | (QData)((IData)(((0xf13U == (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                           >> 0x14U)))
                               ? 0x20181004U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid)
                ? 0xfU : 0U) : ((8U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
                                        << 3U) | (0xfffffff8U 
                                                  & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                                      << 2U) 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                                        << 3U))))) 
                                | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
                                           << 2U) | 
                                          (0xfffffffcU 
                                           & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                               << 1U) 
                                              & ((~ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address) 
                                                 << 2U))))) 
                                   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
                                              | ((~ 
                                                  (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                                   >> 1U)) 
                                                 & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
                                               | ((~ 
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                                    >> 1U)) 
                                                  & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))))))));
}

void VTestHarness::_settle__TOP__387(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__387\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_141 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_626 
        = (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
            & ((2U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
               & (((((((VL_ULL(0) == (VL_ULL(0x1ffeff000) 
                                      & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                        & (QData)((IData)(
                                                          (0x3000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                       & (QData)((IData)(
                                                         (0x2000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                      & (QData)((IData)(
                                                        (0xc000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (0x10000000U 
                                                        ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_971 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
            == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_320 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))));
}

void VTestHarness::_settle__TOP__388(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__388\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1067 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1064) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1052 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1159 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1072 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_1014 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_1014 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1)));
}

void VTestHarness::_settle__TOP__389(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__389\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_1039 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1_io_in_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1039 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT__r 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT___r_T_18));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT__w 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT___r_T_18));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu_io_debug_if 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT__x) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT__x) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug 
        = (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped) 
              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)) 
            | (((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__cause 
                    >> 0x1fU)) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address)))))));
}

void VTestHarness::_settle__TOP__390(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__390\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp537[12];
    WData/*383:0*/ __Vtemp538[12];
    WData/*383:0*/ __Vtemp543[12];
    WData/*383:0*/ __Vtemp544[12];
    WData/*383:0*/ __Vtemp549[12];
    WData/*383:0*/ __Vtemp550[12];
    WData/*383:0*/ __Vtemp555[12];
    WData/*383:0*/ __Vtemp556[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_out_1_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp537[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp537[1U] = 0U;
    __Vtemp537[2U] = 0U;
    __Vtemp537[3U] = 0U;
    __Vtemp537[4U] = 0U;
    __Vtemp537[5U] = 0U;
    __Vtemp537[6U] = 0U;
    __Vtemp537[7U] = 0U;
    __Vtemp537[8U] = 0U;
    __Vtemp537[9U] = 0U;
    __Vtemp537[0xaU] = 0U;
    __Vtemp537[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp538, __Vtemp537);
    __Vtemp543[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp543[1U] = 0U;
    __Vtemp543[2U] = 0U;
    __Vtemp543[3U] = 0U;
    __Vtemp543[4U] = 0U;
    __Vtemp543[5U] = 0U;
    __Vtemp543[6U] = 0U;
    __Vtemp543[7U] = 0U;
    __Vtemp543[8U] = 0U;
    __Vtemp543[9U] = 0U;
    __Vtemp543[0xaU] = 0U;
    __Vtemp543[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp544, __Vtemp543);
    __Vtemp549[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp549[1U] = 0U;
    __Vtemp549[2U] = 0U;
    __Vtemp549[3U] = 0U;
    __Vtemp549[4U] = 0U;
    __Vtemp549[5U] = 0U;
    __Vtemp549[6U] = 0U;
    __Vtemp549[7U] = 0U;
    __Vtemp549[8U] = 0U;
    __Vtemp549[9U] = 0U;
    __Vtemp549[0xaU] = 0U;
    __Vtemp549[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp550, __Vtemp549);
    __Vtemp555[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp555[1U] = 0U;
    __Vtemp555[2U] = 0U;
    __Vtemp555[3U] = 0U;
    __Vtemp555[4U] = 0U;
    __Vtemp555[5U] = 0U;
    __Vtemp555[6U] = 0U;
    __Vtemp555[7U] = 0U;
    __Vtemp555[8U] = 0U;
    __Vtemp555[9U] = 0U;
    __Vtemp555[0xaU] = 0U;
    __Vtemp555[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp556, __Vtemp555);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp538[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp544[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp550[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp556[0U]))
                                                    ? 1U
                                                    : 0U))));
}

void VTestHarness::_settle__TOP__391(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__391\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___dFirst_size_T_5 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size_lo)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_address)))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__392(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__392\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))))));
}

void VTestHarness::_settle__TOP__394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp585[12];
    WData/*383:0*/ __Vtemp586[12];
    WData/*383:0*/ __Vtemp591[12];
    WData/*383:0*/ __Vtemp592[12];
    WData/*383:0*/ __Vtemp597[12];
    WData/*383:0*/ __Vtemp598[12];
    WData/*383:0*/ __Vtemp603[12];
    WData/*383:0*/ __Vtemp604[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_lo)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp585[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp585[1U] = 0U;
    __Vtemp585[2U] = 0U;
    __Vtemp585[3U] = 0U;
    __Vtemp585[4U] = 0U;
    __Vtemp585[5U] = 0U;
    __Vtemp585[6U] = 0U;
    __Vtemp585[7U] = 0U;
    __Vtemp585[8U] = 0U;
    __Vtemp585[9U] = 0U;
    __Vtemp585[0xaU] = 0U;
    __Vtemp585[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp586, __Vtemp585);
    __Vtemp591[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp591[1U] = 0U;
    __Vtemp591[2U] = 0U;
    __Vtemp591[3U] = 0U;
    __Vtemp591[4U] = 0U;
    __Vtemp591[5U] = 0U;
    __Vtemp591[6U] = 0U;
    __Vtemp591[7U] = 0U;
    __Vtemp591[8U] = 0U;
    __Vtemp591[9U] = 0U;
    __Vtemp591[0xaU] = 0U;
    __Vtemp591[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp592, __Vtemp591);
    __Vtemp597[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp597[1U] = 0U;
    __Vtemp597[2U] = 0U;
    __Vtemp597[3U] = 0U;
    __Vtemp597[4U] = 0U;
    __Vtemp597[5U] = 0U;
    __Vtemp597[6U] = 0U;
    __Vtemp597[7U] = 0U;
    __Vtemp597[8U] = 0U;
    __Vtemp597[9U] = 0U;
    __Vtemp597[0xaU] = 0U;
    __Vtemp597[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp598, __Vtemp597);
    __Vtemp603[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp603[1U] = 0U;
    __Vtemp603[2U] = 0U;
    __Vtemp603[3U] = 0U;
    __Vtemp603[4U] = 0U;
    __Vtemp603[5U] = 0U;
    __Vtemp603[6U] = 0U;
    __Vtemp603[7U] = 0U;
    __Vtemp603[8U] = 0U;
    __Vtemp603[9U] = 0U;
    __Vtemp603[0xaU] = 0U;
    __Vtemp603[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp604, __Vtemp603);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_46 
        = ((5U == (7U & __Vtemp586[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp592[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp598[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp604[0U]))
                                                    ? 1U
                                                    : 0U))));
}

void VTestHarness::_settle__TOP__395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_lo)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_172)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             << 2U) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                << 1U) 
                                               & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
                         | ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
                                         | ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 1U)) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3060 
        = ((0x1aU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0x19U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0x100073U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0x10002623U
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0x7b200073U
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0x7b202473U
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0x10802423U
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0xf1402473U
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0x30000067U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3047)))))))))))));
}

void VTestHarness::_settle__TOP__397(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__397\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp609[12];
    WData/*383:0*/ __Vtemp610[12];
    WData/*383:0*/ __Vtemp615[12];
    WData/*383:0*/ __Vtemp616[12];
    WData/*383:0*/ __Vtemp621[12];
    WData/*383:0*/ __Vtemp622[12];
    WData/*383:0*/ __Vtemp627[12];
    WData/*383:0*/ __Vtemp628[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp609[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp609[1U] = 0U;
    __Vtemp609[2U] = 0U;
    __Vtemp609[3U] = 0U;
    __Vtemp609[4U] = 0U;
    __Vtemp609[5U] = 0U;
    __Vtemp609[6U] = 0U;
    __Vtemp609[7U] = 0U;
    __Vtemp609[8U] = 0U;
    __Vtemp609[9U] = 0U;
    __Vtemp609[0xaU] = 0U;
    __Vtemp609[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp610, __Vtemp609);
    __Vtemp615[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp615[1U] = 0U;
    __Vtemp615[2U] = 0U;
    __Vtemp615[3U] = 0U;
    __Vtemp615[4U] = 0U;
    __Vtemp615[5U] = 0U;
    __Vtemp615[6U] = 0U;
    __Vtemp615[7U] = 0U;
    __Vtemp615[8U] = 0U;
    __Vtemp615[9U] = 0U;
    __Vtemp615[0xaU] = 0U;
    __Vtemp615[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp616, __Vtemp615);
    __Vtemp621[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp621[1U] = 0U;
    __Vtemp621[2U] = 0U;
    __Vtemp621[3U] = 0U;
    __Vtemp621[4U] = 0U;
    __Vtemp621[5U] = 0U;
    __Vtemp621[6U] = 0U;
    __Vtemp621[7U] = 0U;
    __Vtemp621[8U] = 0U;
    __Vtemp621[9U] = 0U;
    __Vtemp621[0xaU] = 0U;
    __Vtemp621[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp622, __Vtemp621);
    __Vtemp627[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp627[1U] = 0U;
    __Vtemp627[2U] = 0U;
    __Vtemp627[3U] = 0U;
    __Vtemp627[4U] = 0U;
    __Vtemp627[5U] = 0U;
    __Vtemp627[6U] = 0U;
    __Vtemp627[7U] = 0U;
    __Vtemp627[8U] = 0U;
    __Vtemp627[9U] = 0U;
    __Vtemp627[0xaU] = 0U;
    __Vtemp627[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp628, __Vtemp627);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp610[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp616[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp622[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp628[0U]))
                                                    ? 1U
                                                    : 0U))));
}

void VTestHarness::_settle__TOP__399(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__399\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp630[4];
    WData/*127:0*/ __Vtemp631[4];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    __Vtemp630[0U] = 1U;
    __Vtemp630[1U] = 0U;
    __Vtemp630[2U] = 0U;
    __Vtemp630[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp631, __Vtemp630, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_663 
        = (1U & (((0U != (((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_15[0U] 
                            ^ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_608)
                                ? __Vtemp631[0U] : 0U)) 
                           | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_15[1U] 
                              ^ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_608)
                                  ? __Vtemp631[1U] : 0U))) 
                          | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_15[2U] 
                             ^ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_608)
                                 ? __Vtemp631[2U] : 0U)))) 
                  | (~ (IData)((0U != ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_15[0U] 
                                        | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_15[1U]) 
                                       | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_15[2U]))))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_594) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_220 
        = (((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_172)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_1134)
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))
                  : 0U)));
}

void VTestHarness::_settle__TOP__400(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__400\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_1134)
                  ? (0x7fffffffU & ((IData)(0xffU) 
                                    << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                        << 3U))) : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_24 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_12)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_12)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___beatsLeft_T_4 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft) 
                   - ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                      & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))
                          ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_12)
                          : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_12)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___readys_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___readys_T) 
           | (2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___readys_T) 
                    << 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT___GEN_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__sending));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT___T_570 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT___T_602 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1002 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? (0x7fffffffU & ((IData)(0xffU) 
                                    << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                        << 3U))) : 0U)));
}

void VTestHarness::_settle__TOP__401(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__401\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp636[4];
    WData/*127:0*/ __Vtemp637[4];
    WData/*127:0*/ __Vtemp642[4];
    WData/*127:0*/ __Vtemp643[4];
    WData/*1055:0*/ __Vtemp650[33];
    WData/*1055:0*/ __Vtemp651[33];
    WData/*1055:0*/ __Vtemp661[33];
    WData/*1055:0*/ __Vtemp662[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1022 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    __Vtemp636[0U] = 1U;
    __Vtemp636[1U] = 0U;
    __Vtemp636[2U] = 0U;
    __Vtemp636[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp637, __Vtemp636, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp642[0U] = 1U;
    __Vtemp642[1U] = 0U;
    __Vtemp642[2U] = 0U;
    __Vtemp642[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp643, __Vtemp642, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp637[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_610)
                                               ? __Vtemp643[0U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp637[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_610)
                                               ? __Vtemp643[1U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp637[2U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_610)
                                               ? __Vtemp643[2U]
                                               : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp650, ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp651, __Vtemp650, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp651[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    VL_EXTEND_WI(1026,3, __Vtemp661, ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp662, __Vtemp661, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_597)
                ? __Vtemp662[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1070 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
}

void VTestHarness::_settle__TOP__402(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__402\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1177 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1090 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1072 
        = (1U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1003)
                     ? 1U : 0U) != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1017)
                                     ? 1U : 0U)) | 
                  (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1003)
                       ? 1U : 0U))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___s2_data_T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_replay_next) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_did_read) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_read_mask)))
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_244)
                ? ((1U == (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                    ? 2U : 1U) : 1U) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__dcache_kill_mem 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_22) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_replay_next));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__ic_replay) 
                 | ((3U == (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in)) 
                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__ic_replay) 
                       >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_valid 
        = (((0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nValid))) 
            - (IData)(1U)) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__full_insn));
}

void VTestHarness::_settle__TOP__403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp671[4];
    WData/*127:0*/ __Vtemp672[4];
    WData/*95:0*/ __Vtemp675[3];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nReady 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__full_insn)
            ? ((3U != (3U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in))
                ? 1U : 2U) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_627 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                         >> (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    __Vtemp671[0U] = 1U;
    __Vtemp671[1U] = 0U;
    __Vtemp671[2U] = 0U;
    __Vtemp671[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp672, __Vtemp671, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_15[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_594)
            ? __Vtemp672[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_15[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_594)
            ? __Vtemp672[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_15[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_594)
            ? __Vtemp672[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___GEN_15[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_594)
            ? __Vtemp672[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_594) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_565 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_597 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    VL_SHIFTR_WWI(96,96,7, __Vtemp675, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_622 
        = (1U & ((__Vtemp675[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_384 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_560 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___s2_update_meta_T)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_held));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_resp_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__doUncachedResp));
}

void VTestHarness::_settle__TOP__404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1003 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_uncached_pending) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT___out_0_a_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_uncached_pending)) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT___T_10 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_uncached_pending) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_uncached_pending));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_794 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_739)
                        ? (7U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_753 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                         >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_677 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622)
                        ? (7U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_636 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight) 
                         >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_668 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610)
                        ? (7U & ((IData)(1U) << (3U 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                                    [0U] 
                                                    >> 5U))))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp676[4];
    WData/*127:0*/ __Vtemp677[4];
    WData/*95:0*/ __Vtemp680[3];
    WData/*95:0*/ __Vtemp681[3];
    WData/*95:0*/ __Vtemp682[3];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_627 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                         >> (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U] >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    __Vtemp676[0U] = 1U;
    __Vtemp676[1U] = 0U;
    __Vtemp676[2U] = 0U;
    __Vtemp676[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp677, __Vtemp676, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_15[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_594)
            ? __Vtemp677[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_15[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_594)
            ? __Vtemp677[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_15[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_594)
            ? __Vtemp677[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_15[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_594)
            ? __Vtemp677[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_594) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_565 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)));
    VL_SHIFTR_WWI(96,96,7, __Vtemp680, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_616 
        = (1U & ((__Vtemp680[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_588)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    VL_SHIFTR_WWI(96,96,7, __Vtemp681, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_622 
        = (1U & ((__Vtemp681[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_594)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)));
    VL_SHIFTR_WWI(96,96,7, __Vtemp682, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_622 
        = (1U & ((__Vtemp682[0U] | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_594)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_unready)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_28 
        = (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap) 
            & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap))
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq 
        = (((((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
              & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap)) 
             & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)));
}

void VTestHarness::_settle__TOP__406(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__406\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_668 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_613)
                        ? (7U & ((IData)(1U) << (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                    >> 5U))))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1065 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_661 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dOrig));
}

void VTestHarness::_settle__TOP__407(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__407\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1055:0*/ __Vtemp684[33];
    WData/*1055:0*/ __Vtemp685[33];
    WData/*1055:0*/ __Vtemp695[33];
    WData/*1055:0*/ __Vtemp696[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_668 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___T_613)
                        ? (7U & ((IData)(1U) << (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                    >> 5U))))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    VL_EXTEND_WI(1027,4, __Vtemp684, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp685, __Vtemp684, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp685[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[0xbU]));
    VL_EXTEND_WI(1026,3, __Vtemp695, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp696, __Vtemp695, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___T_597)
                ? __Vtemp696[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_583 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__408(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__408\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_637 
        = (((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_649 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_bits_size) 
            == (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                       >> (0xcU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U] >> 3U))) >> 1U))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s0_read 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
             | (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___s0_read_T_21));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shin_T_41 
        = ((0x33333333U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shin_T_31 
                           >> 2U)) | (0xccccccccU & 
                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shin_T_31 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT__slt 
        = (1U & (((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_in1 
                         >> 0x1fU)) == (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_in2 
                                              >> 0x1fU)))
                  ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_adder_out 
                     >> 0x1fU) : ((2U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
                                   ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_in2 
                                      >> 0x1fU) : (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_in1 
                                                   >> 0x1fU))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_req_bits_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_dmem_req_valid)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu_io_adder_out
            : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__state))
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter__DOT__acq_address
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1_auto_out_a_bits_address));
}

void VTestHarness::_settle__TOP__410(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__410\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_50_rs1 
        = (0x1fU & ((0x19U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                        >> 0xfU) : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                        >> 0xfU) : 
                                    ((0x17U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                      ? 2U : ((0x16U 
                                               == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                               ? 2U
                                               : ((0x15U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                   ? 2U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                    ? 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in)
                                                     ? 
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                     >> 7U)
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                      >> 7U)))
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                     ? 2U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                       ? 2U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                        ? 
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                        >> 7U)
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                         ? 
                                                        (8U 
                                                         | (7U 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                               >> 7U)))
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                          ? 
                                                         (8U 
                                                          | (7U 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                                >> 7U)))
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T))
                                                           ? 
                                                          (8U 
                                                           | (7U 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_in 
                                                                 >> 7U)))
                                                           : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_24_rs1)))))))))))))));
}

void VTestHarness::_settle__TOP__414(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__414\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_92) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F92) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_96) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F96) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_11) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F11) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_35) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F35) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F0) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_78) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F78) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_66) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F66) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_70) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F70) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_82) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F82) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_23) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F23) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
}

void VTestHarness::_settle__TOP__415(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__415\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_15) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F15) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_87) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F87) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_7) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F7) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_74) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F74) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_27) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F27) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_19) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F19) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_31) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F31) 
              & (0U != (0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_827 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_536 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_a_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_a_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
}

void VTestHarness::_settle__TOP__416(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__416\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_825)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_825)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xf) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                << 2U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_738)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                             << 2U)))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_794 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_739)
                        ? (7U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_831)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_831)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xf) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                << 2U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_744)
            ? (VL_ULL(0x7fffffffffff) & (VL_ULL(0xf) 
                                         << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                             << 2U)))
            : VL_ULL(0));
}

void VTestHarness::_settle__TOP__417(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__417\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
        = ((((2U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_rw_cmd))
              ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___io_rw_rdata_T_264)
              : 0U) | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___wdata_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_786 
        = (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_320)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_370 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_320) 
            | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
               & (((((((VL_ULL(0) == (VL_ULL(0x1ffeff000) 
                                      & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                        & (QData)((IData)(
                                                          (0x10000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                       & (QData)((IData)(
                                                         (0x2000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                      & (QData)((IData)(
                                                        (0xc000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (0x10000000U 
                                                        ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_459 
        = (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_320) 
               | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                  & ((((((VL_ULL(0) == (VL_ULL(0x1ffeff000) 
                                        & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                         | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                          & (QData)((IData)(
                                                            (0x2000000U 
                                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                        | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                         & (QData)((IData)(
                                                           (0xc000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                        & (QData)((IData)(
                                                          (0x10000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                       & (QData)((IData)(
                                                         (0x54000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__418(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__418\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1159)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1159)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xff) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_1017 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_1014) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_1002 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)))
                  ? 0xffU : 0U)));
}

void VTestHarness::_settle__TOP__420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1134 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1047 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_debug_breakpoint 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_load) 
            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT__r) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_store) 
              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu__DOT__w) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_33 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_119 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
                  ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
                      ? ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)) 
                         | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug))
                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug))
                  : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_134 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_136 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc
                : (~ (1U | (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_pc))))
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_137 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__cause)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_120 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
                ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc
                    : (~ (1U | (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_pc))))
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc);
}

void VTestHarness::_settle__TOP__421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_138 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval
                : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_xcpt) 
                    & ((((((((((2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause) 
                               | (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                              | (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                             | (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                            | (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                           | (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                          | (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                         | (0xdU == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                        | (0xfU == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)) 
                       | (0xcU == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_cause)))
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_wdata
                    : 0U)) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_139 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie)
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_141 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_627 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                         >> (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                                   >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp709[12];
    WData/*383:0*/ __Vtemp710[12];
    WData/*383:0*/ __Vtemp715[12];
    WData/*383:0*/ __Vtemp716[12];
    WData/*383:0*/ __Vtemp721[12];
    WData/*383:0*/ __Vtemp722[12];
    WData/*383:0*/ __Vtemp727[12];
    WData/*383:0*/ __Vtemp728[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_645 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    __Vtemp709[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp709[1U] = 0U;
    __Vtemp709[2U] = 0U;
    __Vtemp709[3U] = 0U;
    __Vtemp709[4U] = 0U;
    __Vtemp709[5U] = 0U;
    __Vtemp709[6U] = 0U;
    __Vtemp709[7U] = 0U;
    __Vtemp709[8U] = 0U;
    __Vtemp709[9U] = 0U;
    __Vtemp709[0xaU] = 0U;
    __Vtemp709[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp710, __Vtemp709);
    __Vtemp715[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp715[1U] = 0U;
    __Vtemp715[2U] = 0U;
    __Vtemp715[3U] = 0U;
    __Vtemp715[4U] = 0U;
    __Vtemp715[5U] = 0U;
    __Vtemp715[6U] = 0U;
    __Vtemp715[7U] = 0U;
    __Vtemp715[8U] = 0U;
    __Vtemp715[9U] = 0U;
    __Vtemp715[0xaU] = 0U;
    __Vtemp715[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp716, __Vtemp715);
    __Vtemp721[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp721[1U] = 0U;
    __Vtemp721[2U] = 0U;
    __Vtemp721[3U] = 0U;
    __Vtemp721[4U] = 0U;
    __Vtemp721[5U] = 0U;
    __Vtemp721[6U] = 0U;
    __Vtemp721[7U] = 0U;
    __Vtemp721[8U] = 0U;
    __Vtemp721[9U] = 0U;
    __Vtemp721[0xaU] = 0U;
    __Vtemp721[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp722, __Vtemp721);
    __Vtemp727[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp727[1U] = 0U;
    __Vtemp727[2U] = 0U;
    __Vtemp727[3U] = 0U;
    __Vtemp727[4U] = 0U;
    __Vtemp727[5U] = 0U;
    __Vtemp727[6U] = 0U;
    __Vtemp727[7U] = 0U;
    __Vtemp727[8U] = 0U;
    __Vtemp727[9U] = 0U;
    __Vtemp727[0xaU] = 0U;
    __Vtemp727[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp728, __Vtemp727);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_640 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & __Vtemp710[0U])) ? 4U
                  : ((6U == (7U & __Vtemp716[0U])) ? 4U
                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & __Vtemp722[0U])) ? 4U
                    : ((6U == (7U & __Vtemp728[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___dFirst_size_T_6 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___dFirst_size_T_5) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___dFirst_size_T_5)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_610 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT___sink_ACancel_earlyValid_T_6 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_0) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_1) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid))) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_2) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_in_d_valid)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT___T_15 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_in_d_valid)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_in_d_valid) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid) 
                       << 1U) | (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_627 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                         >> (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                                   >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__424(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__424\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp733[12];
    WData/*383:0*/ __Vtemp734[12];
    WData/*383:0*/ __Vtemp739[12];
    WData/*383:0*/ __Vtemp740[12];
    WData/*383:0*/ __Vtemp745[12];
    WData/*383:0*/ __Vtemp746[12];
    WData/*383:0*/ __Vtemp751[12];
    WData/*383:0*/ __Vtemp752[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_645 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    __Vtemp733[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp733[1U] = 0U;
    __Vtemp733[2U] = 0U;
    __Vtemp733[3U] = 0U;
    __Vtemp733[4U] = 0U;
    __Vtemp733[5U] = 0U;
    __Vtemp733[6U] = 0U;
    __Vtemp733[7U] = 0U;
    __Vtemp733[8U] = 0U;
    __Vtemp733[9U] = 0U;
    __Vtemp733[0xaU] = 0U;
    __Vtemp733[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp734, __Vtemp733);
    __Vtemp739[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp739[1U] = 0U;
    __Vtemp739[2U] = 0U;
    __Vtemp739[3U] = 0U;
    __Vtemp739[4U] = 0U;
    __Vtemp739[5U] = 0U;
    __Vtemp739[6U] = 0U;
    __Vtemp739[7U] = 0U;
    __Vtemp739[8U] = 0U;
    __Vtemp739[9U] = 0U;
    __Vtemp739[0xaU] = 0U;
    __Vtemp739[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp740, __Vtemp739);
    __Vtemp745[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp745[1U] = 0U;
    __Vtemp745[2U] = 0U;
    __Vtemp745[3U] = 0U;
    __Vtemp745[4U] = 0U;
    __Vtemp745[5U] = 0U;
    __Vtemp745[6U] = 0U;
    __Vtemp745[7U] = 0U;
    __Vtemp745[8U] = 0U;
    __Vtemp745[9U] = 0U;
    __Vtemp745[0xaU] = 0U;
    __Vtemp745[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp746, __Vtemp745);
    __Vtemp751[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp751[1U] = 0U;
    __Vtemp751[2U] = 0U;
    __Vtemp751[3U] = 0U;
    __Vtemp751[4U] = 0U;
    __Vtemp751[5U] = 0U;
    __Vtemp751[6U] = 0U;
    __Vtemp751[7U] = 0U;
    __Vtemp751[8U] = 0U;
    __Vtemp751[9U] = 0U;
    __Vtemp751[0xaU] = 0U;
    __Vtemp751[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp752, __Vtemp751);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_640 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & __Vtemp734[0U])) ? 4U
                  : ((6U == (7U & __Vtemp740[0U])) ? 4U
                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & __Vtemp746[0U])) ? 4U
                    : ((6U == (7U & __Vtemp752[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__425(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__425\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_6 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_610 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
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

void VTestHarness::_settle__TOP__426(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__426\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp757[12];
    WData/*383:0*/ __Vtemp758[12];
    WData/*383:0*/ __Vtemp763[12];
    WData/*383:0*/ __Vtemp764[12];
    WData/*383:0*/ __Vtemp769[12];
    WData/*383:0*/ __Vtemp770[12];
    WData/*383:0*/ __Vtemp775[12];
    WData/*383:0*/ __Vtemp776[12];
    // Body
    __Vtemp757[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp757[1U] = 0U;
    __Vtemp757[2U] = 0U;
    __Vtemp757[3U] = 0U;
    __Vtemp757[4U] = 0U;
    __Vtemp757[5U] = 0U;
    __Vtemp757[6U] = 0U;
    __Vtemp757[7U] = 0U;
    __Vtemp757[8U] = 0U;
    __Vtemp757[9U] = 0U;
    __Vtemp757[0xaU] = 0U;
    __Vtemp757[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp758, __Vtemp757);
    __Vtemp763[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp763[1U] = 0U;
    __Vtemp763[2U] = 0U;
    __Vtemp763[3U] = 0U;
    __Vtemp763[4U] = 0U;
    __Vtemp763[5U] = 0U;
    __Vtemp763[6U] = 0U;
    __Vtemp763[7U] = 0U;
    __Vtemp763[8U] = 0U;
    __Vtemp763[9U] = 0U;
    __Vtemp763[0xaU] = 0U;
    __Vtemp763[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp764, __Vtemp763);
    __Vtemp769[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp769[1U] = 0U;
    __Vtemp769[2U] = 0U;
    __Vtemp769[3U] = 0U;
    __Vtemp769[4U] = 0U;
    __Vtemp769[5U] = 0U;
    __Vtemp769[6U] = 0U;
    __Vtemp769[7U] = 0U;
    __Vtemp769[8U] = 0U;
    __Vtemp769[9U] = 0U;
    __Vtemp769[0xaU] = 0U;
    __Vtemp769[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp770, __Vtemp769);
    __Vtemp775[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp775[1U] = 0U;
    __Vtemp775[2U] = 0U;
    __Vtemp775[3U] = 0U;
    __Vtemp775[4U] = 0U;
    __Vtemp775[5U] = 0U;
    __Vtemp775[6U] = 0U;
    __Vtemp775[7U] = 0U;
    __Vtemp775[8U] = 0U;
    __Vtemp775[9U] = 0U;
    __Vtemp775[0xaU] = 0U;
    __Vtemp775[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp776, __Vtemp775);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_640 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & __Vtemp758[0U])) ? 4U
                  : ((6U == (7U & __Vtemp764[0U])) ? 4U
                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_46)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & __Vtemp770[0U])) ? 4U
                    : ((6U == (7U & __Vtemp776[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_610 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___sink_ACancel_earlyValid_T_18 
        = ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))) 
                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid))) 
              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid))) 
             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_5) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__empty)))) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_6) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid)));
}

void VTestHarness::_settle__TOP__427(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__427\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_35 
        = (1U & (((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty))) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__empty))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid) 
            << 6U) | ((0x20U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__empty)) 
                                << 5U)) | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid) 
                                            << 4U) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid) 
                                               << 3U) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_277 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3073 
        = ((0x27U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0x26U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0x25U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0x21U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3060)))))))))))));
}

void VTestHarness::_settle__TOP__429(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__429\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*383:0*/ __Vtemp781[12];
    WData/*383:0*/ __Vtemp782[12];
    WData/*383:0*/ __Vtemp787[12];
    WData/*383:0*/ __Vtemp788[12];
    WData/*383:0*/ __Vtemp793[12];
    WData/*383:0*/ __Vtemp794[12];
    WData/*383:0*/ __Vtemp799[12];
    WData/*383:0*/ __Vtemp800[12];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_621 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                         >> (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                                   >> 5U)))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_639 
        = (((1U == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                  >> 1U))) ? 4U : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_46)))) 
            | (1U == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                    >> 1U))) ? 4U : 
                      ((6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                     >> 1U))) ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    __Vtemp781[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp781[1U] = 0U;
    __Vtemp781[2U] = 0U;
    __Vtemp781[3U] = 0U;
    __Vtemp781[4U] = 0U;
    __Vtemp781[5U] = 0U;
    __Vtemp781[6U] = 0U;
    __Vtemp781[7U] = 0U;
    __Vtemp781[8U] = 0U;
    __Vtemp781[9U] = 0U;
    __Vtemp781[0xaU] = 0U;
    __Vtemp781[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp782, __Vtemp781);
    __Vtemp787[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp787[1U] = 0U;
    __Vtemp787[2U] = 0U;
    __Vtemp787[3U] = 0U;
    __Vtemp787[4U] = 0U;
    __Vtemp787[5U] = 0U;
    __Vtemp787[6U] = 0U;
    __Vtemp787[7U] = 0U;
    __Vtemp787[8U] = 0U;
    __Vtemp787[9U] = 0U;
    __Vtemp787[0xaU] = 0U;
    __Vtemp787[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp788, __Vtemp787);
    __Vtemp793[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp793[1U] = 0U;
    __Vtemp793[2U] = 0U;
    __Vtemp793[3U] = 0U;
    __Vtemp793[4U] = 0U;
    __Vtemp793[5U] = 0U;
    __Vtemp793[6U] = 0U;
    __Vtemp793[7U] = 0U;
    __Vtemp793[8U] = 0U;
    __Vtemp793[9U] = 0U;
    __Vtemp793[0xaU] = 0U;
    __Vtemp793[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp794, __Vtemp793);
    __Vtemp799[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp799[1U] = 0U;
    __Vtemp799[2U] = 0U;
    __Vtemp799[3U] = 0U;
    __Vtemp799[4U] = 0U;
    __Vtemp799[5U] = 0U;
    __Vtemp799[6U] = 0U;
    __Vtemp799[7U] = 0U;
    __Vtemp799[8U] = 0U;
    __Vtemp799[9U] = 0U;
    __Vtemp799[0xaU] = 0U;
    __Vtemp799[0xbU] = 0U;
    VL_EXTEND_WW(384,383, __Vtemp800, __Vtemp799);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_634 
        = (((1U == ((7U == (7U & __Vtemp782[0U])) ? 4U
                     : ((6U == (7U & __Vtemp788[0U]))
                         ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_46)))) 
            | (1U == ((7U == (7U & __Vtemp794[0U]))
                       ? 4U : ((6U == (7U & __Vtemp800[0U]))
                                ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}
