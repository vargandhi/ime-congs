// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7373(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7373\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_98 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
           & (1U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95 
        = ((~ (1U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm))) 
                           & (0U != (2U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                          | ((((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                              | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                >> 2U))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                     & (0U != (2U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))))
                                    ? 1U : 0U))) : 
                         ((0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                         >> 2U)) | 
                          (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                            ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT___T_40 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                          | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm))) 
                                         & (0U != (VL_ULL(2) 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                        | ((((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                            | ((3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                  >> 2U))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                                   & (0U 
                                                      != 
                                                      (VL_ULL(2) 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (VL_ULL(1) 
                                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))))
                                                  ? VL_ULL(1)
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                                               ? VL_ULL(1)
                                               : VL_ULL(0)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7374(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7374\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_85 
        = ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_75 
                                          >> 2U)) | 
           (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_75 
                                          << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata)) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4) 
               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata) 
                  >> 1U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_412) 
                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                    >> 0xfU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_313 
        = ((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_300) 
                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14) 
                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4298) 
                             & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                                >> 0x10U)))))) 
                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15) 
                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4298) 
                            & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                               >> 0x18U)))))) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16)) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17) 
                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4303) 
                          & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                             >> 8U)))))) 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18) 
                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4303) 
                         & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                            >> 0x10U)))))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19) 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4303) 
                        & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                           >> 0x18U)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20)) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21) 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4308) 
                      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                         >> 8U)))))) 
               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22) 
                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4308) 
                     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                        >> 0x10U)))))) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4308) 
                    & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                       >> 0x18U)))))) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24)) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25) 
               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4313) 
                  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                     >> 8U)))))) | 
           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4313) 
               & (0U != (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_610 
                                  >> 0x10U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7375(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7375\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp7176[8];
    WData/*255:0*/ __Vtemp7177[8];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_136 
        = ((0x33U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_126) 
                     >> 2U)) | (0xccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_126) 
                                         << 2U)));
    VL_EXTEND_WW(236,109, __Vtemp7176, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(236,236,7, __Vtemp7177, __Vtemp7176, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[0U] 
        = __Vtemp7177[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U] 
        = __Vtemp7177[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U] 
        = __Vtemp7177[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[3U] 
        = __Vtemp7177[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[4U] 
        = __Vtemp7177[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[5U] 
        = __Vtemp7177[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[6U] 
        = __Vtemp7177[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[7U] 
        = (0xfffU & __Vtemp7177[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_457 
        = ((0xfU & (IData)((VL_ULL(0xfffffff) & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                                (0x1fU 
                                                                 & (~ 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                     >> 1U)))) 
                                                 >> 5U)))) 
           | (0xf0U & ((IData)((VL_ULL(0xffffffff) 
                                & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                  (0x1fU 
                                                   & (~ 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                       >> 1U)))) 
                                   >> 1U))) << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
        = (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
                                         & (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
                                                   >> 2U) 
                                                  | (VL_ULL(0x3fffffffffffffff) 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154)))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26)) 
                                                   & (0U 
                                                      != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                                                     << 1U))
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
                                                & (~ 
                                                   (VL_ULL(3) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                                                       << 2U)))) 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
                                               ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
                                                  >> 1U)
                                               : VL_ULL(0)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7376(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7376\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_204 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
             & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97) 
                     & VL_GTES_III(1,2,2, 0U, (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                                >> 8U)))) 
                    & ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
                        ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                           >> 1U) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)) 
                   & (~ ((((~ ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
                                ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                                   >> 2U) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                                             >> 1U))) 
                           & ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
                               ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
                                  >> 0x19U) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
                                               >> 0x18U))) 
                          & (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
                             & ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
                                 ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
                                    >> 2U) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
                                              >> 1U))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                               & (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
                                    >> 0x1aU) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
                                                 >> 2U)) 
                                  | (0U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)))))))))) 
            << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                         & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
                            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7377(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7377\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_204 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
             & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97) 
                     & VL_GTES_III(1,2,2, 0U, (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sExp) 
                                                >> 8U)))) 
                    & ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig)
                        ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                           >> 1U) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)) 
                   & (~ ((((~ ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig)
                                ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                                   >> 2U) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                                             >> 1U))) 
                           & ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig)
                               ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
                                  >> 0x19U) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
                                               >> 0x18U))) 
                          & (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
                             & ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig)
                                 ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig 
                                    >> 2U) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig 
                                              >> 1U))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                               & (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig 
                                    >> 0x1aU) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig 
                                                 >> 2U)) 
                                  | (0U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig)))))))))) 
            << 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                         & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
                            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7378(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7378\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_isInf) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_mask 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
            ? ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__bodyValid))
                  ? 0xfU : 0U) << 4U) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__bodyValid))
                                          ? 0xfU : 0U))
            : ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_360) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_358) 
                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address)) 
                << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_360) 
                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_358) 
                               & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address))) 
                           << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_357) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_355) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address)) 
                                      << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_357) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_355) 
                                                     & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_354) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_352) 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address)) 
                                                    << 3U) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_354) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_352) 
                                                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_351) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_349) 
                                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address)) 
                                                          << 1U) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_351) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_349) 
                                                               & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__get_acquire_address)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7379(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7379\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_32 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_30))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_35 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_33))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_38 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_36))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_41 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_39))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_32 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_30))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_35 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_33))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7380(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7380\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_38 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_36))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_41 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_39))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_32 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_30))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_35 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_33))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_38 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_36))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_41 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_39))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7381(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7381\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_32 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_30))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_35 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_23) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_33))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_38 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_36))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_41 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_26) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_39))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2008 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1961) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1969)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2008 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1961) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1969)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1924 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1877) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7382(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7382\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp7183[3];
    WData/*95:0*/ __Vtemp7184[3];
    WData/*95:0*/ __Vtemp7189[3];
    WData/*95:0*/ __Vtemp7190[3];
    WData/*95:0*/ __Vtemp7195[3];
    WData/*95:0*/ __Vtemp7196[3];
    WData/*95:0*/ __Vtemp7201[3];
    WData/*95:0*/ __Vtemp7202[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1924 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1877) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1176_put 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__maybe_full)
            ? 0U : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61))
                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__freeIdx)
                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_157)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_bits_index 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__freeIdx)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_157));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
                                             >> 0xaU))));
    __Vtemp7183[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp7183[1U] = 0U;
    __Vtemp7183[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp7184, __Vtemp7183);
    __Vtemp7189[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp7189[1U] = 0U;
    __Vtemp7189[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp7190, __Vtemp7189);
    __Vtemp7195[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp7195[1U] = 0U;
    __Vtemp7195[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp7196, __Vtemp7195);
    __Vtemp7201[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_794[0U] 
                             >> 1U));
    __Vtemp7201[1U] = 0U;
    __Vtemp7201[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp7202, __Vtemp7201);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_872 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
             == ((7U == (7U & __Vtemp7184[0U])) ? 4U
                  : ((6U == (7U & __Vtemp7190[0U]))
                      ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
               == ((7U == (7U & __Vtemp7196[0U])) ? 4U
                    : ((6U == (7U & __Vtemp7202[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid) 
              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                  == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                    >> 0x13U))) ? 4U
                       : ((6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                        >> 0x13U)))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                    == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                      >> 0x13U))) ? 4U
                         : ((6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                          >> 0x13U)))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7383(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7383\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_904 
        = (0x1fffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT__inflight 
                         | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
                        & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_20)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_51 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_49))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_54 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_52))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_57 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_55))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_60 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_58))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1295 
        = ((((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                    >> 0xeU)) == ((7U == (7U & (IData)(
                                                       (VL_ULL(7) 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1217 
                                                           >> 1U)))))
                                   ? 4U : ((6U == (7U 
                                                   & (IData)(
                                                             (VL_ULL(7) 
                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1217 
                                                                 >> 1U)))))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_40)))) 
            | ((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                      >> 0xeU)) == ((7U == (7U & (IData)(
                                                         (VL_ULL(7) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1217 
                                                             >> 1U)))))
                                     ? 4U : ((6U == 
                                              (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1217 
                                                                >> 1U)))))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_40))))) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
              & (((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                         >> 0xeU)) == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_56)))) 
                 | ((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                           >> 0xeU)) == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                          ? 4U : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_56)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7384(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7384\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1295 
        = ((((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                    >> 0xeU)) == ((7U == (7U & (IData)(
                                                       (VL_ULL(7) 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1217 
                                                           >> 1U)))))
                                   ? 4U : ((6U == (7U 
                                                   & (IData)(
                                                             (VL_ULL(7) 
                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1217 
                                                                 >> 1U)))))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___GEN_40)))) 
            | ((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                      >> 0xeU)) == ((7U == (7U & (IData)(
                                                         (VL_ULL(7) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1217 
                                                             >> 1U)))))
                                     ? 4U : ((6U == 
                                              (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1217 
                                                                >> 1U)))))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___GEN_40))))) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
              & (((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                         >> 0xeU)) == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___GEN_56)))) 
                 | ((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                           >> 0xeU)) == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                          ? 4U : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___GEN_56)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7385(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7385\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_365) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_160));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_365) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_160));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool_io_alloc_ready 
        = ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)) 
             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_365) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_160))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_135))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_148));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_161 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_160));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2051 
        = (0xffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2042))
                     ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2015) 
                                    << 1U)))) : (2U 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2015) 
                                                    << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_280 
        = ((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_1_ext_RW0_rdata[0U]) 
           == (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_paddr 
                           >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_283 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_1_ext_RW0_rdata[1U] 
                         << 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_1_ext_RW0_rdata[0U] 
                                     >> 0x16U))) == 
           (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_paddr 
                        >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_286 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_1_ext_RW0_rdata[2U] 
                         << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_1_ext_RW0_rdata[1U] 
                                      >> 0xcU))) == 
           (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_paddr 
                        >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_289 
        = ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_1_ext_RW0_rdata[2U] 
                        >> 2U)) == (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_paddr 
                                                >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2117 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__real_hits) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2113)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7386(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7386\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2133 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__real_hits) 
                  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2129)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2154 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__real_hits) 
                  >> 6U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2150)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2177 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2164) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2173));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1044 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_992) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1000)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1044 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_992) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1000)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_1078 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_1013)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_933 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_862 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_859) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_859)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1911 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1859) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1867)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1911 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1859) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1867)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1911 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1859) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1867)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_964 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_961) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_961)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1827 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1775) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1783)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7387(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7387\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp7241[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1827 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1775) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1827 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1775) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1783)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1066 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1063) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1063)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_247 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_intExceptionFlags) 
                  >> 2U) | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__invalidExc)) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_overflow))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_38 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_34) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_34)));
    __Vtemp7241[0U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                        ? 0x200000U : ((0x400000U & 
                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                        ? 0x400000U
                                        : ((0x800000U 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                            ? 0x800000U
                                            : ((0x1000000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                ? 0x1000000U
                                                : (
                                                   (0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0x2000000U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                     ? 0x4000000U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                      ? 0x8000000U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                       ? 0x10000000U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                        ? 0x20000000U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                         ? 0x40000000U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                          ? 0x80000000U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_370[0U])))))))))));
    __Vtemp7241[1U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                        ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                 ? 0U : ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                          ? 0U : ((0x1000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                       ? 0U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_370[1U])))))))))));
    __Vtemp7241[2U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                        ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                 ? 0U : ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                          ? 0U : ((0x1000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                       ? 0U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_370[2U])))))))))));
    __Vtemp7241[3U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                        ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                 ? 0U : ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                          ? 0U : ((0x1000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                       ? 0U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_370[3U])))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_387[0U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
            ? 0x8000U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                          ? 0x10000U : ((0x20000U & 
                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                         ? 0x20000U
                                         : ((0x40000U 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                             ? 0x40000U
                                             : ((0x80000U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                 ? 0x80000U
                                                 : 
                                                ((0x100000U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                  ? 0x100000U
                                                  : 
                                                 __Vtemp7241[0U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_387[1U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
            ? 0U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                     ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                              ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                       ? 0U : ((0x80000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                ? 0U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp7241[1U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_387[2U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
            ? 0U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                     ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                              ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                       ? 0U : ((0x80000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                ? 0U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp7241[2U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_387[3U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
            ? 0U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                     ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                              ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                       ? 0U : ((0x80000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                ? 0U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_202[0U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp7241[3U]))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7388(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7388\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_39 
        = (((IData)((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_23) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_27) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_31) 
                                        >> 2U)))) << 1U) 
                 | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_35) 
                          >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
        = ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
                                      << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)) 
           & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)
            ? (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7389(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7389\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1195 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1175) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                          << 0x1cU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                            >> 4U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                         << 0x18U) 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                           >> 8U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                        << 0x14U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                        >> 0xcU))) 
                                   ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                       << 0x10U) | 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                       >> 0x10U))) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                                  >> 0x14U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                     << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                               >> 0x18U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                    << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x19U] 
                                              >> 0x1cU))) 
                               ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU]) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                  << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                               >> 4U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                 << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                              >> 8U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                             >> 0xcU))) 
                           ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                            >> 0x10U))) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                          >> 0x14U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                             << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                       >> 0x18U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1aU] 
                                      >> 0x1cU))) ^ 
                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU]) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1cU] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                       >> 4U))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1cU] 
                                                    << 0x18U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                                      >> 8U))) 
                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1cU] 
                        << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                     >> 0xcU))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1cU] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x1bU] 
                                                      >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7390(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7390\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1195 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1175) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                          << 0x1cU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                            >> 4U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                         << 0x18U) 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                           >> 8U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                        << 0x14U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                        >> 0xcU))) 
                                   ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                       << 0x10U) | 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                       >> 0x10U))) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                                  >> 0x14U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                     << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                               >> 0x18U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                    << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x19U] 
                                              >> 0x1cU))) 
                               ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU]) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                  << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                               >> 4U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                 << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                              >> 8U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                             >> 0xcU))) 
                           ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                            >> 0x10U))) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                          >> 0x14U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                             << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                       >> 0x18U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1aU] 
                                      >> 0x1cU))) ^ 
                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU]) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1cU] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                       >> 4U))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1cU] 
                                                    << 0x18U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                                      >> 8U))) 
                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1cU] 
                        << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                     >> 0xcU))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1cU] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x1bU] 
                                                      >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7391(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7391\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_grant) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_38 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_6) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_37));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_70 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_6) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_37));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__delegate 
        = ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
           & ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause 
                             >> 0x3fU))) ? (IData)(
                                                   ((0x3fU 
                                                     >= 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
                                                     ? 
                                                    ((VL_ULL(0x222) 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mideleg) 
                                                     >> 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
                                                     : VL_ULL(0)))
               : (IData)(((0x3fU >= (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
                           ? ((VL_ULL(0xb15d) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_medeleg) 
                              >> (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause)))
                           : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt 
        = ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause 
                    >> 0x3fU)) & (0xeU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger 
        = ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause 
                       >> 0x3fU))) & (0xeU == (0xffU 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__cause))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7392(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7392\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst 
        = ((1U & ((3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
                  - (IData)(1U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_speculative) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_cacheable) 
                  & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                                >> 3U)))))) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_predictReturn 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971)) 
           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_prevRVI) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rviReturn)) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_valid) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rvcReturn))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rviBits))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_valid) 
              & (0xa001U == (0xe003U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_315 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x63U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rviBits))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rvcBranch)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_321 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_316) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_valid)) 
           & (3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7393(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7393\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp7256[4];
    WData/*191:0*/ __Vtemp7257[6];
    WData/*191:0*/ __Vtemp7258[6];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_taken 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_prevRVI) 
            & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rviBits)) 
                | (0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rviBits))) 
               | ((0x63U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rviBits)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_valid) 
              & ((((0xa001U == (0xe003U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rvcJALR)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rvcJR)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_rvcBranch) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__taken_valid) 
           & (3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_pc 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc);
    __Vtemp7256[0U] = ((0xffff0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data));
    __Vtemp7256[1U] = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data;
    __Vtemp7256[2U] = (IData)((((QData)((IData)(((0xffff0000U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                              >> 0x30U)) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                               >> 0x30U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                                          >> 0x30U)) 
                                                                 << 0x10U)) 
                                                             | (0xffffU 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                                           >> 0x30U))))))));
    __Vtemp7256[3U] = (IData)(((((QData)((IData)(((0xffff0000U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                               >> 0x30U)) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                                >> 0x30U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0xffff0000U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                                           >> 0x30U)) 
                                                                  << 0x10U)) 
                                                              | (0xffffU 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_49 
                                                                            >> 0x30U))))))) 
                               >> 0x20U));
    VL_EXTEND_WW(191,128, __Vtemp7257, __Vtemp7256);
    VL_SHIFTL_WWI(191,191,6, __Vtemp7258, __Vtemp7257, 
                  (0x30U & ((((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
                             - (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                              >> 1U)))) 
                            << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_59 
        = (__Vtemp7258[2U] & (IData)((VL_ULL(0x7fffffffffffffff) 
                                      & (VL_ULL(0xffffffff) 
                                         << ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                             << 4U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_425 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_401));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_440 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421) 
               >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_284));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_438 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_266));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_439 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_275));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_557 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_533));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_279 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_529))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553) 
                        >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_610_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_288 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_529))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553) 
                        >> 2U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_610_2))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_270 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_529))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553))
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_610_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_572 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553) 
               >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_286));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_570 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_268));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_571 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_553) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_277));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8)) 
            | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__empty)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_grant_safe)))
            ? (0xffU & ((IData)(1U) << (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70))))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_request 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_397) 
            << 0xbU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_374) 
                         << 0xaU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_351) 
                                      << 9U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_328) 
                                                 << 8U) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_305) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_282) 
                                                       << 6U) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_402)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7396(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7396\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp7260[16];
    WData/*511:0*/ __Vtemp7261[16];
    WData/*511:0*/ __Vtemp7262[16];
    WData/*511:0*/ __Vtemp7263[16];
    WData/*511:0*/ __Vtemp7264[16];
    // Body
    VL_SHIFTR_WWI(512,512,7, __Vtemp7260, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                            >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0U] 
        = __Vtemp7260[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[1U] 
        = __Vtemp7260[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[2U] 
        = __Vtemp7260[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[3U] 
        = __Vtemp7260[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[4U] 
        = __Vtemp7260[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[5U] 
        = __Vtemp7260[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[6U] 
        = __Vtemp7260[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[7U] 
        = __Vtemp7260[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[8U] 
        = __Vtemp7260[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[9U] 
        = __Vtemp7260[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0xaU] 
        = __Vtemp7260[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0xbU] 
        = __Vtemp7260[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0xcU] 
        = __Vtemp7260[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0xdU] 
        = __Vtemp7260[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0xeU] 
        = __Vtemp7260[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_108[0xfU] 
        = __Vtemp7260[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_109 
        = ((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U]) 
           == (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                           >> 0xcU)));
    VL_SHIFTR_WWI(512,512,7, __Vtemp7261, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x40U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                     >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0U] 
        = __Vtemp7261[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[1U] 
        = __Vtemp7261[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[2U] 
        = __Vtemp7261[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[3U] 
        = __Vtemp7261[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[4U] 
        = __Vtemp7261[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[5U] 
        = __Vtemp7261[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[6U] 
        = __Vtemp7261[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[7U] 
        = __Vtemp7261[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[8U] 
        = __Vtemp7261[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[9U] 
        = __Vtemp7261[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0xaU] 
        = __Vtemp7261[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0xbU] 
        = __Vtemp7261[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0xcU] 
        = __Vtemp7261[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0xdU] 
        = __Vtemp7261[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0xeU] 
        = __Vtemp7261[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_112[0xfU] 
        = __Vtemp7261[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_113 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
                         << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
                                     >> 0x14U))) == 
           (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                        >> 0xcU)));
    VL_SHIFTR_WWI(512,512,8, __Vtemp7262, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x80U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                     >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0U] 
        = __Vtemp7262[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[1U] 
        = __Vtemp7262[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[2U] 
        = __Vtemp7262[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[3U] 
        = __Vtemp7262[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[4U] 
        = __Vtemp7262[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[5U] 
        = __Vtemp7262[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[6U] 
        = __Vtemp7262[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[7U] 
        = __Vtemp7262[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[8U] 
        = __Vtemp7262[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[9U] 
        = __Vtemp7262[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0xaU] 
        = __Vtemp7262[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0xbU] 
        = __Vtemp7262[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0xcU] 
        = __Vtemp7262[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0xdU] 
        = __Vtemp7262[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0xeU] 
        = __Vtemp7262[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_116[0xfU] 
        = __Vtemp7262[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_117 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
                         << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
                                      >> 8U))) == (0xfffffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                                      >> 0xcU)));
    VL_SHIFTR_WWI(512,512,8, __Vtemp7263, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0xc0U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                     >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0U] 
        = __Vtemp7263[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[1U] 
        = __Vtemp7263[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[2U] 
        = __Vtemp7263[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[3U] 
        = __Vtemp7263[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[4U] 
        = __Vtemp7263[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[5U] 
        = __Vtemp7263[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[6U] 
        = __Vtemp7263[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[7U] 
        = __Vtemp7263[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[8U] 
        = __Vtemp7263[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[9U] 
        = __Vtemp7263[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0xaU] 
        = __Vtemp7263[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0xbU] 
        = __Vtemp7263[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0xcU] 
        = __Vtemp7263[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0xdU] 
        = __Vtemp7263[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0xeU] 
        = __Vtemp7263[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_120[0xfU] 
        = __Vtemp7263[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_121 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
                         << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
                                   >> 0x1cU))) == (0xfffffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                                      >> 0xcU)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp7264, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x100U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                      >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0U] 
        = __Vtemp7264[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[1U] 
        = __Vtemp7264[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[2U] 
        = __Vtemp7264[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[3U] 
        = __Vtemp7264[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[4U] 
        = __Vtemp7264[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[5U] 
        = __Vtemp7264[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[6U] 
        = __Vtemp7264[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[7U] 
        = __Vtemp7264[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[8U] 
        = __Vtemp7264[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[9U] 
        = __Vtemp7264[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0xaU] 
        = __Vtemp7264[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0xbU] 
        = __Vtemp7264[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0xcU] 
        = __Vtemp7264[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0xdU] 
        = __Vtemp7264[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0xeU] 
        = __Vtemp7264[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_124[0xfU] 
        = __Vtemp7264[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_125 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[3U] 
                         << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
                                      >> 0x10U))) == 
           (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                        >> 0xcU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7397(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7397\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp7265[16];
    WData/*511:0*/ __Vtemp7266[16];
    WData/*511:0*/ __Vtemp7267[16];
    // Body
    VL_SHIFTR_WWI(512,512,9, __Vtemp7265, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x140U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                      >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0U] 
        = __Vtemp7265[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[1U] 
        = __Vtemp7265[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[2U] 
        = __Vtemp7265[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[3U] 
        = __Vtemp7265[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[4U] 
        = __Vtemp7265[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[5U] 
        = __Vtemp7265[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[6U] 
        = __Vtemp7265[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[7U] 
        = __Vtemp7265[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[8U] 
        = __Vtemp7265[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[9U] 
        = __Vtemp7265[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0xaU] 
        = __Vtemp7265[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0xbU] 
        = __Vtemp7265[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0xcU] 
        = __Vtemp7265[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0xdU] 
        = __Vtemp7265[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0xeU] 
        = __Vtemp7265[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_128[0xfU] 
        = __Vtemp7265[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_129 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[4U] 
                         << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[3U] 
                                      >> 4U))) == (0xfffffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                                      >> 0xcU)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp7266, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x180U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                      >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0U] 
        = __Vtemp7266[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[1U] 
        = __Vtemp7266[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[2U] 
        = __Vtemp7266[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[3U] 
        = __Vtemp7266[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[4U] 
        = __Vtemp7266[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[5U] 
        = __Vtemp7266[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[6U] 
        = __Vtemp7266[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[7U] 
        = __Vtemp7266[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[8U] 
        = __Vtemp7266[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[9U] 
        = __Vtemp7266[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0xaU] 
        = __Vtemp7266[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0xbU] 
        = __Vtemp7266[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0xcU] 
        = __Vtemp7266[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0xdU] 
        = __Vtemp7266[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0xeU] 
        = __Vtemp7266[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_132[0xfU] 
        = __Vtemp7266[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_133 
        = ((0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[4U] 
                         << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[3U] 
                                   >> 0x18U))) == (0xfffffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                                      >> 0xcU)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp7267, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x1c0U | (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                      >> 6U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0U] 
        = __Vtemp7267[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[1U] 
        = __Vtemp7267[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[2U] 
        = __Vtemp7267[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[3U] 
        = __Vtemp7267[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[4U] 
        = __Vtemp7267[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[5U] 
        = __Vtemp7267[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[6U] 
        = __Vtemp7267[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[7U] 
        = __Vtemp7267[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[8U] 
        = __Vtemp7267[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[9U] 
        = __Vtemp7267[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0xaU] 
        = __Vtemp7267[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0xbU] 
        = __Vtemp7267[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0xcU] 
        = __Vtemp7267[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0xdU] 
        = __Vtemp7267[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0xeU] 
        = __Vtemp7267[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_136[0xfU] 
        = __Vtemp7267[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_137 
        = ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[4U] 
                        >> 0xcU)) == (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_io_s1_paddr 
                                                  >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb_io_resp_miss 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__resp_valid_1) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__multipleHits));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7398(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7398\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7399(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7399\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7400(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7400\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_48) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_46) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_48) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_46) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_45) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_43) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_45) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_43) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_42) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_40) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_42) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_40) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_39) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_37) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_39) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_37) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                                                   >> 9U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7401(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7401\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp7270[9];
    WData/*287:0*/ __Vtemp7271[9];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_21 
        = ((0x13U == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                               >> 9U))) ? 0x13U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_20));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id 
        = ((0x13U == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                               >> 9U))) ? 0x13U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_20));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_8 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_46)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_50)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_46)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_50));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_46)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_50));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_53 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_46)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_158 
        = ((0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_143))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_current_saw_branch_not_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_151 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_149) 
           & (4U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f1_redirect_idx)));
    VL_EXTEND_WI(259,4, __Vtemp7270, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7271, __Vtemp7270, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_913[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7271[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_913[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7271[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_913[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                            ? __Vtemp7271[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[2U])));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7402(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7402\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp7283[9];
    WData/*287:0*/ __Vtemp7284[9];
    WData/*287:0*/ __Vtemp7296[9];
    WData/*287:0*/ __Vtemp7297[9];
    WData/*287:0*/ __Vtemp7309[9];
    WData/*287:0*/ __Vtemp7310[9];
    // Body
    VL_EXTEND_WI(259,4, __Vtemp7283, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7284, __Vtemp7283, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_916[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7284[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_916[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7284[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_916[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_sizes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
                            ? __Vtemp7284[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_818)
            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data))
            : 0U);
    VL_EXTEND_WI(259,4, __Vtemp7296, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7297, __Vtemp7296, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_913[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7297[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_913[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7297[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_913[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                            ? __Vtemp7297[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7309, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size___05FT_15_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7310, __Vtemp7309, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7310[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                ? __Vtemp7310[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_916[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_sizes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
                            ? __Vtemp7310[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[2U])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_818)
            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data))
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_110 
        = ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_101[1U])) 
           | (VL_ULL(0xffffffff00000000) & ((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_101[0U])) 
                                            << 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_352 
        = ((0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_337))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_current_saw_branch_not_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_345 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_343) 
           & (4U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f2_redirect_idx)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_587 
        = ((0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_581) 
                        >> 1U) | (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_581) 
                                            >> 5U)))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_574) 
              << 7U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_104 
        = ((0x68U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x100000048010000)
            : ((0x67U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x3000000)
                : ((0x66U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x40420f0035010000)
                    : ((0x65U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x400000003000000)
                        : ((0x64U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x79616b6f) : 
                           ((0x63U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                             ? VL_ULL(0x2e01000005000000)
                             : ((0x62U == (0x1ffU & 
                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                                 ? VL_ULL(0x300000008000000)
                                 : ((0x61U == (0x1ffU 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 3U)))
                                     ? VL_ULL(0x1d01000004000000)
                                     : ((0x60U == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                         ? VL_ULL(0x300000000006364)
                                         : ((0x5fU 
                                             == (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                             ? VL_ULL(0x66616d6934367672)
                                             : ((0x5eU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                                 ? VL_ULL(0x130100000b000000)
                                                 : 
                                                ((0x5dU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                                  ? VL_ULL(0x300000000000000)
                                                  : 
                                                 ((0x5cU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 3U)))
                                                   ? VL_ULL(0xf01000004000000)
                                                   : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_91)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp7321[8];
    WData/*255:0*/ __Vtemp7322[8];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_136 
        = ((0x33U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_126) 
                     >> 2U)) | (0xccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_126) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
        = (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
                                         & (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_23_sig 
                                                   >> 2U) 
                                                  | (VL_ULL(0x3fffffffffffffff) 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154)))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_26)) 
                                                   & (0U 
                                                      != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                                                     << 1U))
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_23_sig 
                                                & (~ 
                                                   (VL_ULL(3) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
                                                       << 2U)))) 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_26)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
                                               ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    VL_EXTEND_WW(236,109, __Vtemp7321, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(236,236,7, __Vtemp7322, __Vtemp7321, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[0U] 
        = __Vtemp7322[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U] 
        = __Vtemp7322[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U] 
        = __Vtemp7322[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[3U] 
        = __Vtemp7322[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[4U] 
        = __Vtemp7322[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[5U] 
        = __Vtemp7322[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[6U] 
        = __Vtemp7322[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[7U] 
        = (0xfffU & __Vtemp7322[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_457 
        = ((0xfU & (IData)((VL_ULL(0xfffffff) & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                                (0x1fU 
                                                                 & (~ 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                     >> 1U)))) 
                                                 >> 5U)))) 
           | (0xf0U & ((IData)((VL_ULL(0xffffffff) 
                                & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                  (0x1fU 
                                                   & (~ 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                       >> 1U)))) 
                                   >> 1U))) << 4U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
        = ((0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U)))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
               ? ((7U == (7U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_111)))))
               : ((0U != (7U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_111)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | (0xffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_23_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
                                                   >> 0x18U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__toint 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_wflags)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_ren2)
                ? ((QData)((IData)((0U != ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_rm)) 
                                           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp_io_lt) 
                                               << 1U) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__ordered) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__bothZeros) 
                                                    | (((1U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in1[2U]) 
                                                        == 
                                                        (1U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in2[2U])) 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__bothInfs) 
                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__common_eqMags)))))))))) 
                   | ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__store 
                                       >> 0x20U))) 
                      << 0x20U)) : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_typ))
                                     ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__RecFNToIN_io_out
                                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT___T_247)
                                         ? (((QData)((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__RecFNToIN_io_out 
                                                              >> 0x20U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((1U 
                                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_typ))) 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT___T_239)) 
                                                                << 0x1fU) 
                                                               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT___T_239)
                                                                   ? 0U
                                                                   : 0x7fffffffU)))))
                                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__RecFNToIN_io_out)))
            : ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_rm))
                ? ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT___T_212)) 
                   | ((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__store 
                                       >> 0x20U))) 
                      << 0x20U)) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__store));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7406(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7406\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm))) 
                           & (0U != (2U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                          | ((((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                              | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                >> 2U))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                     & (0U != (2U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))))
                                    ? 1U : 0U))) : 
                         ((0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                         >> 2U)) | 
                          (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                            ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7407(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7407\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT___T_40 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                          | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm))) 
                                         & (0U != (VL_ULL(2) 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                        | ((((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                            | ((3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                  >> 2U))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                                   & (0U 
                                                      != 
                                                      (VL_ULL(2) 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (VL_ULL(1) 
                                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))))
                                                  ? VL_ULL(1)
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                                               ? VL_ULL(1)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_125 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & (VL_EXTENDS_II(14,13, 
                                                             (0xfffU 
                                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_out_wdata_double[2U] 
                                                                  << 0xcU) 
                                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_out_wdata_double[1U] 
                                                                    >> 0x14U)))) 
                                               - (IData)(0x700U)))) 
                      + VL_EXTENDS_II(15,14, (3U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
                                               >> 0x18U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7408(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7408\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__alu__DOT___T_85 
        = ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__alu__DOT___T_75 
                                          >> 2U)) | 
           (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__alu__DOT___T_75 
                                          << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_uop_lrs2_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_148)
                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_uop_lrs1_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_149)
                        ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_uop_uopc 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_149)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7409(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7409\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10__DOT__br_offset 
        = ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                      << 4U)) | ((0x7e0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                            >> 0x14U)) 
                                 | (0x1eU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                             >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_out_is_call 
        = (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst)) 
            | (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst))) 
           & (1U == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                              >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_out_is_ret 
        = (((0x67U == (0x707fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst)) 
            & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                               >> 0xfU)))) & (0U == 
                                              (0x1fU 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                                  >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10__DOT___T_65 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst)
              ? 0xfffffU : 0U) << 0xcU) | ((0x800U 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                                    >> 7U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10__DOT___T_85 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst)
              ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst) 
                                          | ((0x800U 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                                 >> 9U)) 
                                             | ((0x7e0U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst 
                                                      >> 0x14U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7410(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7410\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_10_io_inst)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(0xc) 
                                       + ((~ (VL_ULL(7) 
                                              | (~ 
                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                                 [0U]))) 
                                          + (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9__DOT___T_65 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9__DOT___T_65))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(0xc) 
                                       + ((~ (VL_ULL(7) 
                                              | (~ 
                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                                 [0U]))) 
                                          + (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9__DOT___T_85 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9__DOT___T_85)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9_io_out_cfi_type 
        = ((0x67U == (0x707fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9_io_inst))
            ? 3U : ((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9_io_inst))
                     ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_9__DOT__bpd_csignals_0)
                              ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(0xa) 
                                       + ((~ (VL_ULL(7) 
                                              | (~ 
                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                                 [0U]))) 
                                          + (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8__DOT___T_65 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8__DOT___T_65))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(0xa) 
                                       + ((~ (VL_ULL(7) 
                                              | (~ 
                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                                 [0U]))) 
                                          + (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8__DOT___T_85 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8__DOT___T_85)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7411(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7411\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8_io_out_cfi_type 
        = ((0x67U == (0x707fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8_io_inst))
            ? 3U : ((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8_io_inst))
                     ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_8__DOT__bpd_csignals_0)
                              ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_6_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_6__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(8) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_6__DOT___T_65 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_6__DOT___T_65))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(8) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_6__DOT___T_85 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_6__DOT___T_85)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_7_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_7__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(6) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_7__DOT___T_65 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_7__DOT___T_65))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(6) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_7__DOT___T_85 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_7__DOT___T_85)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7412(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7412\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5__DOT__br_offset 
        = ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                      << 4U)) | ((0x7e0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                            >> 0x14U)) 
                                 | (0x1eU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                             >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5__DOT___T_65 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst)
              ? 0xfffffU : 0U) << 0xcU) | ((0x800U 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                                    >> 7U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5__DOT___T_85 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst)
              ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst) 
                                          | ((0x800U 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                                 >> 9U)) 
                                             | ((0x7e0U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst 
                                                      >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_5_io_inst)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4__DOT__br_offset 
        = ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                      << 4U)) | ((0x7e0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                            >> 0x14U)) 
                                 | (0x1eU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                             >> 7U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7413(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7413\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4__DOT___T_65 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst)
              ? 0xfffffU : 0U) << 0xcU) | ((0x800U 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                                    >> 7U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4__DOT___T_85 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst)
              ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst) 
                                          | ((0x800U 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                                 >> 9U)) 
                                             | ((0x7e0U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst 
                                                      >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_4_io_inst)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(4) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3__DOT___T_65 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3__DOT___T_65))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(4) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3__DOT___T_85 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3__DOT___T_85)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7414(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7414\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3_io_out_cfi_type 
        = ((0x67U == (0x707fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3_io_inst))
            ? 3U : ((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3_io_inst))
                     ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_3__DOT__bpd_csignals_0)
                              ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(2) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2__DOT___T_65 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2__DOT___T_65))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(2) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                               [0U]))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2__DOT___T_85 
                                                                              >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2__DOT___T_85)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2_io_out_cfi_type 
        = ((0x67U == (0x707fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2_io_inst))
            ? 3U : ((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2_io_inst))
                     ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_2__DOT__bpd_csignals_0)
                              ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_1_io_out_target 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_1__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & ((~ (VL_ULL(7) 
                                           | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                              [0U]))) 
                                       + (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_1__DOT___T_65 
                                                                             >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_1__DOT___T_65)))))
            : (VL_ULL(0xfffffffffe) & ((~ (VL_ULL(7) 
                                           | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc
                                              [0U]))) 
                                       + (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_1__DOT___T_85 
                                                                             >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_1__DOT___T_85))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7415(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7415\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode__DOT__br_offset 
        = ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                      << 4U)) | ((0x7e0U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                            >> 0x14U)) 
                                 | (0x1eU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                             >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode__DOT___T_65 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst)
              ? 0xfffffU : 0U) << 0xcU) | ((0x800U 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                                    >> 7U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode__DOT___T_85 
        = ((((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst)
              ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst) 
                                          | ((0x800U 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                                 >> 9U)) 
                                             | ((0x7e0U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst 
                                                      >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__BranchDecode_io_inst)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7416(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7416\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_594 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_request) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_585)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT___T_210 
        = (((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_31_cfi_idx_bits)
             : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_30_cfi_idx_bits)
                 : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_29_cfi_idx_bits)
                     : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_28_cfi_idx_bits)
                         : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_27_cfi_idx_bits)
                             : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_26_cfi_idx_bits)
                                 : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_25_cfi_idx_bits)
                                     : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_24_cfi_idx_bits)
                                         : ((0x17U 
                                             == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_23_cfi_idx_bits)
                                             : ((0x16U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_ftq_idx))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ram_22_cfi_idx_bits)
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_1616))))))))))) 
           == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT___T_208) 
                     >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7417(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7417\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_85975 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2242) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__r_xcpt_val));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_7155 
        = ((0x1aU == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                               >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F26)
            : ((0x19U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                   >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F25)
                : ((0x18U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                       >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F24)
                    : ((0x17U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                           >> 2U)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F23)
                        : ((0x16U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                               >> 2U)))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F22)
                            : ((0x15U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                   >> 2U)))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F21)
                                : ((0x14U == (0x1fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                 >> 2U)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F20)
                                    : ((0x13U == (0x1fU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                     >> 2U)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F19)
                                        : ((0x12U == 
                                            (0x1fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                >> 2U)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F18)
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                    >> 2U)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                        >> 2U)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                         >> 2U)))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                          >> 2U)))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe___05F14)
                                                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_7142))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7418(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7418\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_35810 
        = ((0x1aU == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                               >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_26)
            : ((0x19U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                   >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_25)
                : ((0x18U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                       >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_24)
                    : ((0x17U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                           >> 2U)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_23)
                        : ((0x16U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                               >> 2U)))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_22)
                            : ((0x15U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                   >> 2U)))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_21)
                                : ((0x14U == (0x1fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                 >> 2U)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_20)
                                    : ((0x13U == (0x1fU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                     >> 2U)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_19)
                                        : ((0x12U == 
                                            (0x1fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                >> 2U)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_18)
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                    >> 2U)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                        >> 2U)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                         >> 2U)))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                          >> 2U)))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_1_14)
                                                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_35797))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7419(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7419\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_64465 
        = ((0x1aU == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                               >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_26)
            : ((0x19U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                   >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_25)
                : ((0x18U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                       >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_24)
                    : ((0x17U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                           >> 2U)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_23)
                        : ((0x16U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                               >> 2U)))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_22)
                            : ((0x15U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                   >> 2U)))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_21)
                                : ((0x14U == (0x1fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                 >> 2U)))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_20)
                                    : ((0x13U == (0x1fU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                     >> 2U)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_19)
                                        : ((0x12U == 
                                            (0x1fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                >> 2U)))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_18)
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                    >> 2U)))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                        >> 2U)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                         >> 2U)))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx) 
                                                          >> 2U)))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_unsafe_2_14)
                                                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_64452))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_475 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_addr_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_addr_is_virtual));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_476 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_addr_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_addr_is_virtual));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_477 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_addr_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_addr_is_virtual));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_478 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_addr_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_addr_is_virtual));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___T_47 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn 
            << 9U) | (QData)((IData)((0x1ffU & ((3U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__count))
                                                 ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_req_addr
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__count))
                                                  ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_req_addr
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__count))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_req_addr 
                                                   >> 9U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__r_req_addr 
                                                   >> 0x12U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__hella_state 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__hella_state;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu_io_req_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_valids_1) 
           & (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_fu_code)) 
               | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_fu_code))) 
              | ((0x20U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_fu_code)) 
                 & (0x6cU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_uopc)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu_io_req_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_valids_2) 
           & (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_fu_code)) 
               | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_fu_code))) 
              | ((0x20U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_fu_code)) 
                 & (0x6cU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4943 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x17U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4898 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x16U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4853 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_21_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x15U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4808 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_20_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x14U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4763 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_19_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x13U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4718 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_18_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x12U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4673 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_17_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x11U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4628 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_16_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0x10U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4583 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_15_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0xfU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4538 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_14_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0xeU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4493 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_13_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0xdU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4448 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_12_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0xcU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4403 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_11_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0xbU));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7424(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7424\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4358 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_10_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 0xaU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4313 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_9_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 9U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4268 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_8_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 8U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4223 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_7_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 7U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4178 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_6_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 6U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4133 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_5_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 5U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4088 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_4_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 4U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4043 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_3_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 3U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3998 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_2_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3953 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_1_valid)) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
              >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3908 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_0_valid)) 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7426(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7426\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86069 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_pdst)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_pdst)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85883)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86084 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_mem_signed)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_mem_signed)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85898)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86083 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_mem_size)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_mem_size)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85897)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86087 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_is_amo)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_is_amo)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85901)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86089 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_uses_stq)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_uses_stq)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85903)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7427(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7427\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86065 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_rob_idx)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_rob_idx)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85879)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86099 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_dst_rtype)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_dst_rtype)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85913)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_86057 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_br_mask)
            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_br_mask)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_85871)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3840 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3839) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3816));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3756 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3755) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3732));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3671) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3648));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3588 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3587) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3564));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3504 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3503) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3480));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3420 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3419) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3396));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3336 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3335) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3312));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3252 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3251) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3228));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3168 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3167) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3144));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3084 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3083) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3060));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3000 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2999) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2976));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2916 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2915) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2892));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2832 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2831) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2808));
}
