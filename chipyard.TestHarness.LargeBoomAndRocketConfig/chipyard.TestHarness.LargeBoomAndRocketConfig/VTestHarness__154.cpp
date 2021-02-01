// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8899(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8899\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_284 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_48 
                       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_311 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_311 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_237) 
                      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_244) 
                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_51) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                    << 2U)))))))))) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_41) 
                     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_48) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                   << 2U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_480 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_244 
                       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_302 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_302 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_433) 
                      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_440) 
                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_51) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                    << 2U)))))))))) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_237) 
                     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_244) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8900(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8900\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_676 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_440 
                       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_293 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_293 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_629) 
                      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_636) 
                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_51) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                    << 2U)))))))))) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_433) 
                     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_440) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                   << 2U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_872 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_636 
                       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_284 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_284 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_825) 
                      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_832) 
                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_51) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                    << 2U)))))))))) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_629) 
                     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_636) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8901(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8901\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1068 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_832 
                       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_275 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_275 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1021) 
                      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1028) 
                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_51) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                    << 2U)))))))))) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_825) 
                     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_832) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                   << 2U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1264 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1028 
                       & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_266 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_266 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1217) 
                      | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1224) 
                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_51) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                    << 2U)))))))))) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1021) 
                     | ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1028) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8902(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8902\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_238 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__legal_address_0) 
           & ((((VL_ULL(0) == (VL_ULL(0x82010000) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                | (VL_ULL(0) == (VL_ULL(0x86000000) 
                                 & (VL_ULL(0x2000000) 
                                    ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))) 
               | (VL_ULL(0) == (VL_ULL(0x84000000) 
                                & (VL_ULL(0x4000000) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))) 
              | (VL_ULL(0) == (VL_ULL(0x80000000) & 
                               (VL_ULL(0x80000000) 
                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_eff_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__legal_address_0) 
           & ((((VL_ULL(0) == (VL_ULL(0x86012000) & 
                               (VL_ULL(0x2010000) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0))) 
                | (VL_ULL(0) == (VL_ULL(0x82012000) 
                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0))) 
               | (VL_ULL(0) == (VL_ULL(0x84000000) 
                                & (VL_ULL(0x4000000) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))) 
              | (VL_ULL(0) == (VL_ULL(0x86010000) & 
                               (VL_ULL(0x2000000) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cacheable_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__legal_address_0) 
           & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1722 
        = (0xfU & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1713))
                    ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1668) 
                                   << 1U)))) : (2U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1668) 
                                                   << 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8903(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8903\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1681 
        = (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1675) 
                                  >> 2U)))) << 1U) 
           | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1675) 
                     >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1675) 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_885 
        = (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_882 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_6)
                 ? ((0xc0000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                          >> 0x20U)) 
                                 << 0x12U)) | ((0x3fe00U 
                                                & (((1U 
                                                     > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_level))
                                                     ? 
                                                    (0xfffffe00U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                                                >> 0xcU)))
                                                     : 0U) 
                                                   | (0xffe00U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                                 >> 0xeU))))) 
                                               | (0x1ffU 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                                              >> 0xcU)) 
                                                     | (0xfffffU 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                                   >> 0xeU)))))))
                 : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_7)
                            ? ((0xc0000U & ((IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                     >> 0x20U)) 
                                            << 0x12U)) 
                               | ((0x3fe00U & (((1U 
                                                 > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_level))
                                                 ? 
                                                (0xfffffe00U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                                            >> 0xcU)))
                                                 : 0U) 
                                               | (0xffe00U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                             >> 0xeU))))) 
                                  | (0x1ffU & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                                        >> 0xcU)) 
                                               | (0xfffffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                             >> 0xeU)))))))
                            : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_8)
                                       ? ((0xc0000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                       >> 0x20U)) 
                                              << 0x12U)) 
                                          | ((0x3fe00U 
                                              & ((0xfffffe00U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_29) 
                                                 | (0xffe00U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                               >> 0xeU))))) 
                                             | (0x1ffU 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_35 
                                                   | (0xfffffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                                 >> 0xeU)))))))
                                       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8904(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8904\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_resp_0_pf_st 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__bad_va_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cmd_write_0)) 
           | (0U != (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cmd_write_0)
                       ? (~ (0x200U | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__priv_rw_ok_0) 
                                        & ((0x100U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                        >> 0xaU)) 
                                               << 8U)) 
                                           | ((0x80U 
                                               & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                           >> 0xaU)) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                              >> 0xaU)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_1_data_0 
                                                                 >> 0xaU)) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & ((IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_0_data_0 
                                                                    >> 0xaU)) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & ((IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_31 
                                                                       >> 0xaU)) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_27 
                                                                          >> 0xaU)) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_23 
                                                                             >> 0xaU)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_19 
                                                                              >> 0xaU)))))))))))) 
                                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__ptw_ae_array_0))))
                       : 0U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hits_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__tlb_miss_0 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__bad_va_0))) 
           & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1740 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1749 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 2U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1763 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 4U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                            >> 5U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8905(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8905\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp10259[4];
    WData/*127:0*/ __Vtemp10260[4];
    WData/*95:0*/ __Vtemp10262[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1775 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 7U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                            >> 8U)));
    VL_EXTEND_WQ(115,52, __Vtemp10259, (VL_ULL(0xfffffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])))));
    VL_SHIFTL_WWI(115,115,6, __Vtemp10260, __Vtemp10259, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_118));
    __Vtemp10262[0U] = (IData)((((QData)((IData)((7U 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_128)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_127) 
                                                       >> 9U)) 
                                                     | ((3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_127) 
                                                             >> 0xaU))) 
                                                        & (VL_ULL(0) 
                                                           != 
                                                           (VL_ULL(0xfffffffffffff) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])))))))))) 
                                 << 0x3dU) | (((QData)((IData)(
                                                               (0x1ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_127)))) 
                                               << 0x34U) 
                                              | (VL_ULL(0xfffffffffffff) 
                                                 & ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                                                            >> 0x14U))))
                                                     ? 
                                                    (VL_ULL(0xffffffffffffe) 
                                                     & (((QData)((IData)(
                                                                         __Vtemp10260[1U])) 
                                                         << 0x21U) 
                                                        | ((QData)((IData)(
                                                                           __Vtemp10260[0U])) 
                                                           << 1U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U]))))))));
    __Vtemp10262[1U] = (IData)(((((QData)((IData)((7U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_128)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_127) 
                                                        >> 9U)) 
                                                      | ((3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_127) 
                                                              >> 0xaU))) 
                                                         & (VL_ULL(0) 
                                                            != 
                                                            (VL_ULL(0xfffffffffffff) 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])))))))))) 
                                  << 0x3dU) | (((QData)((IData)(
                                                                (0x1ffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_127)))) 
                                                << 0x34U) 
                                               | (VL_ULL(0xfffffffffffff) 
                                                  & ((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[2U] 
                                                           << 0xcU) 
                                                          | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                                                             >> 0x14U))))
                                                      ? 
                                                     (VL_ULL(0xffffffffffffe) 
                                                      & (((QData)((IData)(
                                                                          __Vtemp10260[1U])) 
                                                          << 0x21U) 
                                                         | ((QData)((IData)(
                                                                            __Vtemp10260[0U])) 
                                                            << 1U)))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U]))))))) 
                                >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_149[0U] 
        = __Vtemp10262[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_149[1U] 
        = __Vtemp10262[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_149[2U] 
        = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                 >> 0x1fU));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8906(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8906\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_18)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_18)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2_poisoned));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8907(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8907\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_30)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1_poisoned));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8908(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8908\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_30)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_prs3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8909\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p2_poisoned));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8910\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_32)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_30)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p1_poisoned));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8911(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8911\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_32)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_30)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_32)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_32)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66818)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66818)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66818)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2706)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66818))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66818)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66818))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8912\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66794))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66795))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66796))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66797))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8913\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66798))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66799))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66800))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66801))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8914(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8914\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66802))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66803))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66804))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66805))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8915(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8915\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66806))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66807))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66808))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66809))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8916(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8916\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66810))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66811))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66812))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66813))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8917(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8917\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66814))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66815))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66816))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66817))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8918(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8918\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66819)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2672)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66819)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2687)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2692)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66819)
                        : ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2703)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66819))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66819)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66819))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__ppred))))));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_mem_size 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_50)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_mem_size)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_48)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_mem_size)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_size)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_pdst)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8919(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8919\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_out_uop_uopc 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_916)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uopc)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_9)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_5)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_11)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__p1)
                            ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uopc)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uopc))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_out_uop_iw_state 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_105))
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_916)
                     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_9)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_11)
                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__state)
                                  : 0U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_5)
                                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_11)
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__state)
                                                : 1U)
                                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__state)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_out_uop_lrs1_rtype 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_916)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs1_rtype)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_9)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_5)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_11)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs1_rtype)
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__p1)
                            ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs1_rtype)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_out_uop_lrs2_rtype 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_916)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs2_rtype)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_9)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_5)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___T_11)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs2_rtype)
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__p1)
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs2_rtype)
                            : 2U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_out_uop_uopc 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_uopc)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___T_9)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___T_5)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p1)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_uopc))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_uopc))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_out_uop_iw_state 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___T_75))
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)
                     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___T_9)
                              ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___T_5)
                                       ? 1U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__state)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8920(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8920\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_grant) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_will_be_valid 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__state)) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_grant) 
                 & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__state)) 
                    | ((((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__state)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p1)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p2)) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__ppred))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_874 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__state))
             ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT___T_88) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p3)) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__ppred)) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)))
             : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__state)) 
                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p1) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p2)) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__ppred)) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163))))) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_fp_val)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8921(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8921\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_uses_ldq)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_455 
        = ((0x1c7U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 3U))) ? VL_ULL(0)
            : ((0x1c6U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 3U))) ? VL_ULL(0)
                : ((0x1c5U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 3U))) ? VL_ULL(0)
                    : ((0x1c4U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                        ? VL_ULL(0) : ((0x1c3U == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x1c2U 
                                            == (0x1ffU 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x1c1U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x1c0U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x1bfU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x1beU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x1bdU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0x1bcU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0x1bbU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_442)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8922(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8922\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_ldst_val 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_ldst_val)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_ldst_val)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_ldst_val)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_bypassable 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_bypassable)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_bypassable)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_bypassable)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8923(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8923\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_dst_rtype)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_50)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_48)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_50)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_48)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_uses_stq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_is_sfb 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_sfb)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_sfb)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_is_sfb)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8924(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8924\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_is_rvc 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_is_rvc)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_50)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_is_rvc)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_is_rvc)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_edge_inst 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_edge_inst)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_50)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_edge_inst)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_edge_inst)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_pc_lob 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_pc_lob)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_50)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_pc_lob)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_pc_lob)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_50)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_48)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_fp_val)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__ppred));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8925(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8925\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_request 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__state))
            ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_118) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p3)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__ppred)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__state)) 
               & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p1) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__ppred)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1551 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_fu_code) 
           & (0x21U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty)
                        ? 0x100U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1547 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17_io_request) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_fu_code)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8926(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8926\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp10263[3];
    WData/*95:0*/ __Vtemp10268[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_predicted_ghist_new_saw_branch_not_taken 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1813)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1816)
            : (0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1801) 
                              >> 4U))));
    VL_EXTEND_WW(66,65, __Vtemp10263, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821);
    VL_EXTEND_WW(66,65, __Vtemp10268, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1813)
            ? __Vtemp10263[0U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1823)
                                   ? (1U | (0xfffffffeU 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[0U] 
                                               << 1U)))
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1816)
                                       ? (0xfffffffeU 
                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[0U] 
                                             << 1U))
                                       : __Vtemp10268[0U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1813)
            ? __Vtemp10263[1U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1823)
                                   ? ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[0U] 
                                             >> 0x1fU)) 
                                      | (0xfffffffeU 
                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[1U] 
                                            << 1U)))
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1816)
                                       ? ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[0U] 
                                                 >> 0x1fU)) 
                                          | (0xfffffffeU 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[1U] 
                                                << 1U)))
                                       : __Vtemp10268[1U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1813)
            ? __Vtemp10263[2U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1823)
                                   ? ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[1U] 
                                             >> 0x1fU)) 
                                      | (0xfffffffeU 
                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[2U] 
                                            << 1U)))
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1816)
                                       ? ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[1U] 
                                                 >> 0x1fU)) 
                                          | (0xfffffffeU 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1821[2U] 
                                                << 1U)))
                                       : __Vtemp10268[2U])));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_pdst)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_is_amo)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8927(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8927\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_dst_rtype)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_uses_stq)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT___GEN_126 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__next_uop_prs1))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__next_uop_prs1))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__p1))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__p1))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__p1)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__p1)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT___GEN_127 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__next_uop_prs2))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__next_uop_prs2))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__p2))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__p2))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__p2)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__p2)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8928(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8928\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT___GEN_128 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__next_uop_prs3))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__next_uop_prs3))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__p3))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__p3))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__p3)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__p3)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_550 
        = (7U & ((3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_will_be_valid)) 
                                | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))) 
                               & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_23)))
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9_io_will_be_valid)
                                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_1578))))) 
                        + ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_will_be_valid)) 
                                   | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))) 
                                  & (~ ((4U == (7U 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_25)))
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_will_be_valid)
                                         : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_1818))))) 
                           + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8_io_will_be_valid)) 
                                     | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))) 
                                    & (~ ((4U == (7U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_27)))
                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_will_be_valid)
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_2058)))))))) 
                 + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9_io_will_be_valid)) 
                                  | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_23)))) 
                                 & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12_io_will_be_valid)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_2298))))) 
                          + ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_will_be_valid)) 
                                     | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_25)))) 
                                    & (~ ((4U == (7U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_will_be_valid)
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_2538))))) 
                             + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_will_be_valid)) 
                                       | (0U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_27)))) 
                                      & (~ ((4U == 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_will_be_valid)
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_2778))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8929(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8929\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_prs2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_prs3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_valid 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_will_be_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_2778));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3018 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_will_be_valid)
            : ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_will_be_valid)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_stq_idx)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8930(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8930\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_taken 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_taken)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_taken)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_taken)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_ftq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_ftq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_ftq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_ftq_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_pdst)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_uses_stq)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8931(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8931\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_stq_idx)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_prs3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_lrs1_rtype 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_out_uop_lrs1_rtype)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_out_uop_lrs1_rtype)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11_io_out_uop_lrs1_rtype)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_lrs2_rtype 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_out_uop_lrs2_rtype)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_out_uop_lrs2_rtype)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11_io_out_uop_lrs2_rtype)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_prs2)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8932(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8932\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_will_be_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_2531));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_2771 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_will_be_valid)
            : ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_will_be_valid)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_ldq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_ldq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_ldq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_ldq_idx)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_resp_0_pf_ld 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__bad_va_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cmd_read_0)) 
           | (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pf_ld_array_0) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hits_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_r_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__legal_address_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1460)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1510) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1462)))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1264)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1314) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1266)))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1068)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1118) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1070)))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_872)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_922) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_874)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_676)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_726) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_678)))
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_480)
                                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_530) 
                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_482)))
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_284)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_334) 
                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_286)))
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_88)
                                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_138) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_90)))
                                           : (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8933(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8933\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_w_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_238) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1460)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1510) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1462)))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1264)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1314) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1266)))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1068)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1118) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1070)))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_872)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_922) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_874)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_676)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_726) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_678)))
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_480)
                                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_530) 
                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_482)))
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_284)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_334) 
                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_286)))
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_88)
                                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_138) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_90)))
                                           : (1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__eff_array_0 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_eff_0)
              ? 3U : 0U) << 8U) | ((0x80U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                      >> 2U)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                         >> 2U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_1_data_0 
                                                            >> 2U)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_0_data_0 
                                                         >> 2U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_31 
                                                            >> 2U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_27 
                                                               >> 2U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_23 
                                                                  >> 2U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_19 
                                                                   >> 2U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8934(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8934\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__c_array_0 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cacheable_0)
              ? 3U : 0U) << 8U) | ((0x80U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                      >> 1U)) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                         >> 1U)) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_1_data_0 
                                                            >> 1U)) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_0_data_0 
                                                         >> 1U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_31 
                                                            >> 1U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_27 
                                                               >> 1U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_23 
                                                                  >> 1U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_19 
                                                                   >> 1U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1690 
        = (0xfU & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1681))
                    ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1667) 
                                   << 1U)))) : (2U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1667) 
                                                   << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_resp_0_paddr 
        = ((0xfffff000U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_885 
                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0)
                                ? 0U : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                                >> 0xcU)))) 
                           << 0xcU)) | (0xfffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__pf_st_0 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1280)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_resp_0_pf_st)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_uop_0_uses_stq));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1830 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1280)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__tlb_miss_0)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1779 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 6U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1775)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8935(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8935\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_is_jal 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_48)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_is_jal)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_46)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_is_jal)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_is_jal)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_is_jalr 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_48)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_is_jalr)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_46)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_is_jalr)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_is_jalr)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_is_br 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_48)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_is_br)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_46)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_is_br)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_is_br)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_46)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_br_tag 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_br_tag)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_br_tag)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_br_tag)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8936(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8936\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8937(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8937\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_lrs2_rtype))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8938(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8938\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_bits_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_0_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2790)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67011))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66987))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8939(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8939\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66988))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66989))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66990))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66991))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8940(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8940\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66992))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66993))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66994))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66995))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8941(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8941\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66996))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66997))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66998))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_66999))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8942(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8942\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67000))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67001))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67002))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67003))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8943(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8943\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67004))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67005))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67006))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67007))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8944(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8944\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67008))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67009))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67010))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2756)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2771)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2776)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012)
                        : ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2787)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67012))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8945(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8945\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT___T_9 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_grant) 
            & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__state))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT___T_5) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p1)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p2)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__ppred)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_19_grant 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_874) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_865)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_grant 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_874) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_865)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_880 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_874) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_865));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_468 
        = ((0x1d4U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 3U))) ? VL_ULL(0)
            : ((0x1d3U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 3U))) ? VL_ULL(0)
                : ((0x1d2U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 3U))) ? VL_ULL(0)
                    : ((0x1d1U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                        ? VL_ULL(0) : ((0x1d0U == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x1cfU 
                                            == (0x1ffU 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x1ceU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x1cdU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x1ccU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x1cbU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x1caU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0x1c9U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0x1c8U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_455)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8946(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8946\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_uop_lrs2_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_148)
                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs2_rtype)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs2_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_uop_lrs1_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_149)
                        ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs1_rtype))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_lrs1_rtype));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8947(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8947\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_uop_uopc 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_149)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_uopc))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_uopc));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1873 
        = (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_old_history 
             == (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[1U])) 
                  << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[0U])))) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_new_saw_branch_not_taken) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_predicted_ghist_new_saw_branch_not_taken))) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_new_saw_branch_taken) 
              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_predicted_ghist_new_saw_branch_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1879 
        = (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_old_history 
             == (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[1U])) 
                  << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[0U])))) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_new_saw_branch_not_taken) 
               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_predicted_ghist_new_saw_branch_not_taken))) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_new_saw_branch_taken) 
              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_predicted_ghist_new_saw_branch_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_prs2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8948(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8948\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35 
        = (((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__state)))
            ? 1U : (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33) 
                         >> 2U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__state)))
                     ? (0xeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33) 
                                << 1U)) : (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__next_p1_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__p1_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__p1_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__p1_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p1_poisoned));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8949(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8949\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__next_p2_poisoned 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid)
            ? ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__p2_poisoned)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__p2_poisoned)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__p2_poisoned)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42 
        = (((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__state)))
            ? 1U : (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40) 
                         >> 2U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__state)))
                     ? (0xeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40) 
                                << 1U)) : (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__pf_ld_0 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1280)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_resp_0_pf_ld)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_uop_0_uses_ldq));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_926 
        = (((QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn)))) 
            << 0xeU) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_u) 
                                         << 0xdU) | 
                                        (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_g) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__resp_ae) 
                                             << 0xbU) 
                                            | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_895) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_w)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_d)) 
                                                << 0xaU) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_895) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_x)) 
                                                   << 9U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_895) 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_r)) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_w_0) 
                                                         << 7U) 
                                                        | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__legal_address_0) 
                                                              & ((VL_ULL(0) 
                                                                  == 
                                                                  (VL_ULL(0x86000000) 
                                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                                                                 | (VL_ULL(0) 
                                                                    == 
                                                                    (VL_ULL(0x80000000) 
                                                                     & (VL_ULL(0x80000000) 
                                                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0))))) 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1460)
                                                                 ? 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1510) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1462)))
                                                                 : 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1264)
                                                                  ? 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1314) 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1266)))
                                                                  : 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1068)
                                                                   ? 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1118) 
                                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1070)))
                                                                   : 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_872)
                                                                    ? 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_922) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                                                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_874)))
                                                                    : 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_676)
                                                                     ? 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_726) 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_678)))
                                                                     : 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_480)
                                                                      ? 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_530) 
                                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_482)))
                                                                      : 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_284)
                                                                       ? 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_334) 
                                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_286)))
                                                                       : 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_88)
                                                                        ? 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_138) 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_90)))
                                                                        : 
                                                                       (1U 
                                                                        < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv))))))))))) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_r_0) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_238) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_238) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__prot_eff_0) 
                                                                        << 2U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cacheable_0) 
                                                                          << 1U))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8950(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8950\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__ae_array_0 
        = (0x3ffU & (((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1542)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__eff_array_0)
                       : 0U) | (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_cmd)) 
                                 | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_cmd)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__c_array_0))
                                 : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1814 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__c_array_0) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hits_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_paddr_0 
        = ((0xfffff000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_resp_0_paddr) 
           | (0xfffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_vaddr_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__multipleHits_0 
        = (1U & ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                        >> 1U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                                    >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                                              >> 3U))) 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1740) 
                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1749))) 
                  | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                        >> 4U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                                  >> 5U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                                                 >> 8U)) 
                                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                                                 >> 6U) 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1775)))) 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1763) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1779)))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1740) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1749)) 
                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1763) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1779)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8951(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8951\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67397 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2874)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67204))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67373 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67180))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67374 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67181))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8952(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8952\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67375 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67182))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67376 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67183))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67377 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67184))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67378 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67185))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8953(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8953\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67379 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67186))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67380 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67187))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67381 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67188))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67382 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67189))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8954(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8954\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67383 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67190))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67384 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67191))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67385 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67192))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67386 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67193))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8955(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8955\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67387 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67194))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67388 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67195))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67389 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67196))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67390 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67197))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8956(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8956\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67391 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67198))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67392 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67199))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67393 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67200))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67394 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67201))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8957(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8957\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67395 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67202))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67396 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67203))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67398 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2840)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2855)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2860)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205)
                        : ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2871)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_67205))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__ppred 
                = (1U & (~ ((4U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_53))) 
                            & ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                                ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__ppred))
                                : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__ppred))))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8958(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8958\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_mem_size 
                = (3U & (((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__decode_units_2__DOT__cs_mem_cmd)) 
                          | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__decode_units_2__DOT__cs_mem_cmd)))
                          ? (((0U != (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                << 5U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                  >> 0x1bU)))) 
                              << 1U) | (0U != (0x1fU 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                     >> 0x16U)))))
                          : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                              << 0xdU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                          >> 0x13U))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_mem_size 
                = (3U & (((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__decode_units_1__DOT__cs_mem_cmd)) 
                          | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__decode_units_1__DOT__cs_mem_cmd)))
                          ? (((0U != (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x1aU] 
                                                << 0x1fU) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                  >> 1U)))) 
                              << 1U) | (0U != (0x1fU 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                   << 4U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                                     >> 0x1cU)))))
                          : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                              << 7U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                        >> 0x19U))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_size 
                = (3U & (((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_mem_cmd)) 
                          | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_mem_cmd)))
                          ? (((0U != (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                                << 0x19U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                                  >> 7U)))) 
                              << 1U) | (0U != (0x1fU 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                                     >> 2U)))))
                          : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                              << 1U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xbU] 
                                        >> 0x1fU))));
        }
    }
}
