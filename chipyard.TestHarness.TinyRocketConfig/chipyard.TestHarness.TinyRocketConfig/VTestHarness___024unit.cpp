// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness___024unit.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/(&  jtag_TCK), CData/*0:0*/(&  jtag_TMS), CData/*0:0*/(&  jtag_TDI), CData/*0:0*/(&  jtag_TRSTn), const CData/*0:0*/ jtag_TDO, IData/*31:0*/(&  jtag_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit\n"); );
    // Body
    svBit jtag_TCK__Vcvt;
    svBit jtag_TMS__Vcvt;
    svBit jtag_TDI__Vcvt;
    svBit jtag_TRSTn__Vcvt;
    svBit jtag_TDO__Vcvt;
    jtag_TDO__Vcvt = jtag_TDO;
    int jtag_tick__Vfuncrtn__Vcvt;
    jtag_tick__Vfuncrtn__Vcvt = jtag_tick(&jtag_TCK__Vcvt, &jtag_TMS__Vcvt, &jtag_TDI__Vcvt, &jtag_TRSTn__Vcvt, jtag_TDO__Vcvt);
    jtag_TCK = (1U & jtag_TCK__Vcvt);
    jtag_TMS = (1U & jtag_TMS__Vcvt);
    jtag_TDI = (1U & jtag_TDI__Vcvt);
    jtag_TRSTn = (1U & jtag_TRSTn__Vcvt);
    jtag_tick__Vfuncrtn = jtag_tick__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_serial_tick_TOP____024unit(const CData/*0:0*/ serial_out_valid, CData/*0:0*/(&  serial_out_ready), const IData/*31:0*/ serial_out_bits, CData/*0:0*/(&  serial_in_valid), const CData/*0:0*/ serial_in_ready, IData/*31:0*/(&  serial_in_bits), IData/*31:0*/(&  serial_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_serial_tick_TOP____024unit\n"); );
    // Body
    svBit serial_out_valid__Vcvt;
    serial_out_valid__Vcvt = serial_out_valid;
    svBit serial_out_ready__Vcvt;
    int serial_out_bits__Vcvt;
    serial_out_bits__Vcvt = serial_out_bits;
    svBit serial_in_valid__Vcvt;
    svBit serial_in_ready__Vcvt;
    serial_in_ready__Vcvt = serial_in_ready;
    int serial_in_bits__Vcvt;
    int serial_tick__Vfuncrtn__Vcvt;
    serial_tick__Vfuncrtn__Vcvt = serial_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = serial_in_bits__Vcvt;
    serial_tick__Vfuncrtn = serial_tick__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_uart_init_TOP____024unit(const std::string(&  filename), const IData/*31:0*/ uartno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_uart_init_TOP____024unit\n"); );
    // Body
    const char* filename__Vcvt;
    filename__Vcvt = filename.c_str();
    int uartno__Vcvt;
    uartno__Vcvt = uartno;
    uart_init(filename__Vcvt, uartno__Vcvt);
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_uart_tick_TOP____024unit(const CData/*0:0*/ serial_out_valid, CData/*0:0*/(&  serial_out_ready), const CData/*7:0*/ serial_out_bits, CData/*0:0*/(&  serial_in_valid), const CData/*0:0*/ serial_in_ready, CData/*7:0*/(&  serial_in_bits)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_uart_tick_TOP____024unit\n"); );
    // Body
    svBit serial_out_valid__Vcvt;
    serial_out_valid__Vcvt = serial_out_valid;
    svBit serial_out_ready__Vcvt;
    char serial_out_bits__Vcvt;
    serial_out_bits__Vcvt = serial_out_bits;
    svBit serial_in_valid__Vcvt;
    svBit serial_in_ready__Vcvt;
    serial_in_ready__Vcvt = serial_in_ready;
    char serial_in_bits__Vcvt;
    uart_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = (0xffU & serial_in_bits__Vcvt);
}
