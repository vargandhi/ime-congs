// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_settle__TOP__1128(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1128\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2309[4];
    WData/*127:0*/ __Vtemp2310[4];
    WData/*127:0*/ __Vtemp2315[4];
    WData/*127:0*/ __Vtemp2316[4];
    WData/*1055:0*/ __Vtemp2324[33];
    WData/*1055:0*/ __Vtemp2325[33];
    // Body
    __Vtemp2309[0U] = 1U;
    __Vtemp2309[1U] = 0U;
    __Vtemp2309[2U] = 0U;
    __Vtemp2309[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2310, __Vtemp2309, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp2315[0U] = 1U;
    __Vtemp2315[1U] = 0U;
    __Vtemp2315[2U] = 0U;
    __Vtemp2315[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2316, __Vtemp2315, 
                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                  [0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2310[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2316[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2310[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2316[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[2U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[2U] 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                           ? __Vtemp2310[2U] : 0U)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
                             ? __Vtemp2316[2U] : 0U))));
    __Vtemp2324[0U] = 0xfU;
    __Vtemp2324[1U] = 0U;
    __Vtemp2324[2U] = 0U;
    __Vtemp2324[3U] = 0U;
    __Vtemp2324[4U] = 0U;
    __Vtemp2324[5U] = 0U;
    __Vtemp2324[6U] = 0U;
    __Vtemp2324[7U] = 0U;
    __Vtemp2324[8U] = 0U;
    __Vtemp2324[9U] = 0U;
    __Vtemp2324[0xaU] = 0U;
    __Vtemp2324[0xbU] = 0U;
    __Vtemp2324[0xcU] = 0U;
    __Vtemp2324[0xdU] = 0U;
    __Vtemp2324[0xeU] = 0U;
    __Vtemp2324[0xfU] = 0U;
    __Vtemp2324[0x10U] = 0U;
    __Vtemp2324[0x11U] = 0U;
    __Vtemp2324[0x12U] = 0U;
    __Vtemp2324[0x13U] = 0U;
    __Vtemp2324[0x14U] = 0U;
    __Vtemp2324[0x15U] = 0U;
    __Vtemp2324[0x16U] = 0U;
    __Vtemp2324[0x17U] = 0U;
    __Vtemp2324[0x18U] = 0U;
    __Vtemp2324[0x19U] = 0U;
    __Vtemp2324[0x1aU] = 0U;
    __Vtemp2324[0x1bU] = 0U;
    __Vtemp2324[0x1cU] = 0U;
    __Vtemp2324[0x1dU] = 0U;
    __Vtemp2324[0x1eU] = 0U;
    __Vtemp2324[0x1fU] = 0U;
    __Vtemp2324[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp2325, __Vtemp2324, 
                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                   [0U] << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? __Vtemp2325[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_610)
            ? (0x7fffU & __Vtemp2325[0x20U]) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_9 
        = (0x3fU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_rofireMux_T_1) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                         >> 0xaU)) & (0U == (0x7bf9efU 
                                             & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                             [0U]))) 
                    & (0U != (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                      >> 0x20U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_12 
        = (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_rofireMux_T_1) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                         >> 8U)) & (0U == (0x7bf9efU 
                                           & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                           [0U]))) 
                    & (0U != (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                      >> 0x20U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9 
        = (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_wofireMux_T_2) 
                     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                        >> 0xaU)) & (0U == (0x7bf9efU 
                                            & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                            [0U]))));
}

void VTestHarness::_settle__TOP__1129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1055:0*/ __Vtemp2330[33];
    WData/*1055:0*/ __Vtemp2331[33];
    WData/*1055:0*/ __Vtemp2341[33];
    WData/*1055:0*/ __Vtemp2342[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___out_wofireMux_T_2) 
                     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                        >> 8U)) & (0U == (0x7bf9efU 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                          [0U]))));
    VL_EXTEND_WI(1027,4, __Vtemp2330, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp2331, __Vtemp2330, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2331[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[9U]));
    VL_EXTEND_WI(1026,3, __Vtemp2341, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp2342, __Vtemp2341, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___T_591)
                ? __Vtemp2342[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_645)
                         ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                         : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_658)
                                       ? (0xffU & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                                                       >> 4U))))
                                       : 0U))));
}

void VTestHarness::_settle__TOP__1130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2352[3];
    WData/*95:0*/ __Vtemp2353[3];
    WData/*95:0*/ __Vtemp2358[3];
    WData/*95:0*/ __Vtemp2359[3];
    WData/*127:0*/ __Vtemp2364[4];
    WData/*127:0*/ __Vtemp2365[4];
    WData/*127:0*/ __Vtemp2370[4];
    WData/*127:0*/ __Vtemp2371[4];
    WData/*1055:0*/ __Vtemp2379[33];
    WData/*1055:0*/ __Vtemp2380[33];
    // Body
    VL_EXTEND_WI(67,4, __Vtemp2352, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_645)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2353, __Vtemp2352, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_645)
                            ? __Vtemp2353[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    VL_EXTEND_WI(67,4, __Vtemp2358, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_645)
                                      ? (1U | (0xeU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                  << 1U)))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2359, __Vtemp2358, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_645)
                            ? __Vtemp2359[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    __Vtemp2364[0U] = 1U;
    __Vtemp2364[1U] = 0U;
    __Vtemp2364[2U] = 0U;
    __Vtemp2364[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2365, __Vtemp2364, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp2370[0U] = 1U;
    __Vtemp2370[1U] = 0U;
    __Vtemp2370[2U] = 0U;
    __Vtemp2370[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2371, __Vtemp2370, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2365[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
                                                ? __Vtemp2371[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2365[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
                                                ? __Vtemp2371[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[2U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[2U] 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                           ? __Vtemp2365[2U] : 0U)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
                             ? __Vtemp2371[2U] : 0U))));
    __Vtemp2379[0U] = 0xfU;
    __Vtemp2379[1U] = 0U;
    __Vtemp2379[2U] = 0U;
    __Vtemp2379[3U] = 0U;
    __Vtemp2379[4U] = 0U;
    __Vtemp2379[5U] = 0U;
    __Vtemp2379[6U] = 0U;
    __Vtemp2379[7U] = 0U;
    __Vtemp2379[8U] = 0U;
    __Vtemp2379[9U] = 0U;
    __Vtemp2379[0xaU] = 0U;
    __Vtemp2379[0xbU] = 0U;
    __Vtemp2379[0xcU] = 0U;
    __Vtemp2379[0xdU] = 0U;
    __Vtemp2379[0xeU] = 0U;
    __Vtemp2379[0xfU] = 0U;
    __Vtemp2379[0x10U] = 0U;
    __Vtemp2379[0x11U] = 0U;
    __Vtemp2379[0x12U] = 0U;
    __Vtemp2379[0x13U] = 0U;
    __Vtemp2379[0x14U] = 0U;
    __Vtemp2379[0x15U] = 0U;
    __Vtemp2379[0x16U] = 0U;
    __Vtemp2379[0x17U] = 0U;
    __Vtemp2379[0x18U] = 0U;
    __Vtemp2379[0x19U] = 0U;
    __Vtemp2379[0x1aU] = 0U;
    __Vtemp2379[0x1bU] = 0U;
    __Vtemp2379[0x1cU] = 0U;
    __Vtemp2379[0x1dU] = 0U;
    __Vtemp2379[0x1eU] = 0U;
    __Vtemp2379[0x1fU] = 0U;
    __Vtemp2379[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp2380, __Vtemp2379, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? __Vtemp2380[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_610)
            ? (0x7fffU & __Vtemp2380[0x20U]) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_632 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
           & (0x3ffU == (0x3ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))));
}

void VTestHarness::_settle__TOP__1131(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1131\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
           & (0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
           & (0x3ffU == (0x3ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
           & (0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_619 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_651 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_4) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1046 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1046 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1034 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1034 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_931 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1050 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_931 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_corrupt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__1132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1050 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1038 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1092 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1038 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1092 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1068 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1065) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1030 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1088 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1153 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1073 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
}

void VTestHarness::_settle__TOP__1133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1068 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1065) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1030 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1088 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_30)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1153 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1073 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_863 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
              | (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
             | (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
            | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1161 
        = (1U & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1) 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__1134(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1134\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1104 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
            == (0xffU & (IData)((VL_ULL(0x7f) & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
                                                  >> 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   << 3U)) 
                                                 >> 1U))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1169 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
            == (0xffU & (IData)((VL_ULL(0x7f) & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
                                                  >> 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   << 3U)) 
                                                 >> 1U))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x13U >= ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                      << 2U)) ? (0xfffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes 
                                             >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 << 2U)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_863 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)) 
              | (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
             | (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
            | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1161 
        = (1U & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1) 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1104 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size) 
            == (0xffU & (IData)((VL_ULL(0x7f) & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes 
                                                  >> 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                   << 3U)) 
                                                 >> 1U))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__1135(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1135\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2385[4];
    WData/*127:0*/ __Vtemp2386[4];
    WData/*127:0*/ __Vtemp2391[4];
    WData/*127:0*/ __Vtemp2392[4];
    WData/*1055:0*/ __Vtemp2400[33];
    WData/*1055:0*/ __Vtemp2401[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1169 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size) 
            == (0xffU & (IData)((VL_ULL(0x7f) & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1 
                                                  >> 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                   << 3U)) 
                                                 >> 1U))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x13U >= ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                      << 2U)) ? (0xfffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes 
                                             >> ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                 << 2U)))
            : 0U);
    __Vtemp2385[0U] = 1U;
    __Vtemp2385[1U] = 0U;
    __Vtemp2385[2U] = 0U;
    __Vtemp2385[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2386, __Vtemp2385, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp2391[0U] = 1U;
    __Vtemp2391[1U] = 0U;
    __Vtemp2391[2U] = 0U;
    __Vtemp2391[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2392, __Vtemp2391, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597)
                ? __Vtemp2386[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2392[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597)
                ? __Vtemp2386[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
                                                ? __Vtemp2392[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[2U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_597)
                           ? __Vtemp2386[2U] : 0U)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
                             ? __Vtemp2392[2U] : 0U))));
    __Vtemp2400[0U] = 0xfU;
    __Vtemp2400[1U] = 0U;
    __Vtemp2400[2U] = 0U;
    __Vtemp2400[3U] = 0U;
    __Vtemp2400[4U] = 0U;
    __Vtemp2400[5U] = 0U;
    __Vtemp2400[6U] = 0U;
    __Vtemp2400[7U] = 0U;
    __Vtemp2400[8U] = 0U;
    __Vtemp2400[9U] = 0U;
    __Vtemp2400[0xaU] = 0U;
    __Vtemp2400[0xbU] = 0U;
    __Vtemp2400[0xcU] = 0U;
    __Vtemp2400[0xdU] = 0U;
    __Vtemp2400[0xeU] = 0U;
    __Vtemp2400[0xfU] = 0U;
    __Vtemp2400[0x10U] = 0U;
    __Vtemp2400[0x11U] = 0U;
    __Vtemp2400[0x12U] = 0U;
    __Vtemp2400[0x13U] = 0U;
    __Vtemp2400[0x14U] = 0U;
    __Vtemp2400[0x15U] = 0U;
    __Vtemp2400[0x16U] = 0U;
    __Vtemp2400[0x17U] = 0U;
    __Vtemp2400[0x18U] = 0U;
    __Vtemp2400[0x19U] = 0U;
    __Vtemp2400[0x1aU] = 0U;
    __Vtemp2400[0x1bU] = 0U;
    __Vtemp2400[0x1cU] = 0U;
    __Vtemp2400[0x1dU] = 0U;
    __Vtemp2400[0x1eU] = 0U;
    __Vtemp2400[0x1fU] = 0U;
    __Vtemp2400[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp2401, __Vtemp2400, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[1U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[2U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[3U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[4U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[5U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[6U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[7U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[8U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[9U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? __Vtemp2401[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___T_610)
            ? (0x7fffU & __Vtemp2401[0x20U]) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 8U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x10U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x18U)))));
}

void VTestHarness::_settle__TOP__1136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x20U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x28U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x30U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x38U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 8U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x10U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x18U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x20U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x28U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x30U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                         >> 0x38U)))));
}

void VTestHarness::_settle__TOP__1137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_619 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_651 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_11) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_6));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_11) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___portsAOI_in_0_a_ready_T_6));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1922 
        = ((0x9cU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
            : ((0x9bU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                : ((0x9aU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                    : ((0x99U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                        : ((0x98U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                            : ((0x97U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                : ((0x96U == (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                    : ((0x95U == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                        : ((0x94U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                            : ((0x93U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                : (
                                                   (0x92U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                    : 
                                                   ((0x91U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                     : 
                                                    ((0x90U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                      : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1909)))))))))))));
}

void VTestHarness::_settle__TOP__1138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1665 
        = ((0x9bU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? (0U == (0x100U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
            : ((0x9aU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? (0U == 
                                               (0x100U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                : ((0x99U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? (0U 
                                                   == 
                                                   (0x100U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                    : ((0x98U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                        : ((0x97U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                            : ((0x96U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? (0U == (0x100U & 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                                : ((0x95U == (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? (0U == (0x100U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1658))))))));
}

void VTestHarness::_settle__TOP__1139(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1139\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_169 
        = ((0xa9U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x6300306568636163)
            : ((0xa8U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x65766973756c636e)
                : ((0xa7U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x692c657669666973)
                    : ((0xa6U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x1b0000001d000000)
                        : ((0xa5U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x3000000a8010000)
                            : ((0xa4U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x3000000)
                                : ((0xa3U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x80066000000)
                                    : ((0xa2U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x400000003000000)
                                        : ((0xa1U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x4000059000000)
                                            : ((0xa0U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x400000003000000)
                                                : (
                                                   (0x9fU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x20000009c010000)
                                                    : 
                                                   ((0x9eU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x400000003000000)
                                                     : 
                                                    ((0x9dU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x4000000046000000)
                                                      : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_156)))))))))))));
}

void VTestHarness::_settle__TOP__1140(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1140\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__sink_ACancel_1_earlyValid) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___in_d_ready_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool_io_alloc_ready 
        = ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)) 
             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__sink_ACancel_1_earlyValid) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___in_d_ready_T_3))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_first_counter))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__d_grant));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__sink_ACancel_1_earlyValid) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___in_d_ready_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__in_d_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___in_d_ready_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_T_8 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set)) 
           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__full)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_e_valid))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2357 
        = (1U & ((0xffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set) 
                            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2)) 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_T_5 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2278)
                      ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__probe_bits_source))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2291)
                                    ? ((IData)(1U) 
                                       << (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes_1) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2278)
                           ? (0xfffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2278)
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size) 
                                                << 1U))
                                            : 0U) << 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__probe_bits_source) 
                                           << 3U)))
                           : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2291)
                                         ? (0x7fffffffU 
                                            & ((IData)(0xffU) 
                                               << (8U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                      << 3U))))
                                         : 0U))));
}

void VTestHarness::_settle__TOP__1141(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1141\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2198 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_set 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_3))) 
            & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                             >> 1U)))) ? (0xffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2353 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2266 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb_io_out_bits_data 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__resetting)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid)
                     ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_grow_param) 
                         << 0x14U) | (0xfffffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_req_addr 
                                                          >> 0xcU))))
                     : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___GEN_19));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_2) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb_io_in_4_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment)
            ? ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_15) 
                 ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13)) 
                ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12)) 
               ^ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1077 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2155 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__param)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                                       ? 1U : 0U))));
}

void VTestHarness::_settle__TOP__1142(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1142\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2151 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___GEN_27 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2247)
            ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source) 
           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__source_ok 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source)) 
            | (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source))) 
           | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2163 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__source)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2256 
        = (1U & ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source)))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2159 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2285 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_99 
        = ((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                (0x10000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address))))) 
           | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_80 
        = ((VL_ULL(0) == (VL_ULL(0x1ffeff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address))))));
}

void VTestHarness::_settle__TOP__1143(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1143\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                                     >> 2U)))));
}

void VTestHarness::_settle__TOP__1144(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1144\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_187 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2167 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address 
            == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__address) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2108 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_168 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_263)
                  ? ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable)) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0))
                  : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_180 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_263)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_pma_cacheable) 
               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__cached_grant_wait))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__cached_grant_wait));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_requestor_0_s2_nack 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_s2_nack) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb__DOT__s2_id)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_141 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_read) 
               & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_valid_likely) 
                   & (((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_addr 
                                          >> 3U))) 
                       == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_addr 
                                             >> 3U)))) 
                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_write)
                          ? (0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_mask_xwr)))
                          : (0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_mask_xwr)))))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore2_valid) 
                     & (((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore2_addr 
                                            >> 3U))) 
                         == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_addr 
                                               >> 3U)))) 
                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_write)
                            ? (0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__mask) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_mask_xwr)))
                            : (0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__mask) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_mask_xwr))))))))) 
           | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_s2_nack) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___s2_update_meta_T)))) 
              | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_cmd_uses_tlb)) 
                 & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__tlb_miss)) 
                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__multipleHits)))));
}

void VTestHarness::_settle__TOP__1145(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1145\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_s2_nack) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb__DOT__s2_id));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_301 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_io_cpu_s2_nack)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1054 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                 & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))
                     ? (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___readys_T_3))
                     : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___readys_T_3)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_i_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___requests_io_push_bits_index_T_1 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___requests_io_push_bits_index_T_10 
        = ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                     >> 2U)) | (0xc000U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                           << 0xeU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bypassMatches 
        = ((0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1))) 
           & (((0U != (0x7fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                >> 0xeU))) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
               ? (~ (IData)((0U != (0x7fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                             >> 0xeU)))))
               : ((0U != (0x7fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                   >> 7U))) ? (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                                              >> 7U)))))
                   : (~ (IData)((0U != (0x7fU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__selected_requests)))))));
}

void VTestHarness::_settle__TOP__1146(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1146\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_7 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__request_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__queue));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shout_l_T_28 
        = ((VL_ULL(0xff00ff00ff00ff) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shout_l_T_18 
                                        >> 8U)) | (VL_ULL(0xff00ff00ff00ff00) 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__alu__DOT___shout_l_T_18 
                                                      << 8U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_req_bits_sink 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                                  >> 4U)))) << 2U) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_select_lo_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_2222 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__b_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__b_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_2222 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__b_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__b_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1302 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__b_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__b_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___T_1302 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__b_first_done) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__b_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_io_in_b_bits_address 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address 
           | ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))
               ? 0x10000000U : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2_auto_in_b_bits_address 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address 
           | ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))
               ? 0x10000000U : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
            ? ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant))
            : (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass 
        = ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set) 
                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way) 
                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_beat) 
                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires)) 
            | ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set) 
                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way) 
                     == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_beat) 
                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
                & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires))) 
           | (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set) 
                 == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way) 
                   == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_beat) 
                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)));
}

void VTestHarness::_settle__TOP__1147(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1147\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat)) 
            | ((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set))) 
                 & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                        != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                       != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set)))) 
                & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                       != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way))) 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set)))) 
               & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                      != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                     != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set))))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___pop_index_T_4 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___pop_index_T_3) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___pop_index_T_3)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___id_csr_flush_T 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_14) 
            & (0x14U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_15))) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_ctrl_decoder_23)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___ctrl_stalld_T_1 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_valid) 
             & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_wxd) 
                  & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_124) 
                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T)) 
                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_126) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_2))) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_128) 
                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_4)))) 
                 & (((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_csr)) 
                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_jalr)) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_mem)) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_div)) 
                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_fp))) 
                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_ctrl_wfd) 
                   & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T)) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_2))) 
                       | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3) 
                             == (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ex_reg_inst 
                                          >> 7U))))) 
                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_ex_T_4)))))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_valid) 
               & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__data_hazard_mem) 
                   & ((((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_csr)) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_mem) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_slow_bypass))) 
                       | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_div)) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_fp))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_ctrl_wfd) 
                     & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_mem_T)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_mem_T_2))) 
                         | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3) 
                               == (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__mem_reg_inst 
                                            >> 7U))))) 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_mem_T_4))))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_valid) 
              & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_wxd) 
                   & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_124) 
                        & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T)) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_126) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_2))) 
                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_128) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_4)))) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_set_sboard)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_wfd) 
                    & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T)) 
                         | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_2))) 
                        | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs3) 
                              == (0x1fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                           >> 7U))))) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___data_hazard_wb_T_4)))))));
}

void VTestHarness::_settle__TOP__1149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__nonzeroResp 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiStatus_hi) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT___io_dmi_resp_bits_resp_T)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__captureBits 
        = (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                              ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr)
                                       : 0U)))) << 0x22U) 
           | (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                                 ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                          ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0)
                                               ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                                                   ? 0U
                                                   : (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 1U)))
                                               : 0U) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (5U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))
                                                   ? 0x112380U
                                                   : 
                                                  (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                       << 1U) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))))
                                                  : 0U)
                                                 : 0U))
                                          : 0U)))) 
               << 2U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                                          ? 3U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT___io_dmi_resp_bits_resp_T)
                                                   : 0U))))));
}

void VTestHarness::_settle__TOP__1150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_541 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_538) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_503 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_561 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_30)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_573 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_46)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__1151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? 0xfU : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_546 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_T_2 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_590)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_603)
                                         ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_590)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_590)
                            ? 5U : 0U) : 0U)) & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_603)
                                                   ? 0xfU
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_590)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_590)
                            ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                     << 1U)) : 0U) : 0U)) 
                   & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___T_603)
                          ? 0xfU : 0U))));
}

void VTestHarness::_settle__TOP__1152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_846)
            ? (0x7fffffffU & ((IData)(0xfU) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                << 2U)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___valid_T 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___ridx_incremented_T_1)) 
           != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_826 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                          >> 0x28U)))))
                  ? (0x7fffffffU & ((IData)(0xfU) << 
                                    (4U & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x23U)) 
                                           << 2U))))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_846 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                   >> 0x28U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_535 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? 0xfU : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_555 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)));
}

void VTestHarness::_settle__TOP__1153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2406[3];
    WData/*95:0*/ __Vtemp2407[3];
    WData/*95:0*/ __Vtemp2412[3];
    WData/*95:0*/ __Vtemp2413[3];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready) 
               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source_io_enq_ready));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT___T_29 
        = (1U & (((~ (IData)((7U == (7U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[2U] 
                                            << 3U) 
                                           | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                              >> 0x1dU)))))) 
                  | ((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                            >> 0x1cU)) == (0xfffffU 
                                           == (0xfffffU 
                                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wdata_1[1U])))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_711)
                         ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                         : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_727)
                                       ? (0xffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                                       : 0U))));
    VL_EXTEND_WI(67,4, __Vtemp2406, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_711)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2407, __Vtemp2406, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_711)
                            ? __Vtemp2407[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0U])));
    VL_EXTEND_WI(67,4, __Vtemp2412, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_711)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2413, __Vtemp2412, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_711)
                            ? __Vtemp2413[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23[0U])));
}

void VTestHarness::_settle__TOP__1154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2418[3];
    WData/*95:0*/ __Vtemp2419[3];
    WData/*95:0*/ __Vtemp2424[3];
    WData/*95:0*/ __Vtemp2425[3];
    WData/*1055:0*/ __Vtemp2430[33];
    WData/*1055:0*/ __Vtemp2431[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_T_2 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_711)
                         ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                         : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_727)
                                       ? (0xffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source)))
                                       : 0U))));
    VL_EXTEND_WI(67,4, __Vtemp2418, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_711)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2419, __Vtemp2418, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_711)
                            ? __Vtemp2419[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0U])));
    VL_EXTEND_WI(67,4, __Vtemp2424, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_711)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2425, __Vtemp2424, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_711)
                            ? __Vtemp2425[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23[0U])));
    VL_EXTEND_WI(1027,4, __Vtemp2430, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp2431, __Vtemp2430, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2431[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[9U]));
}

void VTestHarness::_settle__TOP__1155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1055:0*/ __Vtemp2441[33];
    WData/*1055:0*/ __Vtemp2442[33];
    WData/*1055:0*/ __Vtemp2452[33];
    WData/*1055:0*/ __Vtemp2453[33];
    WData/*1055:0*/ __Vtemp2463[33];
    WData/*1055:0*/ __Vtemp2464[33];
    // Body
    VL_EXTEND_WI(1026,3, __Vtemp2441, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp2442, __Vtemp2441, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_597)
                ? __Vtemp2442[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[9U]));
    VL_EXTEND_WI(1027,4, __Vtemp2452, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp2453, __Vtemp2452, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2453[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[9U]));
    VL_EXTEND_WI(1026,3, __Vtemp2463, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp2464, __Vtemp2463, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_597)
                ? __Vtemp2464[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__claiming 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_12) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_0)) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_9) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_1)));
}

void VTestHarness::_settle__TOP__1156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1055:0*/ __Vtemp2474[33];
    WData/*1055:0*/ __Vtemp2475[33];
    WData/*1055:0*/ __Vtemp2485[33];
    WData/*1055:0*/ __Vtemp2486[33];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___T 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_9) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_12));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9) 
                  & (0xffffffffU == (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                             >> 0x20U)))) 
                 & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_1_0) 
                     << 1U) >> (1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                                              [0U] 
                                              >> 0x20U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12) 
                  & (0xffffffffU == (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                             >> 0x20U)))) 
                 & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0) 
                     << 1U) >> (1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                                              [0U] 
                                              >> 0x20U))))));
    VL_EXTEND_WI(1027,4, __Vtemp2474, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp2475, __Vtemp2474, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2475[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[9U]));
    VL_EXTEND_WI(1026,3, __Vtemp2485, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1026,1026,10, __Vtemp2486, __Vtemp2485, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___T_597)
                ? __Vtemp2486[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[9U]));
}

void VTestHarness::_settle__TOP__1157(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1157\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_406 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_632)) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_2114 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449)
            ? 0U : (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631))
                     ? 0U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_473 
        = (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449))) 
                  | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_65 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631)
                ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0)))
                : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448)
                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0)))))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_66 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq)
                ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                    | (0U == (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
                                        >> 4U)))) & 
                   (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0)))
                : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448)
                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0)))))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_651)
                         ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                         : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_667)
                                       ? (0xffU & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                       >> 4U))))
                                       : 0U))));
}

void VTestHarness::_settle__TOP__1158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2496[3];
    WData/*95:0*/ __Vtemp2497[3];
    WData/*95:0*/ __Vtemp2502[3];
    WData/*95:0*/ __Vtemp2503[3];
    WData/*95:0*/ __Vtemp2508[3];
    WData/*95:0*/ __Vtemp2509[3];
    // Body
    VL_EXTEND_WI(67,4, __Vtemp2496, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_651)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2497, __Vtemp2496, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_651)
                            ? __Vtemp2497[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    VL_EXTEND_WI(67,4, __Vtemp2502, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_651)
                                      ? (1U | (0xeU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                  << 1U)))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2503, __Vtemp2502, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_651)
                            ? __Vtemp2503[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_5) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1153)
                  ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))
                  : 0U)));
    __Vtemp2508[0U] = 0xffU;
    __Vtemp2508[1U] = 0U;
    __Vtemp2508[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp2509, __Vtemp2508, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1153)
                                    ? __Vtemp2509[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1153)
                                     ? __Vtemp2509[0U]
                                     : 0U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1153)
                  ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                  : 0U)));
}

void VTestHarness::_settle__TOP__1159(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1159\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2514[3];
    WData/*95:0*/ __Vtemp2515[3];
    // Body
    __Vtemp2514[0U] = 0xffU;
    __Vtemp2514[1U] = 0U;
    __Vtemp2514[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp2515, __Vtemp2514, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1153)
                                    ? __Vtemp2515[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1153)
                                     ? __Vtemp2515[0U]
                                     : 0U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

void VTestHarness::_settle__TOP__1162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2542[3];
    WData/*95:0*/ __Vtemp2543[3];
    WData/*95:0*/ __Vtemp2548[3];
    WData/*95:0*/ __Vtemp2549[3];
    // Body
    VL_EXTEND_WI(67,4, __Vtemp2542, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_651)
                                      ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2543, __Vtemp2542, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_651)
                            ? __Vtemp2543[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    VL_EXTEND_WI(67,4, __Vtemp2548, ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_651)
                                      ? (1U | (0xeU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                  << 1U)))
                                      : 0U));
    VL_SHIFTL_WWI(67,67,6, __Vtemp2549, __Vtemp2548, 
                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                        | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_651)
                            ? __Vtemp2549[0U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1116 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1116 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1935 
        = ((0xa9U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
            : ((0xa8U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                : ((0xa7U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                    : ((0xa6U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                        : ((0xa5U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                            : ((0xa4U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                : ((0xa3U == (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                    : ((0xa2U == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                        : ((0xa1U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                            : ((0xa0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                : (
                                                   (0x9fU 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                    : 
                                                   ((0x9eU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                     : 
                                                    ((0x9dU 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                      : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1922)))))))))))));
}

void VTestHarness::_settle__TOP__1163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1672 
        = ((0xa2U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? (0U == (0x100U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
            : ((0xa1U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? (0U == 
                                               (0x100U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                : ((0xa0U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? (0U 
                                                   == 
                                                   (0x100U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                    : ((0x9fU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                        : ((0x9eU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                            : ((0x9dU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? (0U == (0x100U & 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                                : ((0x9cU == (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? (0U == (0x100U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1665))))))));
}

void VTestHarness::_settle__TOP__1164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_182 
        = ((0xb6U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x200000001000000)
            : ((0xb5U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x8d01000004000000)
                : ((0xb4U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x300000007000000)
                    : ((0xb3U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0xc001000004000000)
                        : ((0xb2U == (0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x3000000006c6f72)
                            : ((0xb1U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x746e6f63b6010000)
                                : ((0xb0U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x800000003000000)
                                    : ((0xafU == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x10000000000102)
                                        : ((0xaeU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0xf01000008000000)
                                            : ((0xadU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x300000003000000)
                                                : (
                                                   (0xacU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x2000000fe000000)
                                                    : 
                                                   ((0xabU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x800000003000000)
                                                     : 
                                                    ((0xaaU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x65686361)
                                                      : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_169)))))))))))));
}

void VTestHarness::_settle__TOP__1165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT___bitmap1_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool_io_alloc_ready)
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__select))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT___T 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool_io_alloc_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__empty))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1268 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1357 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__latch_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__in_d_ready));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__in_d_ready) 
            & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1))
                ? (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___readys_T_16))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_1))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__in_d_ready) 
            & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1))
                ? (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___readys_T_16) 
                      >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_2))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__in_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__sink_ACancel_1_earlyValid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__in_d_ready) 
           & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1)) 
              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_0)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_T_8 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_2) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_set)) 
           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__full)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_e_valid))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data))
                  : 0U)));
}

void VTestHarness::_settle__TOP__1166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2419 
        = (1U & ((0xffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_set) 
                            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_2)) 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_T_5 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_1) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2340)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__probe_bits_source)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2353)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2340)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2340)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__probe_bits_source) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2353)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2250)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2266)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2250)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2250)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2266)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0))))));
}

void VTestHarness::_settle__TOP__1167(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1167\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2250)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2250)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2266)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_probe_x12 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_3)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___bundleOut_0_b_ready_T_2))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_in_0_b_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_299 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__release_state))
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_3)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_284)
                : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_284));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_b_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_3)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___bundleOut_0_b_ready_T_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb__DOT___grant_T_3) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__metaArb_io_in_6_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___inflight_T_2 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1077)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1088)
                                         ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1077)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1077)
                            ? 9U : 0U) : 0U)) & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1088)
                                                   ? 0xfU
                                                   : 0U))));
}

void VTestHarness::_settle__TOP__1168(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1168\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___inflight_sizes_T_2 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_sizes) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1077)
                         ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1077)
                             ? 0xdU : 0U) : 0U)) & 
                    (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_1088)
                         ? 0xffU : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2281 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___GEN_42)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_opcode))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___GEN_42))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2316 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___GEN_27)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2261)
                        ? (7U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___GEN_27)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2247) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_42 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__source_ok));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_177 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_source)) 
             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size)) 
               & ((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_80) 
                        | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                         & (QData)((IData)(
                                                           (0x10000U 
                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                        & (QData)((IData)(
                                                          (0x2000000U 
                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                       & (QData)((IData)(
                                                         (0x2010000U 
                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                      & (QData)((IData)(
                                                        (0xc000000U 
                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (0x10000000U 
                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__1169(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1169\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_454 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_398) 
            | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size)) 
               & ((((((((VL_ULL(0) == (VL_ULL(0x1ffeff000) 
                                       & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))) 
                        | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                         & (QData)((IData)(
                                                           (0x10000U 
                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                        & (QData)((IData)(
                                                          (0x2000000U 
                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                       & (QData)((IData)(
                                                         (0x2010000U 
                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                      & (QData)((IData)(
                                                        (0xc000000U 
                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (0x10000000U 
                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_address)))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))));
}

void VTestHarness::_settle__TOP__1170(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1170\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_T_2 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188)
                      ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_source))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2204)
                                    ? ((IData)(1U) 
                                       << (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes) 
                     | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188)
                         ? (0x7ffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188)
                                          ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode) 
                                                   << 1U))
                                          : 0U) << 
                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_source) 
                                         << 2U))) : 0U)) 
                    & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2204)
                           ? (0x7fffffffU & ((IData)(0xfU) 
                                             << (4U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                    << 2U))))
                           : 0U))));
}

void VTestHarness::_settle__TOP__1171(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__1171\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188)
                           ? (0xfffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188)
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_size) 
                                                << 1U))
                                            : 0U) << 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_source) 
                                           << 3U)))
                           : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2204)
                                         ? (0x7fffffffU 
                                            & ((IData)(0xffU) 
                                               << (8U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                      << 3U))))
                                         : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_nack 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_probe)
                  ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data) 
                      | ((0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s2_probe_state_state)) 
                         | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__releaseDone)))) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_141))
                  : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_141)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___dcache_blocked_blocked_T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__blocked) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_dmem_req_valid)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_imem_flush_icache 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_fence_i)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__replay_wb_common 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_replay));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1025 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1057 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_i_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_allow));
}
