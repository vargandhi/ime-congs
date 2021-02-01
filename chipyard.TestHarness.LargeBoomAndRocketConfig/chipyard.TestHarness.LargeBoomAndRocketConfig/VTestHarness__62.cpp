// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4320(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4320\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_singleStepped 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_io_singleStep) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_38));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore2_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1158) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__advance_pstore1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__load_wb 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_dmem_resp_val;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_dmem_resp_val) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__load_wb_tag 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
                        >> 2U));
    }
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen)
                                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__killm)
                                               ? (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen) 
                                                     >> 1U))
                                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_636))
                                           : (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen) 
                                               >> 1U))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_844) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_waddr 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
                        >> 7U));
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_833) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_waddr 
                = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
                            >> 7U));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_639) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_rd 
                = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
                            >> 7U));
        } else {
            if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_rd 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_rd 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_639) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_single 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut;
        } else {
            if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_single 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_single;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_single 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_single;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_639) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_649;
        } else {
            if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_653) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd 
                = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
                            >> 7U));
        } else {
            if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_rd;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_rd 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_rd;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_653) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_single 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut;
        } else {
            if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_single 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_single;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_single 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_single;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_653) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_649;
        } else {
            if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wen))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_667) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_rd 
                = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_reg_inst 
                            >> 7U));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_667) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_single 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4321(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4321\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_820) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_814) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state 
                    = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                        ? 2U : 0U);
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_793) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_8) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 1U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
                            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_7) {
                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 3U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_7) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 3U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_793) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_8) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 1U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_7) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 3U;
                        }
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_7) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state = 3U;
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_586 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4322(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4322\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_436 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_mask) 
                                >> 1U))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_981) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_mask 
            = ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_cmd))
                ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_mask_xwr));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1165 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_589 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_581) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_589 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_592)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_591)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_589 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_581) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_589 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_592)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_591)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_589 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_581) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_589 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_592)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_591)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4323(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4323\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp703[3];
    WData/*95:0*/ __Vtemp704[3];
    WData/*95:0*/ __Vtemp707[3];
    WData/*95:0*/ __Vtemp708[3];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_589 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_mem_grant_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_589 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_592)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_591)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__Queue__DOT___T_8;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_12 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__load_wb_double)
             ? VL_ULL(0) : VL_ULL(0xffffffff00000000)) 
           | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__load_wb_data);
    __Vtemp703[0U] = 0U;
    __Vtemp703[1U] = 0U;
    __Vtemp703[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp704, __Vtemp703, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp707[0U] = 0U;
    __Vtemp707[1U] = 0U;
    __Vtemp707[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp708, __Vtemp707, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 
        = ((0xffU & ((0x4000U & (__Vtemp704[2U] << 0xeU)) 
                     | (__Vtemp704[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp708[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp708[1U] 
                                           >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_89 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_56) 
                     << 1U) >> (2U | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_56)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1107 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1105) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1105));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4324(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4324\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isNaNAOrB 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__valid_stage0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isInfA 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroA 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                       >> 0x1dU))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_20) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_isNaN));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sign)) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_26)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sign))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_signProd 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48) 
                     ^ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd) 
                        >> 1U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_doSubMags 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53) 
                     ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isInfB 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                     >> 0x1dU)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4325(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4325\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroB 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                                       >> 0x1dU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_8 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_rm;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_rm;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isInfC 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isNaNC 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                        >> 0x1eU)))) 
               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                  >> 0x1dU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_CIsDominant 
            = ((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                              << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                        >> 0x1dU)))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_61));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isSigNaNAny 
            = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
                 & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
                       >> 0x16U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
                                      & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
                                            >> 0x16U)))) 
               | (((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                                  << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                            >> 0x1eU)))) 
                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                      >> 0x1dU)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                       >> 0x16U))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4326(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4326\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp711[3];
    WData/*95:0*/ __Vtemp712[3];
    WData/*95:0*/ __Vtemp715[3];
    WData/*95:0*/ __Vtemp716[3];
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_sExpSum 
            = (0x3ffU & (((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                                         << 3U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 0x1dU)))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_61))
                          ? (0x1ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                                        << 9U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                  >> 0x17U)))
                          : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
                              - (IData)(0xe5U)) - (IData)(0x18U))));
    }
    __Vtemp711[0U] = 0U;
    __Vtemp711[1U] = 0U;
    __Vtemp711[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp712, __Vtemp711, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sExp))));
    __Vtemp715[0U] = 0U;
    __Vtemp715[1U] = 0U;
    __Vtemp715[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp716, __Vtemp715, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sExp))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 
        = ((0xffU & ((0x4000U & (__Vtemp712[2U] << 0xeU)) 
                     | (__Vtemp712[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp716[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp716[1U] 
                                           >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_292 
        = ((IData)(vlTOPp->reset) ? 0U : (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_294)
                                                 ? 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_38))
                                                   ? 
                                                  (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                                                       >> 3U)))
                                                   : 0U)
                                                  : 0U)
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_348))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__NonSyncResetSynchronizerPrimitiveShiftReg_d3__DOT__sync_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__NonSyncResetSynchronizerPrimitiveShiftReg_d3__DOT__sync_1;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_io_csr_stall 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_wfi) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_2407));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4327(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4327\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_645 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_643));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x303U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mideleg 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_785 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_783) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_783));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__invalidated 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__refill_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___GEN_43));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4328(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4328\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb__DOT___T 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_mem_req_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_54 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_37)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1166 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1164) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1164));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1107 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1105) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1105));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1107 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1105) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1105));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_4 
        = (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_2 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
                     >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeOff))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__probe_bits_address 
            = ((0xfffff000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line)
                                 ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                            >> 0xcU))
                                 : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_771) 
                               << 0xcU)) | (0xfc0U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                                        >> 6U)) 
                                               << 6U)));
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_17) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__probe_bits_address 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address___05FT_15_data;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4329(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4329\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__s1_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__s0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__arb_io_out_bits_valid));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_196) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[1U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[1U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[2U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[2U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[3U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[3U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[3U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[4U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[4U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[4U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[5U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[5U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[5U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[6U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[6U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[6U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[7U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[7U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[7U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[8U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[8U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[8U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[9U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[9U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[9U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xaU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xaU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xaU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xbU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xbU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xbU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xcU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xcU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xcU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xdU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xdU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xdU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xeU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xeU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xeU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0xfU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0xfU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0xfU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x10U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x10U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x10U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x11U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x11U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x11U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x12U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x12U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x12U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x13U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x13U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x13U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x14U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x14U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x14U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x15U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x15U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x15U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x16U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x16U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x16U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x17U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x17U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x17U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x18U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x18U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x18U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x19U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x19U]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x19U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1aU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1aU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1aU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1bU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1bU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1bU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1cU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1cU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1cU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1dU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1dU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1dU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1eU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1eU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1eU]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__g[0x1fU] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_209[0x1fU]
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_211[0x1fU]);
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[2U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[3U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[4U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[5U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[6U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[7U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[8U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[9U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xaU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xbU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xcU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xdU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xeU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xfU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x10U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x11U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x12U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x13U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x14U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x15U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x16U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x17U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x18U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x19U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1aU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1bU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1cU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1dU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1eU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1fU] = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_234) 
             & VL_REDXOR_64(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[1U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[2U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[3U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[4U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[5U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[6U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[7U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[8U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[9U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xaU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xbU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xcU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xdU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xeU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xfU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x10U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x11U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x12U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x13U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x14U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x15U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x16U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x17U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x18U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x19U] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1aU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1bU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1cU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1dU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1eU] = 0U;
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1fU] = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_sfence_valid) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[1U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[1U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[1U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[2U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[2U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[2U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[3U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[3U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[3U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[4U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[4U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[4U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[5U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[5U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[5U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[6U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[6U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[6U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[7U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[7U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[7U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[8U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[8U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[8U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[9U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[9U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[9U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xaU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0xaU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xaU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xbU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0xbU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xbU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xcU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0xcU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xcU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xdU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0xdU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xdU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xeU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0xeU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xeU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xfU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0xfU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0xfU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x10U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x10U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x10U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x11U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x11U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x11U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x12U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x12U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x12U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x13U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x13U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x13U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x14U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x14U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x14U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x15U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x15U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x15U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x16U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x16U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x16U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x17U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x17U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x17U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x18U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x18U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x18U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x19U] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x19U]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x19U]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1aU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x1aU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1aU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1bU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x1bU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1bU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1cU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x1cU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1cU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1dU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x1dU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1dU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1eU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x1eU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1eU]
                            : 0U));
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1fU] 
                    = ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_216[0x1fU]
                        : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_217[0x1fU]
                            : 0U));
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_196) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[1U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[1U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[2U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[2U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[3U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[3U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[4U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[4U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[5U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[5U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[6U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[6U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[7U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[7U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[8U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[8U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[9U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[9U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xaU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xaU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xbU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xbU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xcU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xcU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xdU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xdU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xeU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xeU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0xfU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0xfU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x10U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x10U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x11U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x11U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x12U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x12U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x13U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x13U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x14U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x14U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x15U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x15U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x16U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x16U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x17U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x17U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x18U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x18U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x19U] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x19U];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1aU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1aU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1bU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1bU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1cU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1cU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1dU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1dU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1eU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1eU];
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid_1[0x1fU] 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_208[0x1fU];
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_55) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__arb_io_out_bits_bits_addr;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__l2_tlb_ram_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__l2_refill)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__l2_tlb_ram__DOT__l2_tlb_ram_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__l2_tlb_ram_RW0_addr;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_246 
        = ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__ram_index
                  [0U] >> 5U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__ram_index
                                        [0U] >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT___T_786 
        = ((0x10U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_index
                     [0U] >> 0xeU)) | ((8U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_index
                                              [0U] 
                                              >> 7U)) 
                                       | ((4U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_index
                                                 [0U] 
                                                 >> 7U)) 
                                          | (3U & (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_index
                                                   [0U] 
                                                   >> 4U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4330(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4330\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_716 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_size
           [0U] == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__ram_extra_tlrr_extra_size
           [0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawA_S_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawA_S_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1669 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_3) 
             << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_2) 
                        << 6U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_1) 
                                  << 5U))) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_0) 
                                               << 4U) 
                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_meta_write_way)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1669 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_3) 
             << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_2) 
                        << 6U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_1) 
                                  << 5U))) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_0) 
                                               << 4U) 
                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_meta_write_way)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T_1)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_943) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_955)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_954));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4331(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4331\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__s1_valid) 
         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__refill_valid) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__s2_miss))))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__refill_paddr 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT___T_8;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_sink___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1];
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_8;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_70 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_43));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_785 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_783) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_783));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4332(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4332\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_92 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full)) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_92 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_97;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_47) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_2))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_4 
                    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                             [0U] >> 3U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_8;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_resp_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__s2_hit));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_4 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_valid 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_replay)) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_redirect)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_7 
        = (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__lists) 
                                   | (VL_ULL(0xfffffffffe) 
                                      & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__lists) 
                                         << 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4333(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4333\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp725[3];
    WData/*95:0*/ __Vtemp726[3];
    WData/*95:0*/ __Vtemp729[3];
    WData/*95:0*/ __Vtemp730[3];
    WData/*95:0*/ __Vtemp733[3];
    WData/*95:0*/ __Vtemp734[3];
    WData/*95:0*/ __Vtemp737[3];
    WData/*95:0*/ __Vtemp738[3];
    WData/*95:0*/ __Vtemp741[3];
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U];
    }
    __Vtemp725[0U] = 0U;
    __Vtemp725[1U] = 0U;
    __Vtemp725[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp726, __Vtemp725, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp729[0U] = 0U;
    __Vtemp729[1U] = 0U;
    __Vtemp729[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp730, __Vtemp729, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
        = ((0xffU & ((0x800U & (__Vtemp726[2U] << 0xbU)) 
                     | (__Vtemp726[1U] >> 0x15U))) 
           | (0xff00U & ((0x8000000U & (__Vtemp730[2U] 
                                        << 0x1bU)) 
                         | (0x7ffff00U & (__Vtemp730[1U] 
                                          >> 5U)))));
    __Vtemp733[0U] = 0U;
    __Vtemp733[1U] = 0U;
    __Vtemp733[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp734, __Vtemp733, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp737[0U] = 0U;
    __Vtemp737[1U] = 0U;
    __Vtemp737[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp738, __Vtemp737, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
        = ((0xffffU & ((__Vtemp734[1U] << 3U) | (__Vtemp734[0U] 
                                                 >> 0x1dU))) 
           | (0xffff0000U & (__Vtemp738[0U] << 3U)));
    VL_SHIFTR_WWI(84,84,8, __Vtemp741, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT__inflight_opcodes, 
                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                   [0U] << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_803[0U] 
        = __Vtemp741[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_803[1U] 
        = __Vtemp741[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_803[2U] 
        = (0xfffffU & __Vtemp741[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8 
        = ((6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                           [0U]) ? 2U : ((4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                          [0U]) ? 1U
                                          : ((3U == 
                                              vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((2U == 
                                               vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : 0U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4334(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4334\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_8;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_sink___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_428 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_422 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_398 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_386 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4335(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4335\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_392 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_404 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_410 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_416 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_tag 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4336(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4336\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp743[4];
    WData/*127:0*/ __Vtemp744[4];
    WData/*127:0*/ __Vtemp745[4];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret) {
            if ((0x20000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
                if ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug 
                                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_38;
                        }
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_38;
                    }
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp743, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv 
                    = (1U & (__Vtemp743[0U] >> 0x11U));
            }
        }
    }
    VL_EXTEND_WQ(103,64, __Vtemp744, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp745, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                ? (
                                                   (0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                        >> 0x14U)))
                                                    ? 
                                                   (1U 
                                                    & (__Vtemp744[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x14U)))
                                                     ? 
                                                    (1U 
                                                     & (__Vtemp745[0U] 
                                                        >> 8U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_110)))
                                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_110))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4337(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4337\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vtask_memory_tick__2__ar_ready;
    CData/*0:0*/ __Vtask_memory_tick__2__aw_ready;
    CData/*0:0*/ __Vtask_memory_tick__2__w_ready;
    CData/*0:0*/ __Vtask_memory_tick__2__r_valid;
    CData/*0:0*/ __Vtask_memory_tick__2__r_last;
    CData/*0:0*/ __Vtask_memory_tick__2__b_valid;
    IData/*31:0*/ __Vtask_memory_tick__2__r_id;
    IData/*31:0*/ __Vtask_memory_tick__2__r_resp;
    IData/*31:0*/ __Vtask_memory_tick__2__b_id;
    IData/*31:0*/ __Vtask_memory_tick__2__b_resp;
    QData/*63:0*/ __Vfunc_memory_init__1__Vfuncout;
    QData/*63:0*/ __Vtask_memory_tick__2__r_data;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_satp_mode) 
             >> 3U) & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1196))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_passthrough)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_820) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_821) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_6_0_data 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_15_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_8;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Far_ready = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Faw_ready = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fw_ready = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Far_ready_reg = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Faw_ready_reg = 0U;
        vlTOPp->__Vdly__TestHarness__DOT__SimDRAM__DOT_____05Fw_ready_reg = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid_reg = 0U;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT__initialized)))) {
            vlSymsp->TOP____024unit.__Vdpiimwrap_memory_init_TOP____024unit(VL_ULL(0x10000000), VL_ULL(8), VL_ULL(0x40), VL_ULL(4), __Vfunc_memory_init__1__Vfuncout);
            vlTOPp->TestHarness__DOT__SimDRAM__DOT__channel 
                = __Vfunc_memory_init__1__Vfuncout;
            vlTOPp->TestHarness__DOT__SimDRAM__DOT__initialized = 1U;
        }
        vlSymsp->TOP____024unit.__Vdpiimwrap_memory_tick_TOP____024unit(vlTOPp->TestHarness__DOT__SimDRAM__DOT__channel, (IData)(vlTOPp->reset), 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_ar_valid) 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_15)), __Vtask_memory_tick__2__ar_ready, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_addr, 
                                                                        (0xfU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)), (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_size), vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_len, 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_aw_valid) 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_95)), __Vtask_memory_tick__2__aw_ready, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_addr, 
                                                                        (0xfU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)), (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_size), vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_len, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid), __Vtask_memory_tick__2__w_ready, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_bits_strb), vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_bits_data, 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
                                                                          ? 
                                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last
                                                                         [0U]
                                                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_bits_last)), __Vtask_memory_tick__2__r_valid, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_d_ready), __Vtask_memory_tick__2__r_id, __Vtask_memory_tick__2__r_resp, __Vtask_memory_tick__2__r_data, __Vtask_memory_tick__2__r_last, __Vtask_memory_tick__2__b_valid, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_out_b_ready), __Vtask_memory_tick__2__b_id, __Vtask_memory_tick__2__b_resp);
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Far_ready 
            = __Vtask_memory_tick__2__ar_ready;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Faw_ready 
            = __Vtask_memory_tick__2__aw_ready;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fw_ready 
            = __Vtask_memory_tick__2__w_ready;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid 
            = __Vtask_memory_tick__2__r_valid;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id 
            = __Vtask_memory_tick__2__r_id;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_resp 
            = __Vtask_memory_tick__2__r_resp;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_data 
            = __Vtask_memory_tick__2__r_data;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last 
            = __Vtask_memory_tick__2__r_last;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid 
            = __Vtask_memory_tick__2__b_valid;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id 
            = __Vtask_memory_tick__2__b_id;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_resp 
            = __Vtask_memory_tick__2__b_resp;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Far_ready_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Far_ready;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Faw_ready_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Faw_ready;
        vlTOPp->__Vdly__TestHarness__DOT__SimDRAM__DOT_____05Fw_ready_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fw_ready;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg 
            = (0xfU & vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id);
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_resp_reg 
            = (3U & vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_resp);
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_data_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_data;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid_reg 
            = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid;
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg 
            = (0xfU & vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id);
        vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_resp_reg 
            = (3U & vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4338(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4338\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_92 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full)) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_92 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_97;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_47) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_2))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_4 
                    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                             [0U] >> 3U));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_203 
        = ((IData)(vlTOPp->reset) ? 0U : (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_205)
                                                 ? 
                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_27)
                                                   ? 
                                                  (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                                                       >> 3U)))
                                                   : 0U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_218)
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_0))
                                                      ? 0U
                                                      : 
                                                     (~ 
                                                      (0x3ffU 
                                                       & (((IData)(0x3fU) 
                                                           << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                                          >> 3U))))
                                                     : 0U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_244))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4339(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4339\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*1343:0*/ __Vtemp746[42];
    IData/*31:0*/ __Vilp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_speculative = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_speculative 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_speculative;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_custom_0 = VL_ULL(0x208);
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7c1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_4137;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT___T_8;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1107 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1105) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1105));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_714 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_source
           [0U] == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__ram_extra_tlrr_extra_source
           [0U]);
    VL_SHIFTR_WWI(1344,1344,12, __Vtemp746, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT__inflight_opcodes, 
                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__ram_extra_tlrr_extra_source
                   [0U] << 2U));
    __Vilp = 0U;
    while ((__Vilp <= 0x29U)) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_654[__Vilp] 
            = __Vtemp746[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4340(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4340\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[0U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[1U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[2U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[3U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[4U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[5U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[6U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_data[7U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[1U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[2U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT___T_201 
        = (1U & ((~ (((0x1fU & ((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__enq_ptr))) 
                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__bpd_ptr)) 
                     | ((0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__enq_ptr))) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__bpd_ptr)))) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__do_commit_update)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_data[0U] 
        = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_519);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_data[1U] 
        = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_519 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_data[2U] 
        = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_537);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_data[3U] 
        = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_537 
                   >> 0x20U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_tag 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_mem_req_valid)
                ? 0U : (0x7fU & (1U | ((0x7cU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_inst 
                                                 >> 5U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_fp) 
                                          << 1U)))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3554) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_tag;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3631) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantIsCached) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_408) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_signed 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_signed;
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantIsUncached) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_signed 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_signed;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_408) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_signed 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_signed;
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_408) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_signed 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_signed;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_408) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_signed 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_signed;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4341(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4341\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_212 
        = ((0xffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                             >> 0x11U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_107 
        = ((0xfffff0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 4U)) | (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                            >> 0x14U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_142 
        = ((0xffffe0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 5U)) | (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                             >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_177 
        = ((0xffffc0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 6U)) | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                             >> 0x12U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_37 
        = ((0xfffffcU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 2U)) | (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                          >> 0x16U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_72 
        = ((0xfffff8U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 3U)) | (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                          >> 0x15U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2 
        = ((0xfffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                         << 1U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail 
                                          >> 0x17U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_2309 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_7
            [0U] << 7U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_6
                            [0U] << 6U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_5
                                            [0U] << 5U) 
                                           | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_4
                                               [0U] 
                                               << 4U) 
                                              | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_3
                                                  [0U] 
                                                  << 3U) 
                                                 | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_2
                                                     [0U] 
                                                     << 2U) 
                                                    | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_1
                                                        [0U] 
                                                        << 1U) 
                                                       | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_0
                                                       [0U])))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4342(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4342\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp754[3];
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp754, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                 [0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[0U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_taken
           [0U] ? (1U | (0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                                [0U]) 
                                        << 1U))) : 
           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_not_taken
            [0U] ? (0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                           [0U]) << 1U))
             : __Vtemp754[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[1U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_taken
           [0U] ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                  [0U]) >> 0x1fU)) 
                   | (0xfffffffeU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                              [0U] 
                                              >> 0x20U)) 
                                     << 1U))) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_not_taken
                                                 [0U]
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(
                                                              vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                                              [0U]) 
                                                      >> 0x1fU)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                                                 [0U] 
                                                                 >> 0x20U)) 
                                                        << 1U)))
                                                  : 
                                                 __Vtemp754[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[2U] 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_taken
           [0U] ? (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                  [0U] >> 0x20U)) >> 0x1fU))
            : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_not_taken
               [0U] ? (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
                                      [0U] >> 0x20U)) 
                             >> 0x1fU)) : __Vtemp754[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT___T_1];
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3554) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_size 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_15_data[0U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_15_data[1U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_15_data[2U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_15_data[3U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1][3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1];
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA_io_a_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61 
                = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__first)
                          ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
                                                   >> 4U))))
                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_63)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_924 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_921));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4343(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4343\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_923 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_921) 
                     - (IData)(1U)));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rvc 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_xcpt)
                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109)) 
                   | (3U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))
                : (3U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1];
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_8;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3554) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_addr 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_965) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscAddr 
            = (VL_ULL(0x3ffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                      >> 6U));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_428 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_422 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_398 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_386 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_392 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4344(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4344\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_404 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_410 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_size;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_416 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((0U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((1U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_1 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((2U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_2 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097))) {
                    if ((3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_data_3 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_tag 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_tag 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4345(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4345\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3325 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                      >> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1139 
        = ((0x800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                         << 0x10U)) | ((0x400000U & 
                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                         << 0xfU)) 
                                       | ((0x200000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                               << 0xeU) 
                                              & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                 << 0x15U))) 
                                          | ((0x100000U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                 << 0xeU)) 
                                             | ((0x80000U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                    << 0xdU)) 
                                                | ((0x40000U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                        << 0xcU) 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                          << 0x12U))) 
                                                   | (((0x20000U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                           << 0xcU)) 
                                                       | ((0x10000U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                              << 0xbU)) 
                                                          | ((0x8000U 
                                                              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                  << 0xaU) 
                                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                                    << 0xfU))) 
                                                             | ((0x4000U 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                    << 0xaU)) 
                                                                | ((0x2000U 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                       << 9U)) 
                                                                   | (0x1000U 
                                                                      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                          << 8U) 
                                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                                            << 0xcU)))))))) 
                                                      | ((0x800U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                             << 8U)) 
                                                         | ((0x400U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                << 7U)) 
                                                            | ((0x200U 
                                                                & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                    << 6U) 
                                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                                      << 9U))) 
                                                               | ((0x100U 
                                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                      << 6U)) 
                                                                  | ((0x80U 
                                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                         << 5U)) 
                                                                     | ((0x40U 
                                                                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                             << 4U) 
                                                                            & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                                               << 6U))) 
                                                                        | ((0x20U 
                                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                               << 4U)) 
                                                                           | ((0x10U 
                                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                                << 3U)) 
                                                                              | ((8U 
                                                                                & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full)) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__head) 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__maybe_full))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4346(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4346\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_update___05Fbits_br_mask 
        = (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_139));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_update___05Fbits_br_mask 
        = (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_140));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_471 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                  >> 0x10U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4347(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4347\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_502 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                  >> 0x30U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4348(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4348\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_456 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4349(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4349\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_487 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                  >> 0x20U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4350(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4350\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_probe) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_973) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount = 3U;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_957) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_972;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_965) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__lrscCount 
                            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_hit)
                                ? 0x4fU : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_probe 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_probe));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_probe) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_probe_state_state 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_meta_hit_state_state;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_probe) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_probe_way 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_meta_hit_way;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_668 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4351(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4351\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_518 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_mask) 
                                >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_766 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_769 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_772 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_759 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_762 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4352(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4352\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_820 
        = ((IData)(vlTOPp->reset) ? 0U : (0x1ffU & 
                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_822)
                                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_835)
                                                ? (
                                                   (4U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (0xffffffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                                                        >> 3U))))
                                                : 0U)
                                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_861))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_399)
                                           ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_438)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_196)
                                                 : 0U) 
                                               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_439)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_204)
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_440)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_212)
                                                  : 0U))
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_475)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1663_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_3_predicted_pc_valid;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1663_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_3_predicted_pc_valid;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_939) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_933) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state 
                    = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                        ? 2U : 0U);
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_912) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_8) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 1U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_904) {
                            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_7) {
                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 3U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_904) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_7) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 3U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_912) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_8) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 1U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_904) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_7) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 3U;
                        }
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_904) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_7) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state = 3U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4353(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4353\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp763[7];
    WData/*255:0*/ __Vtemp764[8];
    WData/*159:0*/ __Vtemp767[5];
    WData/*159:0*/ __Vtemp768[5];
    WData/*95:0*/ __Vtemp776[3];
    WData/*127:0*/ __Vtemp777[4];
    WData/*159:0*/ __Vtemp779[5];
    WData/*159:0*/ __Vtemp786[5];
    WData/*159:0*/ __Vtemp787[5];
    WData/*223:0*/ __Vtemp790[7];
    WData/*831:0*/ __Vtemp796[26];
    WData/*831:0*/ __Vtemp797[26];
    WData/*831:0*/ __Vtemp799[26];
    WData/*863:0*/ __Vtemp800[27];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__wrap_1 
        = (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_7 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)));
    __Vtemp763[0U] = 0U;
    __Vtemp763[1U] = 0U;
    __Vtemp763[2U] = 0U;
    __Vtemp763[3U] = 0U;
    __Vtemp763[4U] = 0U;
    __Vtemp763[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_taken) 
                                        << 0x11U)));
    __Vtemp763[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp764, __Vtemp763);
    __Vtemp767[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_pc) 
                                     << 0x19U));
    __Vtemp767[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp767[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp767[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp767[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp768, __Vtemp767);
    __Vtemp776[0U] = 0U;
    __Vtemp776[1U] = 0U;
    __Vtemp776[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp777, __Vtemp776);
    VL_EXTEND_WI(134,1, __Vtemp779, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_xcpt_pf_if));
    __Vtemp786[0U] = 0U;
    __Vtemp786[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_debug_pc) 
                                     << 8U));
    __Vtemp786[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp786[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_debug_inst 
                                   >> 0xfU)));
    __Vtemp786[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp787, __Vtemp786);
    VL_EXTEND_WQ(221,55, __Vtemp790, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp796[0U] = __Vtemp790[0U];
    __Vtemp796[1U] = __Vtemp790[1U];
    __Vtemp796[2U] = __Vtemp790[2U];
    __Vtemp796[3U] = __Vtemp790[3U];
    __Vtemp796[4U] = __Vtemp790[4U];
    __Vtemp796[5U] = __Vtemp790[5U];
    __Vtemp796[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_taken) 
                                       << 0x1dU)) | 
                       __Vtemp790[6U]));
    __Vtemp796[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_pc_lob) 
                                          >> 2U)))));
    __Vtemp796[8U] = ((0xfffffffcU & (__Vtemp787[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_15_is_sfb) 
                                                    >> 2U)));
    __Vtemp796[9U] = ((3U & (__Vtemp787[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp787[1U] 
                                        << 2U)));
    __Vtemp796[0xaU] = ((3U & (__Vtemp787[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp787[2U] 
                                          << 2U)));
    __Vtemp796[0xbU] = ((3U & (__Vtemp787[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp787[3U] 
                                          << 2U)));
    __Vtemp796[0xcU] = ((3U & (__Vtemp787[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp787[4U] 
                                          << 2U)));
    __Vtemp796[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp787[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp779[0U] 
                                          << 2U)));
    __Vtemp796[0xeU] = ((3U & (__Vtemp779[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp779[1U] 
                                          << 2U)));
    __Vtemp796[0xfU] = ((3U & (__Vtemp779[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp779[2U] 
                                          << 2U)));
    __Vtemp796[0x10U] = ((3U & (__Vtemp779[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp779[3U] 
                                           << 2U)));
    __Vtemp796[0x11U] = ((0xffffff00U & (__Vtemp777[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp779[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp779[4U] 
                                            << 2U))));
    __Vtemp796[0x12U] = ((0xffU & (__Vtemp777[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp777[1U] 
                                           << 8U)));
    __Vtemp796[0x13U] = ((0xffU & (__Vtemp777[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp777[2U] 
                                           << 8U)));
    __Vtemp796[0x14U] = ((0xffU & (__Vtemp777[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp777[3U] 
                                              << 8U))));
    __Vtemp796[0x15U] = ((0xfffff800U & (__Vtemp768[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp777[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_16_is_sfb) 
                                            >> 8U))));
    __Vtemp796[0x16U] = ((0x7ffU & (__Vtemp768[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp768[1U] 
                                                     << 0xbU)));
    __Vtemp796[0x17U] = ((0x7ffU & (__Vtemp768[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp768[2U] 
                                                     << 0xbU)));
    __Vtemp796[0x18U] = ((0x7ffU & (__Vtemp768[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp768[3U] 
                                                     << 0xbU)));
    __Vtemp796[0x19U] = ((0x7ffU & (__Vtemp768[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp768[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp797, __Vtemp796);
    __Vtemp799[0U] = __Vtemp797[0U];
    __Vtemp799[1U] = __Vtemp797[1U];
    __Vtemp799[2U] = __Vtemp797[2U];
    __Vtemp799[3U] = __Vtemp797[3U];
    __Vtemp799[4U] = __Vtemp797[4U];
    __Vtemp799[5U] = __Vtemp797[5U];
    __Vtemp799[6U] = __Vtemp797[6U];
    __Vtemp799[7U] = __Vtemp797[7U];
    __Vtemp799[8U] = __Vtemp797[8U];
    __Vtemp799[9U] = __Vtemp797[9U];
    __Vtemp799[0xaU] = __Vtemp797[0xaU];
    __Vtemp799[0xbU] = __Vtemp797[0xbU];
    __Vtemp799[0xcU] = __Vtemp797[0xcU];
    __Vtemp799[0xdU] = __Vtemp797[0xdU];
    __Vtemp799[0xeU] = __Vtemp797[0xeU];
    __Vtemp799[0xfU] = __Vtemp797[0xfU];
    __Vtemp799[0x10U] = __Vtemp797[0x10U];
    __Vtemp799[0x11U] = __Vtemp797[0x11U];
    __Vtemp799[0x12U] = __Vtemp797[0x12U];
    __Vtemp799[0x13U] = __Vtemp797[0x13U];
    __Vtemp799[0x14U] = __Vtemp797[0x14U];
    __Vtemp799[0x15U] = __Vtemp797[0x15U];
    __Vtemp799[0x16U] = __Vtemp797[0x16U];
    __Vtemp799[0x17U] = __Vtemp797[0x17U];
    __Vtemp799[0x18U] = __Vtemp797[0x18U];
    __Vtemp799[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp797[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp800, __Vtemp799);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0U] 
        = __Vtemp800[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[1U] 
        = __Vtemp800[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[2U] 
        = __Vtemp800[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[3U] 
        = __Vtemp800[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[4U] 
        = __Vtemp800[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[5U] 
        = __Vtemp800[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[6U] 
        = __Vtemp800[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[7U] 
        = __Vtemp800[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[8U] 
        = __Vtemp800[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[9U] 
        = __Vtemp800[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0xaU] 
        = __Vtemp800[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0xbU] 
        = __Vtemp800[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0xcU] 
        = __Vtemp800[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0xdU] 
        = __Vtemp800[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0xeU] 
        = __Vtemp800[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0xfU] 
        = __Vtemp800[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x10U] 
        = __Vtemp800[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x11U] 
        = __Vtemp800[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x12U] 
        = __Vtemp800[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x13U] 
        = __Vtemp800[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x14U] 
        = __Vtemp800[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x15U] 
        = __Vtemp800[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x16U] 
        = __Vtemp800[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x17U] 
        = __Vtemp800[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x18U] 
        = __Vtemp800[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x19U] 
        = __Vtemp800[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x1aU] 
        = __Vtemp800[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x1bU] 
        = __Vtemp764[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x1cU] 
        = __Vtemp764[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x1dU] 
        = __Vtemp764[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x1eU] 
        = __Vtemp764[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x1fU] 
        = __Vtemp764[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x20U] 
        = __Vtemp764[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x21U] 
        = __Vtemp764[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_pc) 
                           << 0x1eU)) | __Vtemp764[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2592[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_17_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}
