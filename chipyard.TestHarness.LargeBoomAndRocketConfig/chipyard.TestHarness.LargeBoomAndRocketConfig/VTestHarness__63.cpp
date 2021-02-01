// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4354(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4354\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp809[7];
    WData/*255:0*/ __Vtemp810[8];
    WData/*159:0*/ __Vtemp813[5];
    WData/*159:0*/ __Vtemp814[5];
    WData/*95:0*/ __Vtemp822[3];
    WData/*127:0*/ __Vtemp823[4];
    WData/*159:0*/ __Vtemp825[5];
    WData/*159:0*/ __Vtemp832[5];
    WData/*159:0*/ __Vtemp833[5];
    WData/*223:0*/ __Vtemp836[7];
    WData/*831:0*/ __Vtemp842[26];
    WData/*831:0*/ __Vtemp843[26];
    WData/*831:0*/ __Vtemp845[26];
    WData/*863:0*/ __Vtemp846[27];
    // Body
    __Vtemp809[0U] = 0U;
    __Vtemp809[1U] = 0U;
    __Vtemp809[2U] = 0U;
    __Vtemp809[3U] = 0U;
    __Vtemp809[4U] = 0U;
    __Vtemp809[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_taken) 
                                        << 0x11U)));
    __Vtemp809[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp810, __Vtemp809);
    __Vtemp813[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_pc) 
                                     << 0x19U));
    __Vtemp813[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp813[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp813[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp813[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp814, __Vtemp813);
    __Vtemp822[0U] = 0U;
    __Vtemp822[1U] = 0U;
    __Vtemp822[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp823, __Vtemp822);
    VL_EXTEND_WI(134,1, __Vtemp825, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_xcpt_pf_if));
    __Vtemp832[0U] = 0U;
    __Vtemp832[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_debug_pc) 
                                     << 8U));
    __Vtemp832[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp832[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_debug_inst 
                                   >> 0xfU)));
    __Vtemp832[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp833, __Vtemp832);
    VL_EXTEND_WQ(221,55, __Vtemp836, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp842[0U] = __Vtemp836[0U];
    __Vtemp842[1U] = __Vtemp836[1U];
    __Vtemp842[2U] = __Vtemp836[2U];
    __Vtemp842[3U] = __Vtemp836[3U];
    __Vtemp842[4U] = __Vtemp836[4U];
    __Vtemp842[5U] = __Vtemp836[5U];
    __Vtemp842[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_taken) 
                                       << 0x1dU)) | 
                       __Vtemp836[6U]));
    __Vtemp842[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_pc_lob) 
                                          >> 2U)))));
    __Vtemp842[8U] = ((0xfffffffcU & (__Vtemp833[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_18_is_sfb) 
                                                    >> 2U)));
    __Vtemp842[9U] = ((3U & (__Vtemp833[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp833[1U] 
                                        << 2U)));
    __Vtemp842[0xaU] = ((3U & (__Vtemp833[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp833[2U] 
                                          << 2U)));
    __Vtemp842[0xbU] = ((3U & (__Vtemp833[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp833[3U] 
                                          << 2U)));
    __Vtemp842[0xcU] = ((3U & (__Vtemp833[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp833[4U] 
                                          << 2U)));
    __Vtemp842[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp833[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp825[0U] 
                                          << 2U)));
    __Vtemp842[0xeU] = ((3U & (__Vtemp825[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp825[1U] 
                                          << 2U)));
    __Vtemp842[0xfU] = ((3U & (__Vtemp825[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp825[2U] 
                                          << 2U)));
    __Vtemp842[0x10U] = ((3U & (__Vtemp825[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp825[3U] 
                                           << 2U)));
    __Vtemp842[0x11U] = ((0xffffff00U & (__Vtemp823[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp825[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp825[4U] 
                                            << 2U))));
    __Vtemp842[0x12U] = ((0xffU & (__Vtemp823[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp823[1U] 
                                           << 8U)));
    __Vtemp842[0x13U] = ((0xffU & (__Vtemp823[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp823[2U] 
                                           << 8U)));
    __Vtemp842[0x14U] = ((0xffU & (__Vtemp823[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp823[3U] 
                                              << 8U))));
    __Vtemp842[0x15U] = ((0xfffff800U & (__Vtemp814[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp823[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_19_is_sfb) 
                                            >> 8U))));
    __Vtemp842[0x16U] = ((0x7ffU & (__Vtemp814[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp814[1U] 
                                                     << 0xbU)));
    __Vtemp842[0x17U] = ((0x7ffU & (__Vtemp814[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp814[2U] 
                                                     << 0xbU)));
    __Vtemp842[0x18U] = ((0x7ffU & (__Vtemp814[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp814[3U] 
                                                     << 0xbU)));
    __Vtemp842[0x19U] = ((0x7ffU & (__Vtemp814[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp814[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp843, __Vtemp842);
    __Vtemp845[0U] = __Vtemp843[0U];
    __Vtemp845[1U] = __Vtemp843[1U];
    __Vtemp845[2U] = __Vtemp843[2U];
    __Vtemp845[3U] = __Vtemp843[3U];
    __Vtemp845[4U] = __Vtemp843[4U];
    __Vtemp845[5U] = __Vtemp843[5U];
    __Vtemp845[6U] = __Vtemp843[6U];
    __Vtemp845[7U] = __Vtemp843[7U];
    __Vtemp845[8U] = __Vtemp843[8U];
    __Vtemp845[9U] = __Vtemp843[9U];
    __Vtemp845[0xaU] = __Vtemp843[0xaU];
    __Vtemp845[0xbU] = __Vtemp843[0xbU];
    __Vtemp845[0xcU] = __Vtemp843[0xcU];
    __Vtemp845[0xdU] = __Vtemp843[0xdU];
    __Vtemp845[0xeU] = __Vtemp843[0xeU];
    __Vtemp845[0xfU] = __Vtemp843[0xfU];
    __Vtemp845[0x10U] = __Vtemp843[0x10U];
    __Vtemp845[0x11U] = __Vtemp843[0x11U];
    __Vtemp845[0x12U] = __Vtemp843[0x12U];
    __Vtemp845[0x13U] = __Vtemp843[0x13U];
    __Vtemp845[0x14U] = __Vtemp843[0x14U];
    __Vtemp845[0x15U] = __Vtemp843[0x15U];
    __Vtemp845[0x16U] = __Vtemp843[0x16U];
    __Vtemp845[0x17U] = __Vtemp843[0x17U];
    __Vtemp845[0x18U] = __Vtemp843[0x18U];
    __Vtemp845[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp843[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp846, __Vtemp845);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0U] 
        = __Vtemp846[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[1U] 
        = __Vtemp846[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[2U] 
        = __Vtemp846[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[3U] 
        = __Vtemp846[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[4U] 
        = __Vtemp846[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[5U] 
        = __Vtemp846[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[6U] 
        = __Vtemp846[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[7U] 
        = __Vtemp846[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[8U] 
        = __Vtemp846[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[9U] 
        = __Vtemp846[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0xaU] 
        = __Vtemp846[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0xbU] 
        = __Vtemp846[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0xcU] 
        = __Vtemp846[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0xdU] 
        = __Vtemp846[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0xeU] 
        = __Vtemp846[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0xfU] 
        = __Vtemp846[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x10U] 
        = __Vtemp846[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x11U] 
        = __Vtemp846[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x12U] 
        = __Vtemp846[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x13U] 
        = __Vtemp846[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x14U] 
        = __Vtemp846[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x15U] 
        = __Vtemp846[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x16U] 
        = __Vtemp846[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x17U] 
        = __Vtemp846[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x18U] 
        = __Vtemp846[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x19U] 
        = __Vtemp846[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x1aU] 
        = __Vtemp846[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x1bU] 
        = __Vtemp810[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x1cU] 
        = __Vtemp810[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x1dU] 
        = __Vtemp810[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x1eU] 
        = __Vtemp810[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x1fU] 
        = __Vtemp810[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x20U] 
        = __Vtemp810[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x21U] 
        = __Vtemp810[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_pc) 
                           << 0x1eU)) | __Vtemp810[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2829[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_20_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4355(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4355\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp855[7];
    WData/*255:0*/ __Vtemp856[8];
    WData/*159:0*/ __Vtemp859[5];
    WData/*159:0*/ __Vtemp860[5];
    WData/*95:0*/ __Vtemp868[3];
    WData/*127:0*/ __Vtemp869[4];
    WData/*159:0*/ __Vtemp871[5];
    WData/*159:0*/ __Vtemp878[5];
    WData/*159:0*/ __Vtemp879[5];
    WData/*223:0*/ __Vtemp882[7];
    WData/*831:0*/ __Vtemp888[26];
    WData/*831:0*/ __Vtemp889[26];
    WData/*831:0*/ __Vtemp891[26];
    WData/*863:0*/ __Vtemp892[27];
    // Body
    __Vtemp855[0U] = 0U;
    __Vtemp855[1U] = 0U;
    __Vtemp855[2U] = 0U;
    __Vtemp855[3U] = 0U;
    __Vtemp855[4U] = 0U;
    __Vtemp855[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_taken) 
                                        << 0x11U)));
    __Vtemp855[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp856, __Vtemp855);
    __Vtemp859[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc) 
                                     << 0x19U));
    __Vtemp859[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp859[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp859[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp859[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp860, __Vtemp859);
    __Vtemp868[0U] = 0U;
    __Vtemp868[1U] = 0U;
    __Vtemp868[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp869, __Vtemp868);
    VL_EXTEND_WI(134,1, __Vtemp871, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_xcpt_pf_if));
    __Vtemp878[0U] = 0U;
    __Vtemp878[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_pc) 
                                     << 8U));
    __Vtemp878[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp878[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_inst 
                                   >> 0xfU)));
    __Vtemp878[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp879, __Vtemp878);
    VL_EXTEND_WQ(221,55, __Vtemp882, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp888[0U] = __Vtemp882[0U];
    __Vtemp888[1U] = __Vtemp882[1U];
    __Vtemp888[2U] = __Vtemp882[2U];
    __Vtemp888[3U] = __Vtemp882[3U];
    __Vtemp888[4U] = __Vtemp882[4U];
    __Vtemp888[5U] = __Vtemp882[5U];
    __Vtemp888[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_taken) 
                                       << 0x1dU)) | 
                       __Vtemp882[6U]));
    __Vtemp888[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_pc_lob) 
                                          >> 2U)))));
    __Vtemp888[8U] = ((0xfffffffcU & (__Vtemp879[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_is_sfb) 
                                                    >> 2U)));
    __Vtemp888[9U] = ((3U & (__Vtemp879[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp879[1U] 
                                        << 2U)));
    __Vtemp888[0xaU] = ((3U & (__Vtemp879[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp879[2U] 
                                          << 2U)));
    __Vtemp888[0xbU] = ((3U & (__Vtemp879[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp879[3U] 
                                          << 2U)));
    __Vtemp888[0xcU] = ((3U & (__Vtemp879[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp879[4U] 
                                          << 2U)));
    __Vtemp888[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp879[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp871[0U] 
                                          << 2U)));
    __Vtemp888[0xeU] = ((3U & (__Vtemp871[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp871[1U] 
                                          << 2U)));
    __Vtemp888[0xfU] = ((3U & (__Vtemp871[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp871[2U] 
                                          << 2U)));
    __Vtemp888[0x10U] = ((3U & (__Vtemp871[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp871[3U] 
                                           << 2U)));
    __Vtemp888[0x11U] = ((0xffffff00U & (__Vtemp869[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp871[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp871[4U] 
                                            << 2U))));
    __Vtemp888[0x12U] = ((0xffU & (__Vtemp869[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp869[1U] 
                                           << 8U)));
    __Vtemp888[0x13U] = ((0xffU & (__Vtemp869[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp869[2U] 
                                           << 8U)));
    __Vtemp888[0x14U] = ((0xffU & (__Vtemp869[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp869[3U] 
                                              << 8U))));
    __Vtemp888[0x15U] = ((0xfffff800U & (__Vtemp860[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp869[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_sfb) 
                                            >> 8U))));
    __Vtemp888[0x16U] = ((0x7ffU & (__Vtemp860[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp860[1U] 
                                                     << 0xbU)));
    __Vtemp888[0x17U] = ((0x7ffU & (__Vtemp860[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp860[2U] 
                                                     << 0xbU)));
    __Vtemp888[0x18U] = ((0x7ffU & (__Vtemp860[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp860[3U] 
                                                     << 0xbU)));
    __Vtemp888[0x19U] = ((0x7ffU & (__Vtemp860[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp860[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp889, __Vtemp888);
    __Vtemp891[0U] = __Vtemp889[0U];
    __Vtemp891[1U] = __Vtemp889[1U];
    __Vtemp891[2U] = __Vtemp889[2U];
    __Vtemp891[3U] = __Vtemp889[3U];
    __Vtemp891[4U] = __Vtemp889[4U];
    __Vtemp891[5U] = __Vtemp889[5U];
    __Vtemp891[6U] = __Vtemp889[6U];
    __Vtemp891[7U] = __Vtemp889[7U];
    __Vtemp891[8U] = __Vtemp889[8U];
    __Vtemp891[9U] = __Vtemp889[9U];
    __Vtemp891[0xaU] = __Vtemp889[0xaU];
    __Vtemp891[0xbU] = __Vtemp889[0xbU];
    __Vtemp891[0xcU] = __Vtemp889[0xcU];
    __Vtemp891[0xdU] = __Vtemp889[0xdU];
    __Vtemp891[0xeU] = __Vtemp889[0xeU];
    __Vtemp891[0xfU] = __Vtemp889[0xfU];
    __Vtemp891[0x10U] = __Vtemp889[0x10U];
    __Vtemp891[0x11U] = __Vtemp889[0x11U];
    __Vtemp891[0x12U] = __Vtemp889[0x12U];
    __Vtemp891[0x13U] = __Vtemp889[0x13U];
    __Vtemp891[0x14U] = __Vtemp889[0x14U];
    __Vtemp891[0x15U] = __Vtemp889[0x15U];
    __Vtemp891[0x16U] = __Vtemp889[0x16U];
    __Vtemp891[0x17U] = __Vtemp889[0x17U];
    __Vtemp891[0x18U] = __Vtemp889[0x18U];
    __Vtemp891[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp889[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp892, __Vtemp891);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0U] 
        = __Vtemp892[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[1U] 
        = __Vtemp892[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[2U] 
        = __Vtemp892[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[3U] 
        = __Vtemp892[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[4U] 
        = __Vtemp892[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[5U] 
        = __Vtemp892[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[6U] 
        = __Vtemp892[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[7U] 
        = __Vtemp892[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[8U] 
        = __Vtemp892[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[9U] 
        = __Vtemp892[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xaU] 
        = __Vtemp892[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xbU] 
        = __Vtemp892[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xcU] 
        = __Vtemp892[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xdU] 
        = __Vtemp892[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xeU] 
        = __Vtemp892[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xfU] 
        = __Vtemp892[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x10U] 
        = __Vtemp892[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x11U] 
        = __Vtemp892[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x12U] 
        = __Vtemp892[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x13U] 
        = __Vtemp892[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x14U] 
        = __Vtemp892[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x15U] 
        = __Vtemp892[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x16U] 
        = __Vtemp892[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x17U] 
        = __Vtemp892[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x18U] 
        = __Vtemp892[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x19U] 
        = __Vtemp892[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1aU] 
        = __Vtemp892[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1bU] 
        = __Vtemp856[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1cU] 
        = __Vtemp856[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1dU] 
        = __Vtemp856[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1eU] 
        = __Vtemp856[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1fU] 
        = __Vtemp856[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x20U] 
        = __Vtemp856[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x21U] 
        = __Vtemp856[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc) 
                           << 0x1eU)) | __Vtemp856[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4356(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4356\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp901[7];
    WData/*255:0*/ __Vtemp902[8];
    WData/*159:0*/ __Vtemp905[5];
    WData/*159:0*/ __Vtemp906[5];
    WData/*95:0*/ __Vtemp914[3];
    WData/*127:0*/ __Vtemp915[4];
    WData/*159:0*/ __Vtemp917[5];
    WData/*159:0*/ __Vtemp924[5];
    WData/*159:0*/ __Vtemp925[5];
    WData/*223:0*/ __Vtemp928[7];
    WData/*831:0*/ __Vtemp934[26];
    WData/*831:0*/ __Vtemp935[26];
    WData/*831:0*/ __Vtemp937[26];
    WData/*863:0*/ __Vtemp938[27];
    // Body
    __Vtemp901[0U] = 0U;
    __Vtemp901[1U] = 0U;
    __Vtemp901[2U] = 0U;
    __Vtemp901[3U] = 0U;
    __Vtemp901[4U] = 0U;
    __Vtemp901[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_taken) 
                                        << 0x11U)));
    __Vtemp901[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp902, __Vtemp901);
    __Vtemp905[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                     << 0x19U));
    __Vtemp905[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp905[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp905[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp905[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp906, __Vtemp905);
    __Vtemp914[0U] = 0U;
    __Vtemp914[1U] = 0U;
    __Vtemp914[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp915, __Vtemp914);
    VL_EXTEND_WI(134,1, __Vtemp917, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_xcpt_pf_if));
    __Vtemp924[0U] = 0U;
    __Vtemp924[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_pc) 
                                     << 8U));
    __Vtemp924[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp924[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_inst 
                                   >> 0xfU)));
    __Vtemp924[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp925, __Vtemp924);
    VL_EXTEND_WQ(221,55, __Vtemp928, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp934[0U] = __Vtemp928[0U];
    __Vtemp934[1U] = __Vtemp928[1U];
    __Vtemp934[2U] = __Vtemp928[2U];
    __Vtemp934[3U] = __Vtemp928[3U];
    __Vtemp934[4U] = __Vtemp928[4U];
    __Vtemp934[5U] = __Vtemp928[5U];
    __Vtemp934[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_taken) 
                                       << 0x1dU)) | 
                       __Vtemp928[6U]));
    __Vtemp934[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_pc_lob) 
                                          >> 2U)))));
    __Vtemp934[8U] = ((0xfffffffcU & (__Vtemp925[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_is_sfb) 
                                                    >> 2U)));
    __Vtemp934[9U] = ((3U & (__Vtemp925[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp925[1U] 
                                        << 2U)));
    __Vtemp934[0xaU] = ((3U & (__Vtemp925[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp925[2U] 
                                          << 2U)));
    __Vtemp934[0xbU] = ((3U & (__Vtemp925[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp925[3U] 
                                          << 2U)));
    __Vtemp934[0xcU] = ((3U & (__Vtemp925[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp925[4U] 
                                          << 2U)));
    __Vtemp934[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp925[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp917[0U] 
                                          << 2U)));
    __Vtemp934[0xeU] = ((3U & (__Vtemp917[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp917[1U] 
                                          << 2U)));
    __Vtemp934[0xfU] = ((3U & (__Vtemp917[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp917[2U] 
                                          << 2U)));
    __Vtemp934[0x10U] = ((3U & (__Vtemp917[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp917[3U] 
                                           << 2U)));
    __Vtemp934[0x11U] = ((0xffffff00U & (__Vtemp915[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp917[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp917[4U] 
                                            << 2U))));
    __Vtemp934[0x12U] = ((0xffU & (__Vtemp915[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp915[1U] 
                                           << 8U)));
    __Vtemp934[0x13U] = ((0xffU & (__Vtemp915[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp915[2U] 
                                           << 8U)));
    __Vtemp934[0x14U] = ((0xffU & (__Vtemp915[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp915[3U] 
                                              << 8U))));
    __Vtemp934[0x15U] = ((0xfffff800U & (__Vtemp906[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp915[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_sfb) 
                                            >> 8U))));
    __Vtemp934[0x16U] = ((0x7ffU & (__Vtemp906[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp906[1U] 
                                                     << 0xbU)));
    __Vtemp934[0x17U] = ((0x7ffU & (__Vtemp906[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp906[2U] 
                                                     << 0xbU)));
    __Vtemp934[0x18U] = ((0x7ffU & (__Vtemp906[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp906[3U] 
                                                     << 0xbU)));
    __Vtemp934[0x19U] = ((0x7ffU & (__Vtemp906[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp906[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp935, __Vtemp934);
    __Vtemp937[0U] = __Vtemp935[0U];
    __Vtemp937[1U] = __Vtemp935[1U];
    __Vtemp937[2U] = __Vtemp935[2U];
    __Vtemp937[3U] = __Vtemp935[3U];
    __Vtemp937[4U] = __Vtemp935[4U];
    __Vtemp937[5U] = __Vtemp935[5U];
    __Vtemp937[6U] = __Vtemp935[6U];
    __Vtemp937[7U] = __Vtemp935[7U];
    __Vtemp937[8U] = __Vtemp935[8U];
    __Vtemp937[9U] = __Vtemp935[9U];
    __Vtemp937[0xaU] = __Vtemp935[0xaU];
    __Vtemp937[0xbU] = __Vtemp935[0xbU];
    __Vtemp937[0xcU] = __Vtemp935[0xcU];
    __Vtemp937[0xdU] = __Vtemp935[0xdU];
    __Vtemp937[0xeU] = __Vtemp935[0xeU];
    __Vtemp937[0xfU] = __Vtemp935[0xfU];
    __Vtemp937[0x10U] = __Vtemp935[0x10U];
    __Vtemp937[0x11U] = __Vtemp935[0x11U];
    __Vtemp937[0x12U] = __Vtemp935[0x12U];
    __Vtemp937[0x13U] = __Vtemp935[0x13U];
    __Vtemp937[0x14U] = __Vtemp935[0x14U];
    __Vtemp937[0x15U] = __Vtemp935[0x15U];
    __Vtemp937[0x16U] = __Vtemp935[0x16U];
    __Vtemp937[0x17U] = __Vtemp935[0x17U];
    __Vtemp937[0x18U] = __Vtemp935[0x18U];
    __Vtemp937[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp935[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp938, __Vtemp937);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0U] 
        = __Vtemp938[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[1U] 
        = __Vtemp938[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[2U] 
        = __Vtemp938[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[3U] 
        = __Vtemp938[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[4U] 
        = __Vtemp938[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[5U] 
        = __Vtemp938[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[6U] 
        = __Vtemp938[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[7U] 
        = __Vtemp938[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[8U] 
        = __Vtemp938[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[9U] 
        = __Vtemp938[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xaU] 
        = __Vtemp938[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xbU] 
        = __Vtemp938[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xcU] 
        = __Vtemp938[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xdU] 
        = __Vtemp938[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xeU] 
        = __Vtemp938[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xfU] 
        = __Vtemp938[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x10U] 
        = __Vtemp938[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x11U] 
        = __Vtemp938[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x12U] 
        = __Vtemp938[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x13U] 
        = __Vtemp938[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x14U] 
        = __Vtemp938[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x15U] 
        = __Vtemp938[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x16U] 
        = __Vtemp938[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x17U] 
        = __Vtemp938[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x18U] 
        = __Vtemp938[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x19U] 
        = __Vtemp938[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1aU] 
        = __Vtemp938[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1bU] 
        = __Vtemp902[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1cU] 
        = __Vtemp902[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1dU] 
        = __Vtemp902[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1eU] 
        = __Vtemp902[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1fU] 
        = __Vtemp902[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x20U] 
        = __Vtemp902[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x21U] 
        = __Vtemp902[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                           << 0x1eU)) | __Vtemp902[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4357(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4357\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp947[7];
    WData/*255:0*/ __Vtemp948[8];
    WData/*159:0*/ __Vtemp951[5];
    WData/*159:0*/ __Vtemp952[5];
    WData/*95:0*/ __Vtemp960[3];
    WData/*127:0*/ __Vtemp961[4];
    WData/*159:0*/ __Vtemp963[5];
    WData/*159:0*/ __Vtemp970[5];
    WData/*159:0*/ __Vtemp971[5];
    WData/*223:0*/ __Vtemp974[7];
    WData/*831:0*/ __Vtemp980[26];
    WData/*831:0*/ __Vtemp981[26];
    WData/*831:0*/ __Vtemp983[26];
    WData/*863:0*/ __Vtemp984[27];
    // Body
    __Vtemp947[0U] = 0U;
    __Vtemp947[1U] = 0U;
    __Vtemp947[2U] = 0U;
    __Vtemp947[3U] = 0U;
    __Vtemp947[4U] = 0U;
    __Vtemp947[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_taken) 
                                        << 0x11U)));
    __Vtemp947[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp948, __Vtemp947);
    __Vtemp951[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc) 
                                     << 0x19U));
    __Vtemp951[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp951[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp951[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp951[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp952, __Vtemp951);
    __Vtemp960[0U] = 0U;
    __Vtemp960[1U] = 0U;
    __Vtemp960[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp961, __Vtemp960);
    VL_EXTEND_WI(134,1, __Vtemp963, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_xcpt_pf_if));
    __Vtemp970[0U] = 0U;
    __Vtemp970[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_pc) 
                                     << 8U));
    __Vtemp970[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp970[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_inst 
                                   >> 0xfU)));
    __Vtemp970[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp971, __Vtemp970);
    VL_EXTEND_WQ(221,55, __Vtemp974, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp980[0U] = __Vtemp974[0U];
    __Vtemp980[1U] = __Vtemp974[1U];
    __Vtemp980[2U] = __Vtemp974[2U];
    __Vtemp980[3U] = __Vtemp974[3U];
    __Vtemp980[4U] = __Vtemp974[4U];
    __Vtemp980[5U] = __Vtemp974[5U];
    __Vtemp980[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_taken) 
                                       << 0x1dU)) | 
                       __Vtemp974[6U]));
    __Vtemp980[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_pc_lob) 
                                          >> 2U)))));
    __Vtemp980[8U] = ((0xfffffffcU & (__Vtemp971[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_is_sfb) 
                                                    >> 2U)));
    __Vtemp980[9U] = ((3U & (__Vtemp971[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp971[1U] 
                                        << 2U)));
    __Vtemp980[0xaU] = ((3U & (__Vtemp971[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp971[2U] 
                                          << 2U)));
    __Vtemp980[0xbU] = ((3U & (__Vtemp971[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp971[3U] 
                                          << 2U)));
    __Vtemp980[0xcU] = ((3U & (__Vtemp971[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp971[4U] 
                                          << 2U)));
    __Vtemp980[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp971[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp963[0U] 
                                          << 2U)));
    __Vtemp980[0xeU] = ((3U & (__Vtemp963[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp963[1U] 
                                          << 2U)));
    __Vtemp980[0xfU] = ((3U & (__Vtemp963[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp963[2U] 
                                          << 2U)));
    __Vtemp980[0x10U] = ((3U & (__Vtemp963[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp963[3U] 
                                           << 2U)));
    __Vtemp980[0x11U] = ((0xffffff00U & (__Vtemp961[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp963[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp963[4U] 
                                            << 2U))));
    __Vtemp980[0x12U] = ((0xffU & (__Vtemp961[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp961[1U] 
                                           << 8U)));
    __Vtemp980[0x13U] = ((0xffU & (__Vtemp961[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp961[2U] 
                                           << 8U)));
    __Vtemp980[0x14U] = ((0xffU & (__Vtemp961[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp961[3U] 
                                              << 8U))));
    __Vtemp980[0x15U] = ((0xfffff800U & (__Vtemp952[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp961[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_sfb) 
                                            >> 8U))));
    __Vtemp980[0x16U] = ((0x7ffU & (__Vtemp952[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp952[1U] 
                                                     << 0xbU)));
    __Vtemp980[0x17U] = ((0x7ffU & (__Vtemp952[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp952[2U] 
                                                     << 0xbU)));
    __Vtemp980[0x18U] = ((0x7ffU & (__Vtemp952[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp952[3U] 
                                                     << 0xbU)));
    __Vtemp980[0x19U] = ((0x7ffU & (__Vtemp952[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp952[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp981, __Vtemp980);
    __Vtemp983[0U] = __Vtemp981[0U];
    __Vtemp983[1U] = __Vtemp981[1U];
    __Vtemp983[2U] = __Vtemp981[2U];
    __Vtemp983[3U] = __Vtemp981[3U];
    __Vtemp983[4U] = __Vtemp981[4U];
    __Vtemp983[5U] = __Vtemp981[5U];
    __Vtemp983[6U] = __Vtemp981[6U];
    __Vtemp983[7U] = __Vtemp981[7U];
    __Vtemp983[8U] = __Vtemp981[8U];
    __Vtemp983[9U] = __Vtemp981[9U];
    __Vtemp983[0xaU] = __Vtemp981[0xaU];
    __Vtemp983[0xbU] = __Vtemp981[0xbU];
    __Vtemp983[0xcU] = __Vtemp981[0xcU];
    __Vtemp983[0xdU] = __Vtemp981[0xdU];
    __Vtemp983[0xeU] = __Vtemp981[0xeU];
    __Vtemp983[0xfU] = __Vtemp981[0xfU];
    __Vtemp983[0x10U] = __Vtemp981[0x10U];
    __Vtemp983[0x11U] = __Vtemp981[0x11U];
    __Vtemp983[0x12U] = __Vtemp981[0x12U];
    __Vtemp983[0x13U] = __Vtemp981[0x13U];
    __Vtemp983[0x14U] = __Vtemp981[0x14U];
    __Vtemp983[0x15U] = __Vtemp981[0x15U];
    __Vtemp983[0x16U] = __Vtemp981[0x16U];
    __Vtemp983[0x17U] = __Vtemp981[0x17U];
    __Vtemp983[0x18U] = __Vtemp981[0x18U];
    __Vtemp983[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp981[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp984, __Vtemp983);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0U] 
        = __Vtemp984[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[1U] 
        = __Vtemp984[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[2U] 
        = __Vtemp984[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[3U] 
        = __Vtemp984[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[4U] 
        = __Vtemp984[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[5U] 
        = __Vtemp984[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[6U] 
        = __Vtemp984[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[7U] 
        = __Vtemp984[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[8U] 
        = __Vtemp984[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[9U] 
        = __Vtemp984[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xaU] 
        = __Vtemp984[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xbU] 
        = __Vtemp984[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xcU] 
        = __Vtemp984[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xdU] 
        = __Vtemp984[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xeU] 
        = __Vtemp984[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xfU] 
        = __Vtemp984[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x10U] 
        = __Vtemp984[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x11U] 
        = __Vtemp984[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x12U] 
        = __Vtemp984[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x13U] 
        = __Vtemp984[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x14U] 
        = __Vtemp984[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x15U] 
        = __Vtemp984[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x16U] 
        = __Vtemp984[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x17U] 
        = __Vtemp984[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x18U] 
        = __Vtemp984[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x19U] 
        = __Vtemp984[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1aU] 
        = __Vtemp984[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1bU] 
        = __Vtemp948[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1cU] 
        = __Vtemp948[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1dU] 
        = __Vtemp948[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1eU] 
        = __Vtemp948[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1fU] 
        = __Vtemp948[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x20U] 
        = __Vtemp948[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x21U] 
        = __Vtemp948[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc) 
                           << 0x1eU)) | __Vtemp948[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4358(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4358\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp993[7];
    WData/*255:0*/ __Vtemp994[8];
    WData/*159:0*/ __Vtemp997[5];
    WData/*159:0*/ __Vtemp998[5];
    WData/*95:0*/ __Vtemp1006[3];
    WData/*127:0*/ __Vtemp1007[4];
    WData/*159:0*/ __Vtemp1009[5];
    WData/*159:0*/ __Vtemp1016[5];
    WData/*159:0*/ __Vtemp1017[5];
    WData/*223:0*/ __Vtemp1020[7];
    WData/*831:0*/ __Vtemp1026[26];
    WData/*831:0*/ __Vtemp1027[26];
    WData/*831:0*/ __Vtemp1029[26];
    WData/*863:0*/ __Vtemp1030[27];
    // Body
    __Vtemp993[0U] = 0U;
    __Vtemp993[1U] = 0U;
    __Vtemp993[2U] = 0U;
    __Vtemp993[3U] = 0U;
    __Vtemp993[4U] = 0U;
    __Vtemp993[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_taken) 
                                        << 0x11U)));
    __Vtemp993[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp994, __Vtemp993);
    __Vtemp997[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc) 
                                     << 0x19U));
    __Vtemp997[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp997[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp997[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp997[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp998, __Vtemp997);
    __Vtemp1006[0U] = 0U;
    __Vtemp1006[1U] = 0U;
    __Vtemp1006[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_ftq_idx) 
                                       << 0x17U)) | 
                       ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_edge_inst) 
                                        << 0x16U)) 
                        | ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_pc_lob) 
                                           << 0x10U)) 
                           | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_taken) 
                                             << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp1007, __Vtemp1006);
    VL_EXTEND_WI(134,1, __Vtemp1009, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_xcpt_pf_if));
    __Vtemp1016[0U] = 0U;
    __Vtemp1016[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_pc) 
                                      << 8U));
    __Vtemp1016[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_inst 
                                       << 0x11U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_is_rvc) 
                                        << 0x10U)) 
                        | ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_pc) 
                                     >> 0x18U)) | (0xffffff00U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_pc 
                                                               >> 0x20U)) 
                                                      << 8U)))));
    __Vtemp1016[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_inst))) 
                                       << 0x11U)) | 
                       (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_inst 
                                    >> 0xfU)));
    __Vtemp1016[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_bp_debug_if) 
                                       << 0x1dU)) | 
                       ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_bp_xcpt_if) 
                                        << 0x1cU)) 
                        | ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_fsrc) 
                                           << 0x1aU)) 
                           | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_inst))) 
                                           >> 0xfU)) 
                              | (0xfffe0000U & ((IData)(
                                                        ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_inst)) 
                                                         >> 0x20U)) 
                                                << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp1017, __Vtemp1016);
    VL_EXTEND_WQ(221,55, __Vtemp1020, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_xcpt_pf_if)) 
                                        << 8U) | (QData)((IData)(
                                                                 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_xcpt_ae_if) 
                                                                   << 7U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_bp_debug_if) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_bp_xcpt_if) 
                                                                         << 4U) 
                                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_fsrc) 
                                                                           << 2U))))))));
    __Vtemp1026[0U] = __Vtemp1020[0U];
    __Vtemp1026[1U] = __Vtemp1020[1U];
    __Vtemp1026[2U] = __Vtemp1020[2U];
    __Vtemp1026[3U] = __Vtemp1020[3U];
    __Vtemp1026[4U] = __Vtemp1020[4U];
    __Vtemp1026[5U] = __Vtemp1020[5U];
    __Vtemp1026[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_pc_lob) 
                                       << 0x1eU)) | 
                       ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_taken) 
                                        << 0x1dU)) 
                        | __Vtemp1020[6U]));
    __Vtemp1026[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_is_sfb) 
                                       << 0x1eU)) | 
                       (0x3fffffffU & ((0x3fffffe0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_ftq_idx) 
                                           << 5U)) 
                                       | ((0x3ffffff0U 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_edge_inst) 
                                              << 4U)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_pc_lob) 
                                             >> 2U)))));
    __Vtemp1026[8U] = ((0xfffffffcU & (__Vtemp1017[0U] 
                                       << 2U)) | (0x3fffffffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_is_sfb) 
                                                     >> 2U)));
    __Vtemp1026[9U] = ((3U & (__Vtemp1017[0U] >> 0x1eU)) 
                       | (0xfffffffcU & (__Vtemp1017[1U] 
                                         << 2U)));
    __Vtemp1026[0xaU] = ((3U & (__Vtemp1017[1U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1017[2U] 
                                           << 2U)));
    __Vtemp1026[0xbU] = ((3U & (__Vtemp1017[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1017[3U] 
                                           << 2U)));
    __Vtemp1026[0xcU] = ((3U & (__Vtemp1017[3U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1017[4U] 
                                           << 2U)));
    __Vtemp1026[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_xcpt_ae_if) 
                                       << 1U)) | (__Vtemp1017[4U] 
                                                  >> 0x1eU))) 
                         | (0xfffffffcU & (__Vtemp1009[0U] 
                                           << 2U)));
    __Vtemp1026[0xeU] = ((3U & (__Vtemp1009[0U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1009[1U] 
                                           << 2U)));
    __Vtemp1026[0xfU] = ((3U & (__Vtemp1009[1U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1009[2U] 
                                           << 2U)));
    __Vtemp1026[0x10U] = ((3U & (__Vtemp1009[2U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp1009[3U] 
                                            << 2U)));
    __Vtemp1026[0x11U] = ((0xffffff00U & (__Vtemp1007[0U] 
                                          << 8U)) | 
                          ((3U & (__Vtemp1009[3U] >> 0x1eU)) 
                           | (0xfffffffcU & (__Vtemp1009[4U] 
                                             << 2U))));
    __Vtemp1026[0x12U] = ((0xffU & (__Vtemp1007[0U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & (__Vtemp1007[1U] 
                                                     << 8U)));
    __Vtemp1026[0x13U] = ((0xffU & (__Vtemp1007[1U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & (__Vtemp1007[2U] 
                                                     << 8U)));
    __Vtemp1026[0x14U] = ((0xffU & (__Vtemp1007[2U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & ((0xff000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_sfb) 
                                                         << 0x18U)) 
                                                     | (__Vtemp1007[3U] 
                                                        << 8U))));
    __Vtemp1026[0x15U] = ((0xfffff800U & (__Vtemp998[0U] 
                                          << 0xbU)) 
                          | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_sfb) 
                                                 >> 8U)) 
                                       | (__Vtemp1007[3U] 
                                          >> 0x18U))) 
                             | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_sfb) 
                                             >> 8U))));
    __Vtemp1026[0x16U] = ((0x7ffU & (__Vtemp998[0U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp998[1U] 
                                                      << 0xbU)));
    __Vtemp1026[0x17U] = ((0x7ffU & (__Vtemp998[1U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp998[2U] 
                                                      << 0xbU)));
    __Vtemp1026[0x18U] = ((0x7ffU & (__Vtemp998[2U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp998[3U] 
                                                      << 0xbU)));
    __Vtemp1026[0x19U] = ((0x7ffU & (__Vtemp998[3U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & ((0xfe000000U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_bp_debug_if) 
                                                          << 0x19U)) 
                                                      | ((0xff000000U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_bp_xcpt_if) 
                                                             << 0x18U)) 
                                                         | ((0xffc00000U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_fsrc) 
                                                                << 0x16U)) 
                                                            | (__Vtemp998[4U] 
                                                               << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp1027, __Vtemp1026);
    __Vtemp1029[0U] = __Vtemp1027[0U];
    __Vtemp1029[1U] = __Vtemp1027[1U];
    __Vtemp1029[2U] = __Vtemp1027[2U];
    __Vtemp1029[3U] = __Vtemp1027[3U];
    __Vtemp1029[4U] = __Vtemp1027[4U];
    __Vtemp1029[5U] = __Vtemp1027[5U];
    __Vtemp1029[6U] = __Vtemp1027[6U];
    __Vtemp1029[7U] = __Vtemp1027[7U];
    __Vtemp1029[8U] = __Vtemp1027[8U];
    __Vtemp1029[9U] = __Vtemp1027[9U];
    __Vtemp1029[0xaU] = __Vtemp1027[0xaU];
    __Vtemp1029[0xbU] = __Vtemp1027[0xbU];
    __Vtemp1029[0xcU] = __Vtemp1027[0xcU];
    __Vtemp1029[0xdU] = __Vtemp1027[0xdU];
    __Vtemp1029[0xeU] = __Vtemp1027[0xeU];
    __Vtemp1029[0xfU] = __Vtemp1027[0xfU];
    __Vtemp1029[0x10U] = __Vtemp1027[0x10U];
    __Vtemp1029[0x11U] = __Vtemp1027[0x11U];
    __Vtemp1029[0x12U] = __Vtemp1027[0x12U];
    __Vtemp1029[0x13U] = __Vtemp1027[0x13U];
    __Vtemp1029[0x14U] = __Vtemp1027[0x14U];
    __Vtemp1029[0x15U] = __Vtemp1027[0x15U];
    __Vtemp1029[0x16U] = __Vtemp1027[0x16U];
    __Vtemp1029[0x17U] = __Vtemp1027[0x17U];
    __Vtemp1029[0x18U] = __Vtemp1027[0x18U];
    __Vtemp1029[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_xcpt_pf_if) 
                                          << 0x1cU)) 
                          | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_xcpt_ae_if) 
                                             << 0x1bU)) 
                             | __Vtemp1027[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp1030, __Vtemp1029);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0U] 
        = __Vtemp1030[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[1U] 
        = __Vtemp1030[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[2U] 
        = __Vtemp1030[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[3U] 
        = __Vtemp1030[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[4U] 
        = __Vtemp1030[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[5U] 
        = __Vtemp1030[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[6U] 
        = __Vtemp1030[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[7U] 
        = __Vtemp1030[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[8U] 
        = __Vtemp1030[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[9U] 
        = __Vtemp1030[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xaU] 
        = __Vtemp1030[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xbU] 
        = __Vtemp1030[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xcU] 
        = __Vtemp1030[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xdU] 
        = __Vtemp1030[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xeU] 
        = __Vtemp1030[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xfU] 
        = __Vtemp1030[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x10U] 
        = __Vtemp1030[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x11U] 
        = __Vtemp1030[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x12U] 
        = __Vtemp1030[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x13U] 
        = __Vtemp1030[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x14U] 
        = __Vtemp1030[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x15U] 
        = __Vtemp1030[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x16U] 
        = __Vtemp1030[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x17U] 
        = __Vtemp1030[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x18U] 
        = __Vtemp1030[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x19U] 
        = __Vtemp1030[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1aU] 
        = __Vtemp1030[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1bU] 
        = __Vtemp994[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1cU] 
        = __Vtemp994[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1dU] 
        = __Vtemp994[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1eU] 
        = __Vtemp994[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1fU] 
        = __Vtemp994[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x20U] 
        = __Vtemp994[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x21U] 
        = __Vtemp994[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc) 
                           << 0x1eU)) | __Vtemp994[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4359(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4359\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1039[7];
    WData/*255:0*/ __Vtemp1040[8];
    WData/*159:0*/ __Vtemp1043[5];
    WData/*159:0*/ __Vtemp1044[5];
    WData/*95:0*/ __Vtemp1052[3];
    WData/*127:0*/ __Vtemp1053[4];
    WData/*159:0*/ __Vtemp1055[5];
    WData/*159:0*/ __Vtemp1062[5];
    WData/*159:0*/ __Vtemp1063[5];
    WData/*223:0*/ __Vtemp1066[7];
    WData/*831:0*/ __Vtemp1072[26];
    WData/*831:0*/ __Vtemp1073[26];
    WData/*831:0*/ __Vtemp1075[26];
    WData/*863:0*/ __Vtemp1076[27];
    // Body
    __Vtemp1039[0U] = 0U;
    __Vtemp1039[1U] = 0U;
    __Vtemp1039[2U] = 0U;
    __Vtemp1039[3U] = 0U;
    __Vtemp1039[4U] = 0U;
    __Vtemp1039[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_ftq_idx) 
                                        << 0x19U) | 
                                       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_edge_inst) 
                                         << 0x18U) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_pc_lob) 
                                           << 0x12U)))) 
                       | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_taken) 
                                         << 0x11U)));
    __Vtemp1039[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_is_sfb) 
                                       << 0x12U)) | 
                       (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_ftq_idx) 
                                                 >> 7U)) 
                                    | ((0x3ffffU & 
                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_edge_inst) 
                                         >> 8U)) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_pc_lob) 
                                        >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp1040, __Vtemp1039);
    __Vtemp1043[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc) 
                                      << 0x19U));
    __Vtemp1043[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc) 
                                      >> 7U)) | (0xfe000000U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc 
                                                             >> 0x20U)) 
                                                    << 0x19U)));
    __Vtemp1043[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst)))) 
                                       << 2U)) | ((0xfffffffeU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_rvc) 
                                                      << 1U)) 
                                                  | (0x1ffffffU 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc 
                                                                 >> 0x20U)) 
                                                        >> 7U))));
    __Vtemp1043[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst)))) 
                              >> 0x1eU)) | (0xfffffffcU 
                                            & ((IData)(
                                                       ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    __Vtemp1043[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst))) 
                                      >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp1044, __Vtemp1043);
    __Vtemp1052[0U] = 0U;
    __Vtemp1052[1U] = 0U;
    __Vtemp1052[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_ftq_idx) 
                                       << 0x17U)) | 
                       ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_edge_inst) 
                                        << 0x16U)) 
                        | ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_pc_lob) 
                                           << 0x10U)) 
                           | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_taken) 
                                             << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp1053, __Vtemp1052);
    VL_EXTEND_WI(134,1, __Vtemp1055, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_xcpt_pf_if));
    __Vtemp1062[0U] = 0U;
    __Vtemp1062[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_pc) 
                                      << 8U));
    __Vtemp1062[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_inst 
                                       << 0x11U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_is_rvc) 
                                        << 0x10U)) 
                        | ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_pc) 
                                     >> 0x18U)) | (0xffffff00U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_pc 
                                                               >> 0x20U)) 
                                                      << 8U)))));
    __Vtemp1062[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_inst))) 
                                       << 0x11U)) | 
                       (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_inst 
                                    >> 0xfU)));
    __Vtemp1062[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_bp_debug_if) 
                                       << 0x1dU)) | 
                       ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_bp_xcpt_if) 
                                        << 0x1cU)) 
                        | ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_fsrc) 
                                           << 0x1aU)) 
                           | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_inst))) 
                                           >> 0xfU)) 
                              | (0xfffe0000U & ((IData)(
                                                        ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_inst)) 
                                                         >> 0x20U)) 
                                                << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp1063, __Vtemp1062);
    VL_EXTEND_WQ(221,55, __Vtemp1066, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_xcpt_pf_if)) 
                                        << 8U) | (QData)((IData)(
                                                                 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_xcpt_ae_if) 
                                                                   << 7U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_bp_debug_if) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_bp_xcpt_if) 
                                                                         << 4U) 
                                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_fsrc) 
                                                                           << 2U))))))));
    __Vtemp1072[0U] = __Vtemp1066[0U];
    __Vtemp1072[1U] = __Vtemp1066[1U];
    __Vtemp1072[2U] = __Vtemp1066[2U];
    __Vtemp1072[3U] = __Vtemp1066[3U];
    __Vtemp1072[4U] = __Vtemp1066[4U];
    __Vtemp1072[5U] = __Vtemp1066[5U];
    __Vtemp1072[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_pc_lob) 
                                       << 0x1eU)) | 
                       ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_taken) 
                                        << 0x1dU)) 
                        | __Vtemp1066[6U]));
    __Vtemp1072[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_is_sfb) 
                                       << 0x1eU)) | 
                       (0x3fffffffU & ((0x3fffffe0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_ftq_idx) 
                                           << 5U)) 
                                       | ((0x3ffffff0U 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_edge_inst) 
                                              << 4U)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_pc_lob) 
                                             >> 2U)))));
    __Vtemp1072[8U] = ((0xfffffffcU & (__Vtemp1063[0U] 
                                       << 2U)) | (0x3fffffffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_is_sfb) 
                                                     >> 2U)));
    __Vtemp1072[9U] = ((3U & (__Vtemp1063[0U] >> 0x1eU)) 
                       | (0xfffffffcU & (__Vtemp1063[1U] 
                                         << 2U)));
    __Vtemp1072[0xaU] = ((3U & (__Vtemp1063[1U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1063[2U] 
                                           << 2U)));
    __Vtemp1072[0xbU] = ((3U & (__Vtemp1063[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1063[3U] 
                                           << 2U)));
    __Vtemp1072[0xcU] = ((3U & (__Vtemp1063[3U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1063[4U] 
                                           << 2U)));
    __Vtemp1072[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_xcpt_ae_if) 
                                       << 1U)) | (__Vtemp1063[4U] 
                                                  >> 0x1eU))) 
                         | (0xfffffffcU & (__Vtemp1055[0U] 
                                           << 2U)));
    __Vtemp1072[0xeU] = ((3U & (__Vtemp1055[0U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1055[1U] 
                                           << 2U)));
    __Vtemp1072[0xfU] = ((3U & (__Vtemp1055[1U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1055[2U] 
                                           << 2U)));
    __Vtemp1072[0x10U] = ((3U & (__Vtemp1055[2U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp1055[3U] 
                                            << 2U)));
    __Vtemp1072[0x11U] = ((0xffffff00U & (__Vtemp1053[0U] 
                                          << 8U)) | 
                          ((3U & (__Vtemp1055[3U] >> 0x1eU)) 
                           | (0xfffffffcU & (__Vtemp1055[4U] 
                                             << 2U))));
    __Vtemp1072[0x12U] = ((0xffU & (__Vtemp1053[0U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & (__Vtemp1053[1U] 
                                                     << 8U)));
    __Vtemp1072[0x13U] = ((0xffU & (__Vtemp1053[1U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & (__Vtemp1053[2U] 
                                                     << 8U)));
    __Vtemp1072[0x14U] = ((0xffU & (__Vtemp1053[2U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & ((0xff000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_sfb) 
                                                         << 0x18U)) 
                                                     | (__Vtemp1053[3U] 
                                                        << 8U))));
    __Vtemp1072[0x15U] = ((0xfffff800U & (__Vtemp1044[0U] 
                                          << 0xbU)) 
                          | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_sfb) 
                                                 >> 8U)) 
                                       | (__Vtemp1053[3U] 
                                          >> 0x18U))) 
                             | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_sfb) 
                                             >> 8U))));
    __Vtemp1072[0x16U] = ((0x7ffU & (__Vtemp1044[0U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp1044[1U] 
                                                      << 0xbU)));
    __Vtemp1072[0x17U] = ((0x7ffU & (__Vtemp1044[1U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp1044[2U] 
                                                      << 0xbU)));
    __Vtemp1072[0x18U] = ((0x7ffU & (__Vtemp1044[2U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp1044[3U] 
                                                      << 0xbU)));
    __Vtemp1072[0x19U] = ((0x7ffU & (__Vtemp1044[3U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & ((0xfe000000U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_bp_debug_if) 
                                                          << 0x19U)) 
                                                      | ((0xff000000U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_bp_xcpt_if) 
                                                             << 0x18U)) 
                                                         | ((0xffc00000U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_fsrc) 
                                                                << 0x16U)) 
                                                            | (__Vtemp1044[4U] 
                                                               << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp1073, __Vtemp1072);
    __Vtemp1075[0U] = __Vtemp1073[0U];
    __Vtemp1075[1U] = __Vtemp1073[1U];
    __Vtemp1075[2U] = __Vtemp1073[2U];
    __Vtemp1075[3U] = __Vtemp1073[3U];
    __Vtemp1075[4U] = __Vtemp1073[4U];
    __Vtemp1075[5U] = __Vtemp1073[5U];
    __Vtemp1075[6U] = __Vtemp1073[6U];
    __Vtemp1075[7U] = __Vtemp1073[7U];
    __Vtemp1075[8U] = __Vtemp1073[8U];
    __Vtemp1075[9U] = __Vtemp1073[9U];
    __Vtemp1075[0xaU] = __Vtemp1073[0xaU];
    __Vtemp1075[0xbU] = __Vtemp1073[0xbU];
    __Vtemp1075[0xcU] = __Vtemp1073[0xcU];
    __Vtemp1075[0xdU] = __Vtemp1073[0xdU];
    __Vtemp1075[0xeU] = __Vtemp1073[0xeU];
    __Vtemp1075[0xfU] = __Vtemp1073[0xfU];
    __Vtemp1075[0x10U] = __Vtemp1073[0x10U];
    __Vtemp1075[0x11U] = __Vtemp1073[0x11U];
    __Vtemp1075[0x12U] = __Vtemp1073[0x12U];
    __Vtemp1075[0x13U] = __Vtemp1073[0x13U];
    __Vtemp1075[0x14U] = __Vtemp1073[0x14U];
    __Vtemp1075[0x15U] = __Vtemp1073[0x15U];
    __Vtemp1075[0x16U] = __Vtemp1073[0x16U];
    __Vtemp1075[0x17U] = __Vtemp1073[0x17U];
    __Vtemp1075[0x18U] = __Vtemp1073[0x18U];
    __Vtemp1075[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_xcpt_pf_if) 
                                          << 0x1cU)) 
                          | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_xcpt_ae_if) 
                                             << 0x1bU)) 
                             | __Vtemp1073[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp1076, __Vtemp1075);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0U] 
        = __Vtemp1076[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[1U] 
        = __Vtemp1076[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[2U] 
        = __Vtemp1076[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[3U] 
        = __Vtemp1076[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[4U] 
        = __Vtemp1076[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[5U] 
        = __Vtemp1076[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[6U] 
        = __Vtemp1076[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[7U] 
        = __Vtemp1076[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[8U] 
        = __Vtemp1076[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[9U] 
        = __Vtemp1076[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xaU] 
        = __Vtemp1076[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xbU] 
        = __Vtemp1076[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xcU] 
        = __Vtemp1076[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xdU] 
        = __Vtemp1076[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xeU] 
        = __Vtemp1076[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xfU] 
        = __Vtemp1076[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x10U] 
        = __Vtemp1076[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x11U] 
        = __Vtemp1076[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x12U] 
        = __Vtemp1076[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x13U] 
        = __Vtemp1076[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x14U] 
        = __Vtemp1076[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x15U] 
        = __Vtemp1076[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x16U] 
        = __Vtemp1076[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x17U] 
        = __Vtemp1076[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x18U] 
        = __Vtemp1076[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x19U] 
        = __Vtemp1076[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1aU] 
        = __Vtemp1076[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1bU] 
        = __Vtemp1040[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1cU] 
        = __Vtemp1040[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1dU] 
        = __Vtemp1040[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1eU] 
        = __Vtemp1040[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1fU] 
        = __Vtemp1040[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x20U] 
        = __Vtemp1040[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x21U] 
        = __Vtemp1040[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc) 
                           << 0x1eU)) | __Vtemp1040[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4360(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4360\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1085[7];
    WData/*255:0*/ __Vtemp1086[8];
    WData/*159:0*/ __Vtemp1089[5];
    WData/*159:0*/ __Vtemp1090[5];
    WData/*95:0*/ __Vtemp1098[3];
    WData/*127:0*/ __Vtemp1099[4];
    WData/*159:0*/ __Vtemp1101[5];
    WData/*159:0*/ __Vtemp1108[5];
    WData/*159:0*/ __Vtemp1109[5];
    WData/*223:0*/ __Vtemp1112[7];
    WData/*831:0*/ __Vtemp1118[26];
    WData/*831:0*/ __Vtemp1119[26];
    WData/*831:0*/ __Vtemp1121[26];
    WData/*863:0*/ __Vtemp1122[27];
    // Body
    __Vtemp1085[0U] = 0U;
    __Vtemp1085[1U] = 0U;
    __Vtemp1085[2U] = 0U;
    __Vtemp1085[3U] = 0U;
    __Vtemp1085[4U] = 0U;
    __Vtemp1085[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_ftq_idx) 
                                        << 0x19U) | 
                                       (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_edge_inst) 
                                         << 0x18U) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_pc_lob) 
                                           << 0x12U)))) 
                       | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_taken) 
                                         << 0x11U)));
    __Vtemp1085[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_is_sfb) 
                                       << 0x12U)) | 
                       (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_ftq_idx) 
                                                 >> 7U)) 
                                    | ((0x3ffffU & 
                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_edge_inst) 
                                         >> 8U)) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_pc_lob) 
                                        >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp1086, __Vtemp1085);
    __Vtemp1089[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc) 
                                      << 0x19U));
    __Vtemp1089[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc) 
                                      >> 7U)) | (0xfe000000U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc 
                                                             >> 0x20U)) 
                                                    << 0x19U)));
    __Vtemp1089[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst)))) 
                                       << 2U)) | ((0xfffffffeU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_rvc) 
                                                      << 1U)) 
                                                  | (0x1ffffffU 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc 
                                                                 >> 0x20U)) 
                                                        >> 7U))));
    __Vtemp1089[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst)))) 
                              >> 0x1eU)) | (0xfffffffcU 
                                            & ((IData)(
                                                       ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    __Vtemp1089[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst))) 
                                      >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp1090, __Vtemp1089);
    __Vtemp1098[0U] = 0U;
    __Vtemp1098[1U] = 0U;
    __Vtemp1098[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_ftq_idx) 
                                       << 0x17U)) | 
                       ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_edge_inst) 
                                        << 0x16U)) 
                        | ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_pc_lob) 
                                           << 0x10U)) 
                           | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_taken) 
                                             << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp1099, __Vtemp1098);
    VL_EXTEND_WI(134,1, __Vtemp1101, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_xcpt_pf_if));
    __Vtemp1108[0U] = 0U;
    __Vtemp1108[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_pc) 
                                      << 8U));
    __Vtemp1108[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_inst 
                                       << 0x11U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_is_rvc) 
                                        << 0x10U)) 
                        | ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_pc) 
                                     >> 0x18U)) | (0xffffff00U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_pc 
                                                               >> 0x20U)) 
                                                      << 8U)))));
    __Vtemp1108[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_inst))) 
                                       << 0x11U)) | 
                       (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_inst 
                                    >> 0xfU)));
    __Vtemp1108[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_bp_debug_if) 
                                       << 0x1dU)) | 
                       ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_bp_xcpt_if) 
                                        << 0x1cU)) 
                        | ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_fsrc) 
                                           << 0x1aU)) 
                           | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_inst))) 
                                           >> 0xfU)) 
                              | (0xfffe0000U & ((IData)(
                                                        ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_inst)) 
                                                         >> 0x20U)) 
                                                << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp1109, __Vtemp1108);
    VL_EXTEND_WQ(221,55, __Vtemp1112, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_xcpt_pf_if)) 
                                        << 8U) | (QData)((IData)(
                                                                 (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_xcpt_ae_if) 
                                                                   << 7U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_bp_debug_if) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_bp_xcpt_if) 
                                                                         << 4U) 
                                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_fsrc) 
                                                                           << 2U))))))));
    __Vtemp1118[0U] = __Vtemp1112[0U];
    __Vtemp1118[1U] = __Vtemp1112[1U];
    __Vtemp1118[2U] = __Vtemp1112[2U];
    __Vtemp1118[3U] = __Vtemp1112[3U];
    __Vtemp1118[4U] = __Vtemp1112[4U];
    __Vtemp1118[5U] = __Vtemp1112[5U];
    __Vtemp1118[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_pc_lob) 
                                       << 0x1eU)) | 
                       ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_taken) 
                                        << 0x1dU)) 
                        | __Vtemp1112[6U]));
    __Vtemp1118[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_is_sfb) 
                                       << 0x1eU)) | 
                       (0x3fffffffU & ((0x3fffffe0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_ftq_idx) 
                                           << 5U)) 
                                       | ((0x3ffffff0U 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_edge_inst) 
                                              << 4U)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_pc_lob) 
                                             >> 2U)))));
    __Vtemp1118[8U] = ((0xfffffffcU & (__Vtemp1109[0U] 
                                       << 2U)) | (0x3fffffffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_is_sfb) 
                                                     >> 2U)));
    __Vtemp1118[9U] = ((3U & (__Vtemp1109[0U] >> 0x1eU)) 
                       | (0xfffffffcU & (__Vtemp1109[1U] 
                                         << 2U)));
    __Vtemp1118[0xaU] = ((3U & (__Vtemp1109[1U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1109[2U] 
                                           << 2U)));
    __Vtemp1118[0xbU] = ((3U & (__Vtemp1109[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1109[3U] 
                                           << 2U)));
    __Vtemp1118[0xcU] = ((3U & (__Vtemp1109[3U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1109[4U] 
                                           << 2U)));
    __Vtemp1118[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_xcpt_ae_if) 
                                       << 1U)) | (__Vtemp1109[4U] 
                                                  >> 0x1eU))) 
                         | (0xfffffffcU & (__Vtemp1101[0U] 
                                           << 2U)));
    __Vtemp1118[0xeU] = ((3U & (__Vtemp1101[0U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1101[1U] 
                                           << 2U)));
    __Vtemp1118[0xfU] = ((3U & (__Vtemp1101[1U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp1101[2U] 
                                           << 2U)));
    __Vtemp1118[0x10U] = ((3U & (__Vtemp1101[2U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp1101[3U] 
                                            << 2U)));
    __Vtemp1118[0x11U] = ((0xffffff00U & (__Vtemp1099[0U] 
                                          << 8U)) | 
                          ((3U & (__Vtemp1101[3U] >> 0x1eU)) 
                           | (0xfffffffcU & (__Vtemp1101[4U] 
                                             << 2U))));
    __Vtemp1118[0x12U] = ((0xffU & (__Vtemp1099[0U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & (__Vtemp1099[1U] 
                                                     << 8U)));
    __Vtemp1118[0x13U] = ((0xffU & (__Vtemp1099[1U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & (__Vtemp1099[2U] 
                                                     << 8U)));
    __Vtemp1118[0x14U] = ((0xffU & (__Vtemp1099[2U] 
                                    >> 0x18U)) | (0xffffff00U 
                                                  & ((0xff000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_sfb) 
                                                         << 0x18U)) 
                                                     | (__Vtemp1099[3U] 
                                                        << 8U))));
    __Vtemp1118[0x15U] = ((0xfffff800U & (__Vtemp1090[0U] 
                                          << 0xbU)) 
                          | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_sfb) 
                                                 >> 8U)) 
                                       | (__Vtemp1099[3U] 
                                          >> 0x18U))) 
                             | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_sfb) 
                                             >> 8U))));
    __Vtemp1118[0x16U] = ((0x7ffU & (__Vtemp1090[0U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp1090[1U] 
                                                      << 0xbU)));
    __Vtemp1118[0x17U] = ((0x7ffU & (__Vtemp1090[1U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp1090[2U] 
                                                      << 0xbU)));
    __Vtemp1118[0x18U] = ((0x7ffU & (__Vtemp1090[2U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp1090[3U] 
                                                      << 0xbU)));
    __Vtemp1118[0x19U] = ((0x7ffU & (__Vtemp1090[3U] 
                                     >> 0x15U)) | (0xfffff800U 
                                                   & ((0xfe000000U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_bp_debug_if) 
                                                          << 0x19U)) 
                                                      | ((0xff000000U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_bp_xcpt_if) 
                                                             << 0x18U)) 
                                                         | ((0xffc00000U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_fsrc) 
                                                                << 0x16U)) 
                                                            | (__Vtemp1090[4U] 
                                                               << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp1119, __Vtemp1118);
    __Vtemp1121[0U] = __Vtemp1119[0U];
    __Vtemp1121[1U] = __Vtemp1119[1U];
    __Vtemp1121[2U] = __Vtemp1119[2U];
    __Vtemp1121[3U] = __Vtemp1119[3U];
    __Vtemp1121[4U] = __Vtemp1119[4U];
    __Vtemp1121[5U] = __Vtemp1119[5U];
    __Vtemp1121[6U] = __Vtemp1119[6U];
    __Vtemp1121[7U] = __Vtemp1119[7U];
    __Vtemp1121[8U] = __Vtemp1119[8U];
    __Vtemp1121[9U] = __Vtemp1119[9U];
    __Vtemp1121[0xaU] = __Vtemp1119[0xaU];
    __Vtemp1121[0xbU] = __Vtemp1119[0xbU];
    __Vtemp1121[0xcU] = __Vtemp1119[0xcU];
    __Vtemp1121[0xdU] = __Vtemp1119[0xdU];
    __Vtemp1121[0xeU] = __Vtemp1119[0xeU];
    __Vtemp1121[0xfU] = __Vtemp1119[0xfU];
    __Vtemp1121[0x10U] = __Vtemp1119[0x10U];
    __Vtemp1121[0x11U] = __Vtemp1119[0x11U];
    __Vtemp1121[0x12U] = __Vtemp1119[0x12U];
    __Vtemp1121[0x13U] = __Vtemp1119[0x13U];
    __Vtemp1121[0x14U] = __Vtemp1119[0x14U];
    __Vtemp1121[0x15U] = __Vtemp1119[0x15U];
    __Vtemp1121[0x16U] = __Vtemp1119[0x16U];
    __Vtemp1121[0x17U] = __Vtemp1119[0x17U];
    __Vtemp1121[0x18U] = __Vtemp1119[0x18U];
    __Vtemp1121[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_xcpt_pf_if) 
                                          << 0x1cU)) 
                          | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_xcpt_ae_if) 
                                             << 0x1bU)) 
                             | __Vtemp1119[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp1122, __Vtemp1121);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0U] 
        = __Vtemp1122[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[1U] 
        = __Vtemp1122[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[2U] 
        = __Vtemp1122[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[3U] 
        = __Vtemp1122[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[4U] 
        = __Vtemp1122[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[5U] 
        = __Vtemp1122[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[6U] 
        = __Vtemp1122[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[7U] 
        = __Vtemp1122[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[8U] 
        = __Vtemp1122[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[9U] 
        = __Vtemp1122[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xaU] 
        = __Vtemp1122[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xbU] 
        = __Vtemp1122[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xcU] 
        = __Vtemp1122[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xdU] 
        = __Vtemp1122[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xeU] 
        = __Vtemp1122[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xfU] 
        = __Vtemp1122[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x10U] 
        = __Vtemp1122[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x11U] 
        = __Vtemp1122[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x12U] 
        = __Vtemp1122[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x13U] 
        = __Vtemp1122[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x14U] 
        = __Vtemp1122[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x15U] 
        = __Vtemp1122[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x16U] 
        = __Vtemp1122[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x17U] 
        = __Vtemp1122[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x18U] 
        = __Vtemp1122[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x19U] 
        = __Vtemp1122[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1aU] 
        = __Vtemp1122[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1bU] 
        = __Vtemp1086[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1cU] 
        = __Vtemp1086[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1dU] 
        = __Vtemp1086[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1eU] 
        = __Vtemp1086[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1fU] 
        = __Vtemp1086[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x20U] 
        = __Vtemp1086[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x21U] 
        = __Vtemp1086[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc) 
                           << 0x1eU)) | __Vtemp1086[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}
