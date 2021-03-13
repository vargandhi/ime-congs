// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimJTAG.v:3:29
    extern int jtag_tick(svBit* jtag_TCK, svBit* jtag_TMS, svBit* jtag_TDI, svBit* jtag_TRSTn, svBit jtag_TDO);
    // DPI import at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimSerial.v:1:29
    extern int serial_tick(svBit serial_out_valid, svBit* serial_out_ready, int serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, int* serial_in_bits);
    // DPI import at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimUART.v:3:30
    extern void uart_init(const char* filename, int uartno);
    // DPI import at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimUART.v:8:30
    extern void uart_tick(svBit serial_out_valid, svBit* serial_out_ready, char serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, char* serial_in_bits);
    
#ifdef __cplusplus
}
#endif
