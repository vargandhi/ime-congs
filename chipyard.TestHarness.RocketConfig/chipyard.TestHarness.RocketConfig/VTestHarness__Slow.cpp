// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VTestHarness) {
    VTestHarness__Syms* __restrict vlSymsp = __VlSymsp = new VTestHarness__Syms(this, name());
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, VTestHarness___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestHarness::__Vconfigure(VTestHarness__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

VTestHarness::~VTestHarness() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VTestHarness::_initial__TOP__1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp1[5];
    WData/*159:0*/ __Vtemp2[5];
    WData/*159:0*/ __Vtemp3[5];
    WData/*159:0*/ __Vtemp4[5];
    WData/*159:0*/ __Vtemp5[5];
    WData/*159:0*/ __Vtemp6[5];
    WData/*159:0*/ __Vtemp7[5];
    WData/*159:0*/ __Vtemp8[5];
    WData/*159:0*/ __Vtemp9[5];
    WData/*159:0*/ __Vtemp10[5];
    WData/*159:0*/ __Vtemp11[5];
    WData/*159:0*/ __Vtemp12[5];
    // Body
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp1),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp2),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp3),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp4),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp5[0U] = 0x743d2564U;
    __Vtemp5[1U] = 0x6d656f75U;
    __Vtemp5[2U] = 0x6b5f7469U;
    __Vtemp5[3U] = 0x656c696eU;
    __Vtemp5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp5),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp6[0U] = 0x743d2564U;
    __Vtemp6[1U] = 0x6d656f75U;
    __Vtemp6[2U] = 0x6b5f7469U;
    __Vtemp6[3U] = 0x656c696eU;
    __Vtemp6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp6),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp7[0U] = 0x743d2564U;
    __Vtemp7[1U] = 0x6d656f75U;
    __Vtemp7[2U] = 0x6b5f7469U;
    __Vtemp7[3U] = 0x656c696eU;
    __Vtemp7[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp7),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp8[0U] = 0x743d2564U;
    __Vtemp8[1U] = 0x6d656f75U;
    __Vtemp8[2U] = 0x6b5f7469U;
    __Vtemp8[3U] = 0x656c696eU;
    __Vtemp8[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp8),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp9[0U] = 0x743d2564U;
    __Vtemp9[1U] = 0x6d656f75U;
    __Vtemp9[2U] = 0x6b5f7469U;
    __Vtemp9[3U] = 0x656c696eU;
    __Vtemp9[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp9),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp10[0U] = 0x743d2564U;
    __Vtemp10[1U] = 0x6d656f75U;
    __Vtemp10[2U] = 0x6b5f7469U;
    __Vtemp10[3U] = 0x656c696eU;
    __Vtemp10[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp10),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp11[0U] = 0x743d2564U;
    __Vtemp11[1U] = 0x6d656f75U;
    __Vtemp11[2U] = 0x6b5f7469U;
    __Vtemp11[3U] = 0x656c696eU;
    __Vtemp11[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp11),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp12[0U] = 0x743d2564U;
    __Vtemp12[1U] = 0x6d656f75U;
    __Vtemp12[2U] = 0x6b5f7469U;
    __Vtemp12[3U] = 0x656c696eU;
    __Vtemp12[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp12),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__2(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__2\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp13[5];
    WData/*159:0*/ __Vtemp14[5];
    WData/*159:0*/ __Vtemp15[5];
    WData/*159:0*/ __Vtemp16[5];
    WData/*159:0*/ __Vtemp17[5];
    WData/*159:0*/ __Vtemp18[5];
    WData/*159:0*/ __Vtemp19[5];
    WData/*159:0*/ __Vtemp20[5];
    WData/*159:0*/ __Vtemp21[5];
    WData/*159:0*/ __Vtemp22[5];
    WData/*159:0*/ __Vtemp23[5];
    WData/*159:0*/ __Vtemp24[5];
    // Body
    __Vtemp13[0U] = 0x743d2564U;
    __Vtemp13[1U] = 0x6d656f75U;
    __Vtemp13[2U] = 0x6b5f7469U;
    __Vtemp13[3U] = 0x656c696eU;
    __Vtemp13[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp13),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp14[0U] = 0x743d2564U;
    __Vtemp14[1U] = 0x6d656f75U;
    __Vtemp14[2U] = 0x6b5f7469U;
    __Vtemp14[3U] = 0x656c696eU;
    __Vtemp14[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp14),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp15[0U] = 0x743d2564U;
    __Vtemp15[1U] = 0x6d656f75U;
    __Vtemp15[2U] = 0x6b5f7469U;
    __Vtemp15[3U] = 0x656c696eU;
    __Vtemp15[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp15),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp16[0U] = 0x743d2564U;
    __Vtemp16[1U] = 0x6d656f75U;
    __Vtemp16[2U] = 0x6b5f7469U;
    __Vtemp16[3U] = 0x656c696eU;
    __Vtemp16[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp16),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp17[0U] = 0x743d2564U;
    __Vtemp17[1U] = 0x6d656f75U;
    __Vtemp17[2U] = 0x6b5f7469U;
    __Vtemp17[3U] = 0x656c696eU;
    __Vtemp17[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp17),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp18[0U] = 0x743d2564U;
    __Vtemp18[1U] = 0x6d656f75U;
    __Vtemp18[2U] = 0x6b5f7469U;
    __Vtemp18[3U] = 0x656c696eU;
    __Vtemp18[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp18),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp19[0U] = 0x743d2564U;
    __Vtemp19[1U] = 0x6d656f75U;
    __Vtemp19[2U] = 0x6b5f7469U;
    __Vtemp19[3U] = 0x656c696eU;
    __Vtemp19[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp19),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp20[0U] = 0x743d2564U;
    __Vtemp20[1U] = 0x6d656f75U;
    __Vtemp20[2U] = 0x6b5f7469U;
    __Vtemp20[3U] = 0x656c696eU;
    __Vtemp20[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp20),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp21[0U] = 0x743d2564U;
    __Vtemp21[1U] = 0x6d656f75U;
    __Vtemp21[2U] = 0x6b5f7469U;
    __Vtemp21[3U] = 0x656c696eU;
    __Vtemp21[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp21),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp22[0U] = 0x743d2564U;
    __Vtemp22[1U] = 0x6d656f75U;
    __Vtemp22[2U] = 0x6b5f7469U;
    __Vtemp22[3U] = 0x656c696eU;
    __Vtemp22[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp22),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp23[0U] = 0x743d2564U;
    __Vtemp23[1U] = 0x6d656f75U;
    __Vtemp23[2U] = 0x6b5f7469U;
    __Vtemp23[3U] = 0x656c696eU;
    __Vtemp23[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp23),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp24[0U] = 0x743d2564U;
    __Vtemp24[1U] = 0x6d656f75U;
    __Vtemp24[2U] = 0x6b5f7469U;
    __Vtemp24[3U] = 0x656c696eU;
    __Vtemp24[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp24),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__3(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__3\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp25[5];
    WData/*159:0*/ __Vtemp26[5];
    WData/*159:0*/ __Vtemp27[5];
    WData/*159:0*/ __Vtemp28[5];
    WData/*159:0*/ __Vtemp29[5];
    WData/*159:0*/ __Vtemp30[5];
    WData/*159:0*/ __Vtemp31[5];
    WData/*159:0*/ __Vtemp32[5];
    WData/*159:0*/ __Vtemp33[5];
    WData/*159:0*/ __Vtemp34[5];
    WData/*159:0*/ __Vtemp35[5];
    WData/*159:0*/ __Vtemp36[5];
    // Body
    __Vtemp25[0U] = 0x743d2564U;
    __Vtemp25[1U] = 0x6d656f75U;
    __Vtemp25[2U] = 0x6b5f7469U;
    __Vtemp25[3U] = 0x656c696eU;
    __Vtemp25[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp25),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp26[0U] = 0x743d2564U;
    __Vtemp26[1U] = 0x6d656f75U;
    __Vtemp26[2U] = 0x6b5f7469U;
    __Vtemp26[3U] = 0x656c696eU;
    __Vtemp26[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp26),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp27[0U] = 0x743d2564U;
    __Vtemp27[1U] = 0x6d656f75U;
    __Vtemp27[2U] = 0x6b5f7469U;
    __Vtemp27[3U] = 0x656c696eU;
    __Vtemp27[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp27),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp28[0U] = 0x743d2564U;
    __Vtemp28[1U] = 0x6d656f75U;
    __Vtemp28[2U] = 0x6b5f7469U;
    __Vtemp28[3U] = 0x656c696eU;
    __Vtemp28[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp28),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp29[0U] = 0x743d2564U;
    __Vtemp29[1U] = 0x6d656f75U;
    __Vtemp29[2U] = 0x6b5f7469U;
    __Vtemp29[3U] = 0x656c696eU;
    __Vtemp29[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp29),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp30[0U] = 0x743d2564U;
    __Vtemp30[1U] = 0x6d656f75U;
    __Vtemp30[2U] = 0x6b5f7469U;
    __Vtemp30[3U] = 0x656c696eU;
    __Vtemp30[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp30),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp31[0U] = 0x743d2564U;
    __Vtemp31[1U] = 0x6d656f75U;
    __Vtemp31[2U] = 0x6b5f7469U;
    __Vtemp31[3U] = 0x656c696eU;
    __Vtemp31[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp31),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp32[0U] = 0x743d2564U;
    __Vtemp32[1U] = 0x6d656f75U;
    __Vtemp32[2U] = 0x6b5f7469U;
    __Vtemp32[3U] = 0x656c696eU;
    __Vtemp32[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp32),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp33[0U] = 0x743d2564U;
    __Vtemp33[1U] = 0x6d656f75U;
    __Vtemp33[2U] = 0x6b5f7469U;
    __Vtemp33[3U] = 0x656c696eU;
    __Vtemp33[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp33),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp34[0U] = 0x743d2564U;
    __Vtemp34[1U] = 0x6d656f75U;
    __Vtemp34[2U] = 0x6b5f7469U;
    __Vtemp34[3U] = 0x656c696eU;
    __Vtemp34[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp34),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp35[0U] = 0x743d2564U;
    __Vtemp35[1U] = 0x6d656f75U;
    __Vtemp35[2U] = 0x6b5f7469U;
    __Vtemp35[3U] = 0x656c696eU;
    __Vtemp35[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp35),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp36[0U] = 0x743d2564U;
    __Vtemp36[1U] = 0x6d656f75U;
    __Vtemp36[2U] = 0x6b5f7469U;
    __Vtemp36[3U] = 0x656c696eU;
    __Vtemp36[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp36),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__4(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__4\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp37[5];
    WData/*159:0*/ __Vtemp38[5];
    WData/*159:0*/ __Vtemp39[5];
    WData/*159:0*/ __Vtemp40[5];
    WData/*159:0*/ __Vtemp41[5];
    WData/*159:0*/ __Vtemp42[5];
    WData/*159:0*/ __Vtemp43[5];
    WData/*159:0*/ __Vtemp44[5];
    WData/*159:0*/ __Vtemp45[5];
    WData/*159:0*/ __Vtemp46[5];
    WData/*159:0*/ __Vtemp47[5];
    WData/*159:0*/ __Vtemp48[5];
    // Body
    __Vtemp37[0U] = 0x743d2564U;
    __Vtemp37[1U] = 0x6d656f75U;
    __Vtemp37[2U] = 0x6b5f7469U;
    __Vtemp37[3U] = 0x656c696eU;
    __Vtemp37[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp37),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp38[0U] = 0x743d2564U;
    __Vtemp38[1U] = 0x6d656f75U;
    __Vtemp38[2U] = 0x6b5f7469U;
    __Vtemp38[3U] = 0x656c696eU;
    __Vtemp38[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp38),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp39[0U] = 0x743d2564U;
    __Vtemp39[1U] = 0x6d656f75U;
    __Vtemp39[2U] = 0x6b5f7469U;
    __Vtemp39[3U] = 0x656c696eU;
    __Vtemp39[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp39),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp40[0U] = 0x743d2564U;
    __Vtemp40[1U] = 0x6d656f75U;
    __Vtemp40[2U] = 0x6b5f7469U;
    __Vtemp40[3U] = 0x656c696eU;
    __Vtemp40[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp40),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp41[0U] = 0x743d2564U;
    __Vtemp41[1U] = 0x6d656f75U;
    __Vtemp41[2U] = 0x6b5f7469U;
    __Vtemp41[3U] = 0x656c696eU;
    __Vtemp41[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp41),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp42[0U] = 0x743d2564U;
    __Vtemp42[1U] = 0x6d656f75U;
    __Vtemp42[2U] = 0x6b5f7469U;
    __Vtemp42[3U] = 0x656c696eU;
    __Vtemp42[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp42),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp43[0U] = 0x743d2564U;
    __Vtemp43[1U] = 0x6d656f75U;
    __Vtemp43[2U] = 0x6b5f7469U;
    __Vtemp43[3U] = 0x656c696eU;
    __Vtemp43[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp43),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp44[0U] = 0x743d2564U;
    __Vtemp44[1U] = 0x6d656f75U;
    __Vtemp44[2U] = 0x6b5f7469U;
    __Vtemp44[3U] = 0x656c696eU;
    __Vtemp44[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp44),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp45[0U] = 0x743d2564U;
    __Vtemp45[1U] = 0x6d656f75U;
    __Vtemp45[2U] = 0x6b5f7469U;
    __Vtemp45[3U] = 0x656c696eU;
    __Vtemp45[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp45),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp46[0U] = 0x743d2564U;
    __Vtemp46[1U] = 0x6d656f75U;
    __Vtemp46[2U] = 0x6b5f7469U;
    __Vtemp46[3U] = 0x656c696eU;
    __Vtemp46[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp46),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp47[0U] = 0x743d2564U;
    __Vtemp47[1U] = 0x6d656f75U;
    __Vtemp47[2U] = 0x6b5f7469U;
    __Vtemp47[3U] = 0x656c696eU;
    __Vtemp47[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp47),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp48[0U] = 0x743d2564U;
    __Vtemp48[1U] = 0x6d656f75U;
    __Vtemp48[2U] = 0x6b5f7469U;
    __Vtemp48[3U] = 0x656c696eU;
    __Vtemp48[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp48),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__5(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__5\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp49[5];
    WData/*159:0*/ __Vtemp50[5];
    WData/*159:0*/ __Vtemp51[5];
    WData/*159:0*/ __Vtemp52[5];
    WData/*159:0*/ __Vtemp53[5];
    WData/*159:0*/ __Vtemp54[5];
    WData/*159:0*/ __Vtemp55[5];
    WData/*159:0*/ __Vtemp56[5];
    WData/*159:0*/ __Vtemp57[5];
    WData/*159:0*/ __Vtemp58[5];
    WData/*159:0*/ __Vtemp59[5];
    WData/*159:0*/ __Vtemp60[5];
    // Body
    __Vtemp49[0U] = 0x743d2564U;
    __Vtemp49[1U] = 0x6d656f75U;
    __Vtemp49[2U] = 0x6b5f7469U;
    __Vtemp49[3U] = 0x656c696eU;
    __Vtemp49[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp49),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp50[0U] = 0x743d2564U;
    __Vtemp50[1U] = 0x6d656f75U;
    __Vtemp50[2U] = 0x6b5f7469U;
    __Vtemp50[3U] = 0x656c696eU;
    __Vtemp50[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp50),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp51[0U] = 0x743d2564U;
    __Vtemp51[1U] = 0x6d656f75U;
    __Vtemp51[2U] = 0x6b5f7469U;
    __Vtemp51[3U] = 0x656c696eU;
    __Vtemp51[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp51),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp52[0U] = 0x743d2564U;
    __Vtemp52[1U] = 0x6d656f75U;
    __Vtemp52[2U] = 0x6b5f7469U;
    __Vtemp52[3U] = 0x656c696eU;
    __Vtemp52[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp52),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp53[0U] = 0x743d2564U;
    __Vtemp53[1U] = 0x6d656f75U;
    __Vtemp53[2U] = 0x6b5f7469U;
    __Vtemp53[3U] = 0x656c696eU;
    __Vtemp53[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp53),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp54[0U] = 0x743d2564U;
    __Vtemp54[1U] = 0x6d656f75U;
    __Vtemp54[2U] = 0x6b5f7469U;
    __Vtemp54[3U] = 0x656c696eU;
    __Vtemp54[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp54),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp55[0U] = 0x743d2564U;
    __Vtemp55[1U] = 0x6d656f75U;
    __Vtemp55[2U] = 0x6b5f7469U;
    __Vtemp55[3U] = 0x656c696eU;
    __Vtemp55[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp55),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp56[0U] = 0x743d2564U;
    __Vtemp56[1U] = 0x6d656f75U;
    __Vtemp56[2U] = 0x6b5f7469U;
    __Vtemp56[3U] = 0x656c696eU;
    __Vtemp56[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp56),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp57[0U] = 0x743d2564U;
    __Vtemp57[1U] = 0x6d656f75U;
    __Vtemp57[2U] = 0x6b5f7469U;
    __Vtemp57[3U] = 0x656c696eU;
    __Vtemp57[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp57),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp58[0U] = 0x743d2564U;
    __Vtemp58[1U] = 0x6d656f75U;
    __Vtemp58[2U] = 0x6b5f7469U;
    __Vtemp58[3U] = 0x656c696eU;
    __Vtemp58[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp58),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp59[0U] = 0x743d2564U;
    __Vtemp59[1U] = 0x6d656f75U;
    __Vtemp59[2U] = 0x6b5f7469U;
    __Vtemp59[3U] = 0x656c696eU;
    __Vtemp59[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp59),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp60[0U] = 0x743d2564U;
    __Vtemp60[1U] = 0x6d656f75U;
    __Vtemp60[2U] = 0x6b5f7469U;
    __Vtemp60[3U] = 0x656c696eU;
    __Vtemp60[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp60),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__6(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__6\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp61[5];
    WData/*159:0*/ __Vtemp62[5];
    WData/*159:0*/ __Vtemp63[5];
    WData/*159:0*/ __Vtemp64[5];
    WData/*159:0*/ __Vtemp65[5];
    WData/*159:0*/ __Vtemp66[5];
    WData/*159:0*/ __Vtemp67[5];
    WData/*159:0*/ __Vtemp68[5];
    WData/*159:0*/ __Vtemp69[5];
    WData/*159:0*/ __Vtemp70[5];
    WData/*159:0*/ __Vtemp71[5];
    WData/*159:0*/ __Vtemp72[5];
    // Body
    __Vtemp61[0U] = 0x743d2564U;
    __Vtemp61[1U] = 0x6d656f75U;
    __Vtemp61[2U] = 0x6b5f7469U;
    __Vtemp61[3U] = 0x656c696eU;
    __Vtemp61[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp61),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp62[0U] = 0x743d2564U;
    __Vtemp62[1U] = 0x6d656f75U;
    __Vtemp62[2U] = 0x6b5f7469U;
    __Vtemp62[3U] = 0x656c696eU;
    __Vtemp62[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp62),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp63[0U] = 0x743d2564U;
    __Vtemp63[1U] = 0x6d656f75U;
    __Vtemp63[2U] = 0x6b5f7469U;
    __Vtemp63[3U] = 0x656c696eU;
    __Vtemp63[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp63),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp64[0U] = 0x743d2564U;
    __Vtemp64[1U] = 0x6d656f75U;
    __Vtemp64[2U] = 0x6b5f7469U;
    __Vtemp64[3U] = 0x656c696eU;
    __Vtemp64[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp64),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp65[0U] = 0x743d2564U;
    __Vtemp65[1U] = 0x6d656f75U;
    __Vtemp65[2U] = 0x6b5f7469U;
    __Vtemp65[3U] = 0x656c696eU;
    __Vtemp65[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp65),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp66[0U] = 0x743d2564U;
    __Vtemp66[1U] = 0x6d656f75U;
    __Vtemp66[2U] = 0x6b5f7469U;
    __Vtemp66[3U] = 0x656c696eU;
    __Vtemp66[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp66),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp67[0U] = 0x743d2564U;
    __Vtemp67[1U] = 0x6d656f75U;
    __Vtemp67[2U] = 0x6b5f7469U;
    __Vtemp67[3U] = 0x656c696eU;
    __Vtemp67[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp67),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp68[0U] = 0x743d2564U;
    __Vtemp68[1U] = 0x6d656f75U;
    __Vtemp68[2U] = 0x6b5f7469U;
    __Vtemp68[3U] = 0x656c696eU;
    __Vtemp68[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp68),
                                vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp69[0U] = 0x743d2564U;
    __Vtemp69[1U] = 0x6d656f75U;
    __Vtemp69[2U] = 0x6b5f7469U;
    __Vtemp69[3U] = 0x656c696eU;
    __Vtemp69[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp69),
                                vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp70[0U] = 0x743d2564U;
    __Vtemp70[1U] = 0x6d656f75U;
    __Vtemp70[2U] = 0x6b5f7469U;
    __Vtemp70[3U] = 0x656c696eU;
    __Vtemp70[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp70),
                                vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp71[0U] = 0x743d2564U;
    __Vtemp71[1U] = 0x6d656f75U;
    __Vtemp71[2U] = 0x6b5f7469U;
    __Vtemp71[3U] = 0x656c696eU;
    __Vtemp71[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp71),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp72[0U] = 0x743d2564U;
    __Vtemp72[1U] = 0x6d656f75U;
    __Vtemp72[2U] = 0x6b5f7469U;
    __Vtemp72[3U] = 0x656c696eU;
    __Vtemp72[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp72),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__7(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__7\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp73[5];
    WData/*159:0*/ __Vtemp74[5];
    WData/*159:0*/ __Vtemp75[5];
    WData/*95:0*/ __Vtemp76[3];
    WData/*159:0*/ __Vtemp77[5];
    WData/*159:0*/ __Vtemp78[5];
    WData/*159:0*/ __Vtemp79[5];
    WData/*159:0*/ __Vtemp80[5];
    WData/*159:0*/ __Vtemp81[5];
    WData/*159:0*/ __Vtemp82[5];
    WData/*159:0*/ __Vtemp83[5];
    // Body
    __Vtemp73[0U] = 0x743d2564U;
    __Vtemp73[1U] = 0x6d656f75U;
    __Vtemp73[2U] = 0x6b5f7469U;
    __Vtemp73[3U] = 0x656c696eU;
    __Vtemp73[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp73),
                                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp74[0U] = 0x743d2564U;
    __Vtemp74[1U] = 0x6d656f75U;
    __Vtemp74[2U] = 0x6b5f7469U;
    __Vtemp74[3U] = 0x656c696eU;
    __Vtemp74[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp74),
                                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp75[0U] = 0x743d2564U;
    __Vtemp75[1U] = 0x6d656f75U;
    __Vtemp75[2U] = 0x6b5f7469U;
    __Vtemp75[3U] = 0x656c696eU;
    __Vtemp75[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp75),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp76[0U] = 0x783d2564U;
    __Vtemp76[1U] = 0x72745f74U;
    __Vtemp76[2U] = 0x7561U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(3, __Vtemp76),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus = 1U;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_4__DOT__bundleOut_0_member_allClocks_implicit_clock_clock_ClockDivideBy1_clk_out = 0U;
    __Vtemp77[0U] = 0x743d2564U;
    __Vtemp77[1U] = 0x6d656f75U;
    __Vtemp77[2U] = 0x6b5f7469U;
    __Vtemp77[3U] = 0x656c696eU;
    __Vtemp77[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp77),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp78[0U] = 0x743d2564U;
    __Vtemp78[1U] = 0x6d656f75U;
    __Vtemp78[2U] = 0x6b5f7469U;
    __Vtemp78[3U] = 0x656c696eU;
    __Vtemp78[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp78),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp79[0U] = 0x743d2564U;
    __Vtemp79[1U] = 0x6d656f75U;
    __Vtemp79[2U] = 0x6b5f7469U;
    __Vtemp79[3U] = 0x656c696eU;
    __Vtemp79[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp79),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp80[0U] = 0x743d2564U;
    __Vtemp80[1U] = 0x6d656f75U;
    __Vtemp80[2U] = 0x6b5f7469U;
    __Vtemp80[3U] = 0x656c696eU;
    __Vtemp80[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp80),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp81[0U] = 0x743d2564U;
    __Vtemp81[1U] = 0x6d656f75U;
    __Vtemp81[2U] = 0x6b5f7469U;
    __Vtemp81[3U] = 0x656c696eU;
    __Vtemp81[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp81),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp82[0U] = 0x743d2564U;
    __Vtemp82[1U] = 0x6d656f75U;
    __Vtemp82[2U] = 0x6b5f7469U;
    __Vtemp82[3U] = 0x656c696eU;
    __Vtemp82[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp82),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp83[0U] = 0x743d2564U;
    __Vtemp83[1U] = 0x6d656f75U;
    __Vtemp83[2U] = 0x6b5f7469U;
    __Vtemp83[3U] = 0x656c696eU;
    __Vtemp83[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp83),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__8(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__8\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp84[5];
    WData/*159:0*/ __Vtemp85[5];
    WData/*159:0*/ __Vtemp86[5];
    WData/*159:0*/ __Vtemp87[5];
    WData/*159:0*/ __Vtemp88[5];
    WData/*159:0*/ __Vtemp89[5];
    WData/*159:0*/ __Vtemp90[5];
    WData/*159:0*/ __Vtemp91[5];
    WData/*159:0*/ __Vtemp92[5];
    WData/*159:0*/ __Vtemp93[5];
    WData/*159:0*/ __Vtemp94[5];
    WData/*159:0*/ __Vtemp95[5];
    // Body
    __Vtemp84[0U] = 0x743d2564U;
    __Vtemp84[1U] = 0x6d656f75U;
    __Vtemp84[2U] = 0x6b5f7469U;
    __Vtemp84[3U] = 0x656c696eU;
    __Vtemp84[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp84),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp85[0U] = 0x743d2564U;
    __Vtemp85[1U] = 0x6d656f75U;
    __Vtemp85[2U] = 0x6b5f7469U;
    __Vtemp85[3U] = 0x656c696eU;
    __Vtemp85[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp85),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp86[0U] = 0x743d2564U;
    __Vtemp86[1U] = 0x6d656f75U;
    __Vtemp86[2U] = 0x6b5f7469U;
    __Vtemp86[3U] = 0x656c696eU;
    __Vtemp86[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp86),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp87[0U] = 0x743d2564U;
    __Vtemp87[1U] = 0x6d656f75U;
    __Vtemp87[2U] = 0x6b5f7469U;
    __Vtemp87[3U] = 0x656c696eU;
    __Vtemp87[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp87),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp88[0U] = 0x743d2564U;
    __Vtemp88[1U] = 0x6d656f75U;
    __Vtemp88[2U] = 0x6b5f7469U;
    __Vtemp88[3U] = 0x656c696eU;
    __Vtemp88[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp88),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp89[0U] = 0x743d2564U;
    __Vtemp89[1U] = 0x6d656f75U;
    __Vtemp89[2U] = 0x6b5f7469U;
    __Vtemp89[3U] = 0x656c696eU;
    __Vtemp89[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp89),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp90[0U] = 0x743d2564U;
    __Vtemp90[1U] = 0x6d656f75U;
    __Vtemp90[2U] = 0x6b5f7469U;
    __Vtemp90[3U] = 0x656c696eU;
    __Vtemp90[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp90),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp91[0U] = 0x743d2564U;
    __Vtemp91[1U] = 0x6d656f75U;
    __Vtemp91[2U] = 0x6b5f7469U;
    __Vtemp91[3U] = 0x656c696eU;
    __Vtemp91[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp91),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp92[0U] = 0x743d2564U;
    __Vtemp92[1U] = 0x6d656f75U;
    __Vtemp92[2U] = 0x6b5f7469U;
    __Vtemp92[3U] = 0x656c696eU;
    __Vtemp92[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp92),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp93[0U] = 0x743d2564U;
    __Vtemp93[1U] = 0x6d656f75U;
    __Vtemp93[2U] = 0x6b5f7469U;
    __Vtemp93[3U] = 0x656c696eU;
    __Vtemp93[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp93),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp94[0U] = 0x743d2564U;
    __Vtemp94[1U] = 0x6d656f75U;
    __Vtemp94[2U] = 0x6b5f7469U;
    __Vtemp94[3U] = 0x656c696eU;
    __Vtemp94[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp94),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp95[0U] = 0x743d2564U;
    __Vtemp95[1U] = 0x6d656f75U;
    __Vtemp95[2U] = 0x6b5f7469U;
    __Vtemp95[3U] = 0x656c696eU;
    __Vtemp95[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp95),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__9(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__9\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp96[5];
    WData/*159:0*/ __Vtemp97[5];
    WData/*159:0*/ __Vtemp98[5];
    WData/*159:0*/ __Vtemp99[5];
    WData/*159:0*/ __Vtemp100[5];
    WData/*159:0*/ __Vtemp101[5];
    WData/*159:0*/ __Vtemp102[5];
    WData/*159:0*/ __Vtemp103[5];
    WData/*159:0*/ __Vtemp104[5];
    WData/*95:0*/ __Vtemp105[3];
    // Body
    __Vtemp96[0U] = 0x743d2564U;
    __Vtemp96[1U] = 0x6d656f75U;
    __Vtemp96[2U] = 0x6b5f7469U;
    __Vtemp96[3U] = 0x656c696eU;
    __Vtemp96[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp96),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp97[0U] = 0x743d2564U;
    __Vtemp97[1U] = 0x6d656f75U;
    __Vtemp97[2U] = 0x6b5f7469U;
    __Vtemp97[3U] = 0x656c696eU;
    __Vtemp97[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp97),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp98[0U] = 0x743d2564U;
    __Vtemp98[1U] = 0x6d656f75U;
    __Vtemp98[2U] = 0x6b5f7469U;
    __Vtemp98[3U] = 0x656c696eU;
    __Vtemp98[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp98),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp99[0U] = 0x743d2564U;
    __Vtemp99[1U] = 0x6d656f75U;
    __Vtemp99[2U] = 0x6b5f7469U;
    __Vtemp99[3U] = 0x656c696eU;
    __Vtemp99[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp99),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp100[0U] = 0x743d2564U;
    __Vtemp100[1U] = 0x6d656f75U;
    __Vtemp100[2U] = 0x6b5f7469U;
    __Vtemp100[3U] = 0x656c696eU;
    __Vtemp100[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp100),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp101[0U] = 0x743d2564U;
    __Vtemp101[1U] = 0x6d656f75U;
    __Vtemp101[2U] = 0x6b5f7469U;
    __Vtemp101[3U] = 0x656c696eU;
    __Vtemp101[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp101),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp102[0U] = 0x743d2564U;
    __Vtemp102[1U] = 0x6d656f75U;
    __Vtemp102[2U] = 0x6b5f7469U;
    __Vtemp102[3U] = 0x656c696eU;
    __Vtemp102[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp102),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp103[0U] = 0x653d2564U;
    __Vtemp103[1U] = 0x6e61626cU;
    __Vtemp103[2U] = 0x62625f65U;
    __Vtemp103[3U] = 0x61675f72U;
    __Vtemp103[4U] = 0x6a74U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp103),
                                vlTOPp->TestHarness__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp104[0U] = 0x733d2564U;
    __Vtemp104[1U] = 0x79636c65U;
    __Vtemp104[2U] = 0x72655f63U;
    __Vtemp104[3U] = 0x785f636fU;
    __Vtemp104[4U] = 0x6d61U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp104),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp105[0U] = 0x673d2573U;
    __Vtemp105[1U] = 0x72746c6fU;
    __Vtemp105[2U] = 0x7561U;
    (void)VL_VALUEPLUSARGS_INN(64,VL_CVT_PACK_STR_NW(3, __Vtemp105),
                               vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartlog);vlSymsp->TOP____024unit.__Vdpiimwrap_uart_init_TOP____024unit(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartlog, vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartno);
    vlTOPp->TestHarness__DOT__simdram__DOT__initialized = 0U;
}

void VTestHarness::_settle__TOP__23(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__23\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_4__DOT__bundleOut_0_member_allClocks_implicit_clock_clock_ClockDivideBy1_clk_out 
        = vlTOPp->clock;
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__random_bits 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterNxt 
        = ((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
            ? 3U : (vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_5 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_3 
        = (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_7 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_9 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_17 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_19 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_20 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2) 
                     - (IData)(1U)));
}

void VTestHarness::_settle__TOP__24(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__24\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
}

void VTestHarness::_settle__TOP__25(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__25\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
}

void VTestHarness::_settle__TOP__26(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__26\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1);
}

void VTestHarness::_settle__TOP__27(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__27\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
}

void VTestHarness::_settle__TOP__28(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__28\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1;
}

void VTestHarness::_settle__TOP__29(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__29\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
}

void VTestHarness::_settle__TOP__30(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__30\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__wrap_1 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
}

void VTestHarness::_settle__TOP__31(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__31\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___lrscBackingOff_T 
        = (0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__lrscCount));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___lrscCount_T_2 
        = (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__lrscCount) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_183 
        = (7U & ((0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount))
                  ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount) 
                     - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__counter));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___invalidate_refill_T 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__state));
}

void VTestHarness::_settle__TOP__32(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__32\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___T_139 
        = (6U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__count));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___count_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__count)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___nextPos_T 
        = (5U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___nextPos_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__nextPos 
        = ((5U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos))
            ? (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_410 
        = (7U & ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__count))
                  ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__count) 
                     - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__count)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_1[2U];
}

void VTestHarness::_settle__TOP__33(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__33\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_counter1_4 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_first_4 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__merged_bits_last_counter_4));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog);
}

void VTestHarness::_settle__TOP__34(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__34\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__pulse 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___prescaler_T_2 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler) 
                      - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain_1__DOT__resetCtrl__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_4 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_4 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x13U];
}

void VTestHarness::_settle__TOP__35(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__35\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___value_T_3 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->io_success = ((IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg) 
                          | (1U == vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___T_466 
        = (((((4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
               [0U]) | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                        [0U])) | (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                  [0U])) | (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                            [0U])) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___GEN_351 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__REG) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__resetting));
}

void VTestHarness::_settle__TOP__36(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__36\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_411 
        = (7U & ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__count))
                  ? ((0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos))
                      ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos) 
                         - (IData)(1U)) : 5U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_142 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_rxs1) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_rfs1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_146 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_rxs2) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_ctrl_rfs2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___T_645 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___T_771 
        = (1U & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1) 
                           >> vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                           [0U])) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_471 
        = (1U & (((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
                   [0U]) | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                  [0U]) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_574 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_578 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_586 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_590 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_525 
        = (1U & (((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
                   [0U]) | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                  [0U]) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__37(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__37\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_628 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__param_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_640 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__sink)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_644 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__denied)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___T_578 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
            [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__size_1)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[2U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram
                                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram
                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram
                                     [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram
                                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[0U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[1U] 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[2U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram
                                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram
                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram
                                     [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram
                                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r 
        = ((0xffU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
            ? ((4U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg) 
                      >> 4U)) | ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg))
                                  ? ((2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg) 
                                            >> 4U)) 
                                     | (1U & ((0x20U 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg))
                                               ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg) 
                                                  >> 4U)
                                               : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg) 
                                                  >> 3U))))
                                  : ((2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg) 
                                            >> 1U)) 
                                     | (1U & ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg))
                                               ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg) 
                                                  >> 1U)
                                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__state_reg))))))
            : ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                ? ((2U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                    ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                        ? ((8U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                            ? ((0x10U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                                ? ((0x20U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                                    ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__valid))
                                        ? 7U : 6U) : 5U)
                                : 4U) : 3U) : 2U) : 1U)
                : 0U));
}

void VTestHarness::_settle__TOP__38(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__38\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_16 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__ram_data_dirty
            [0U] << 0x10U) | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__ram_data_state
                               [0U] << 0xeU) | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__ram_data_clients
                                                 [0U] 
                                                 << 0xdU) 
                                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT__ram_data_tag
                                                [0U])));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_time 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_hi_1 
            << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_lo_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

void VTestHarness::_settle__TOP__39(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__39\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                  >> 3U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                            >> 0x19U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = (1U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                          >> 3U)) & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                             >> 0x36U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
}

void VTestHarness::_settle__TOP__40(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__40\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__io_e_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_15 
        = ((0xfU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                   (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                               >> 2U)))) 
                    >> 5U)) | (0xf0U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                       (0xfU 
                                                        & (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                            >> 2U)))) 
                                        << 3U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___T_2266 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
           & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
                  >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x13U >= (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                      [0U] << 2U)) ? (0xfffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_opcodes 
                                                  >> 
                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                                   [0U] 
                                                   << 2U)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__amoalu__DOT__logic_and 
        = ((0xaU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
           | (0xbU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__amoalu__DOT__logic_xor 
        = ((9U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
           | (0xaU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_ren2)));
}

void VTestHarness::_settle__TOP__41(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__41\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
}

void VTestHarness::_settle__TOP__42(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__42\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp112[3];
    WData/*95:0*/ __Vtemp113[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    __Vtemp112[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp112[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp112[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U];
    VL_SUB_W(3, __Vtemp113, __Vtemp112, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__subtractor[0U] 
        = __Vtemp113[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__subtractor[1U] 
        = __Vtemp113[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__subtractor[2U] 
        = (1U & __Vtemp113[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT___divisorMSB_T_23 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                      << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                        << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                  >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                    << 4U) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                               << 4U) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 >> 0x1cU))))
                                      ? ((0x80000000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x1dU))))
                                      : ((0x8000000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x19U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 >> 0x14U))))
                                      ? ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x400000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x15U))))
                                      : ((0x80000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x40000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x11U))))))));
}

void VTestHarness::_settle__TOP__46(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__46\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT___dividendMSB_T_23 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                      << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                        << 8U) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                  >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                    << 4U) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                               << 4U) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 >> 0x1cU))))
                                      ? ((0x80000000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x1dU))))
                                      : ((0x8000000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x19U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 >> 0x14U))))
                                      ? ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x400000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x15U))))
                                      : ((0x80000U 
                                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x40000U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x11U))))))));
}

void VTestHarness::_settle__TOP__50(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__50\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram
                                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0])) 
                    << 0x2aU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram
                                                  [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0])) 
                                  << 0x15U) | (QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram
                                                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0])))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
        = ((0x80000000U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram
                           [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                           << 0x1fU)) | (IData)(((((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram
                                                                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram
                                                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0])) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram
                                                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0])))) 
                                                 >> 0x20U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                          >> 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                               >> 1U))));
}

void VTestHarness::_settle__TOP__51(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__51\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp116[3];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                            >> 1U)));
    __Vtemp116[0U] = ((0xffff0000U & ((IData)((((QData)((IData)(
                                                                ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram
                                                                  [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                  << 0x18U) 
                                                                 | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram
                                                                     [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                     << 0x10U) 
                                                                    | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram
                                                                        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                        << 8U) 
                                                                       | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram
                                                                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram
                                                                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                   << 0x18U) 
                                                                  | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram
                                                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                      << 0x10U) 
                                                                     | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram
                                                                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                         << 8U) 
                                                                        | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram
                                                                        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]))))))) 
                                      << 0x10U)) | 
                      ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram
                        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                        << 8U) | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram
                       [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]));
    __Vtemp116[1U] = ((0xffffU & ((IData)((((QData)((IData)(
                                                            ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram
                                                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0] 
                                                              << 0x18U) 
                                                             | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram
                                                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                 << 0x10U) 
                                                                | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram
                                                                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                    << 8U) 
                                                                   | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram
                                                                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram
                                                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                               << 0x18U) 
                                                              | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram
                                                                  [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                  << 0x10U) 
                                                                 | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram
                                                                     [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                     << 8U) 
                                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram
                                                                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]))))))) 
                                  >> 0x10U)) | (0xffff0000U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                                << 0x18U) 
                                                                               | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                                | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                                << 0x18U) 
                                                                                | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                                << 0x10U) 
                                                                                | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram
                                                                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0])))))) 
                                                            >> 0x20U)) 
                                                   << 0x10U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_8[0U] 
        = __Vtemp116[0U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_8[1U] 
        = __Vtemp116[1U];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_8[2U] 
        = (0xffffU & ((IData)(((((QData)((IData)(((
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram
                                                   [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0] 
                                                   << 0x18U) 
                                                  | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram
                                                      [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0] 
                                                      << 0x10U) 
                                                     | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram
                                                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                         << 8U) 
                                                        | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram
                                                        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram
                                                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                               << 0x18U) 
                                                              | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram
                                                                  [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                  << 0x10U) 
                                                                 | ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram
                                                                     [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                     << 8U) 
                                                                    | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram
                                                                    [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0])))))) 
                               >> 0x20U)) >> 0x10U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_decode_0_fp_illegal 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)) 
                 | (~ (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
                               >> 5U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__freeOH 
        = (3U & ((~ (6U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__lists)) 
                            << 1U) | (4U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__lists)) 
                                            << 2U))))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__lists))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
}

void VTestHarness::_settle__TOP__52(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__52\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__mulReg[0U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__mulReg[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__mulReg[2U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U] 
            << 0x1fU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
                         >> 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__mulReg[3U] 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U] 
            << 0x1fU) | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U] 
                         >> 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__mulReg[4U] 
        = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U] 
                 >> 1U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
}

void VTestHarness::_settle__TOP__53(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__53\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_2 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_8 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_14 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_20 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_26 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_32 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_38 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___sector_hits_T_44 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_2 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_8 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3));
}

void VTestHarness::_settle__TOP__54(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__54\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_14 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_20 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_26 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_32 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_38 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_44 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__result 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__resHi)
            ? (((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U])) 
                << 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])) 
                                           >> 1U)))
            : (((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_csr_stall 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__io_status_cease_r));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8 
        = ((6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                           [0U]) ? 2U : ((4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                          [0U]) ? 1U
                                          : ((3U == 
                                              vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((2U == 
                                               vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : 0U)))));
}

void VTestHarness::_settle__TOP__55(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__55\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___waddr_T_25 
        = ((8U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                  >> 0xbU)) | ((0x4000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                ? ((4U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 0xbU)) 
                                   | ((0x2000U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                       ? ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 0xbU)) 
                                          | (1U & (
                                                   (0x1000U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0xbU)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0xaU))))
                                       : ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 8U)) 
                                          | (1U & (
                                                   (0x200U 
                                                    & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 8U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 7U))))))
                                : ((4U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 4U)) | 
                                   ((0x40U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                     ? ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                               >> 4U)) 
                                        | (1U & ((0x20U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 4U)
                                                  : 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 3U))))
                                     : ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                               >> 1U)) 
                                        | (1U & ((4U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 1U)
                                                  : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__state_reg)))))));
}

void VTestHarness::_settle__TOP__56(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__56\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__tlb__DOT___newEntry_sr_T_4 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_v) 
            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_r) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_x) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT___newEntry_sr_T_4 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_v) 
            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_r) 
               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_x) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_amo_logical 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
             | (9U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
            | (0xaU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
           | (0xbU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_amo_arithmetic 
        = (((((8U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | (0xcU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
             | (0xdU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
            | (0xeU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd))) 
           | (0xfU == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wb_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__wb_ctrl_toint));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag 
        = (1U & (((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                           >> 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))) 
                 | ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                             >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_frontMask 
        = (((QData)((IData)(((((0x80U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [0U]) ? 0xffU : 0U) 
                              << 0x18U) | ((((0x40U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                              [0U])
                                              ? 0xffU
                                              : 0U) 
                                            << 0x10U) 
                                           | ((((0x20U 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                 [0U])
                                                 ? 0xffU
                                                 : 0U) 
                                               << 8U) 
                                              | ((0x10U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                  [0U])
                                                  ? 0xffU
                                                  : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                            [0U]) ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & 
                                               vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                               [0U])
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                  [0U])
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                                   [0U])
                                                   ? 0xffU
                                                   : 0U)))))));
}

void VTestHarness::_settle__TOP__57(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__57\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                               << 1U)) 
                   | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
        = ((0xfffe0000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                           >> 0x30U)))
                             ? ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC)
                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC) 
                           << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                                      << 1U)) 
                                                  | (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC))) 
                                                 >> 0x20U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
        = (0x7ffU & (((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                     >> 0x30U))) ? 
                      ((IData)(1U) + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC)
                       : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC) 
                     >> 0xfU));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_400 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos))
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__stack_4
            : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos))
                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__stack_3
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos))
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__stack_2
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__pos))
                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__stack_1
                        : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__btb__DOT__stack_0))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oindex 
        = ((2U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                  [0U] >> 5U)) | (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index
                                        [0U] >> 3U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_backMask 
        = (((QData)((IData)(((((0x80U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                [0U]) ? 0xffU : 0U) 
                              << 0x18U) | ((((0x40U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                              [0U])
                                              ? 0xffU
                                              : 0U) 
                                            << 0x10U) 
                                           | ((((0x20U 
                                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                                 [0U])
                                                 ? 0xffU
                                                 : 0U) 
                                               << 8U) 
                                              | ((0x10U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                                  [0U])
                                                  ? 0xffU
                                                  : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                            [0U]) ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & 
                                               vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                               [0U])
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                                  [0U])
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask
                                                   [0U])
                                                   ? 0xffU
                                                   : 0U)))))));
}

void VTestHarness::_settle__TOP__58(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__58\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp122[3];
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady 
        = (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                 | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                 | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                            >> 1U))));
    __Vtemp122[1U] = (IData)((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_30) 
                                                 << 0x1cU) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_29) 
                                                    << 0x18U) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_28) 
                                                       << 0x14U) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_27) 
                                                          << 0x10U) 
                                                         | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_26) 
                                                             << 0xcU) 
                                                            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_25) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_24) 
                                                                   << 4U) 
                                                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_23)))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_22) 
                                                             << 0x1cU) 
                                                            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_21) 
                                                                << 0x18U) 
                                                               | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_20) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_19) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_18) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_17) 
                                                                            << 8U) 
                                                                           | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_16) 
                                                                               << 4U) 
                                                                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_15))))))))))));
    __Vtemp122[2U] = (IData)(((((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_30) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_29) 
                                                     << 0x18U) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_28) 
                                                        << 0x14U) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_27) 
                                                           << 0x10U) 
                                                          | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_26) 
                                                              << 0xcU) 
                                                             | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_25) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_24) 
                                                                    << 4U) 
                                                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_23)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_22) 
                                                              << 0x1cU) 
                                                             | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_21) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_20) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_19) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_18) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_17) 
                                                                             << 8U) 
                                                                            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_16) 
                                                                                << 4U) 
                                                                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_15))))))))))) 
                              >> 0x20U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
        = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_7) 
                           << 0x1cU)) | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_6) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_5) 
                                             << 0x14U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_4) 
                                                << 0x10U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_3) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_2) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_1) 
                                                         << 4U) 
                                                        | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_0))))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
        = ((0xfffffffU & ((0xf000000U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_14) 
                                         << 0x18U)) 
                          | ((0xff00000U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_13) 
                                            << 0x14U)) 
                             | ((0xfff0000U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_12) 
                                               << 0x10U)) 
                                | ((0xffff000U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_11) 
                                                  << 0xcU)) 
                                   | ((0xfffff00U & 
                                       ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_10) 
                                        << 8U)) | (
                                                   (0xffffff0U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_9) 
                                                       << 4U)) 
                                                   | ((0xfffffffU 
                                                       & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_8)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__data_7) 
                                                         >> 4U))))))))) 
           | (0xf0000000U & (__Vtemp122[1U] << 0x1cU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
        = ((0xfffffffU & (__Vtemp122[1U] >> 4U)) | 
           (0xf0000000U & (__Vtemp122[2U] << 0x1cU)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
        = (0xfffffffU & (__Vtemp122[2U] >> 4U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_imem_sfence_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__wb_reg_sfence));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__block_probe_for_core_progress 
        = ((0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount)) 
           | (3U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__lrscCount)));
}
