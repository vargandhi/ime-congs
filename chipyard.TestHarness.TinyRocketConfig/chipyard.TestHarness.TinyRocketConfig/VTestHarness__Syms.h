// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTESTHARNESS__SYMS_H_
#define _VTESTHARNESS__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VTestHarness.h"
#include "VTestHarness___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestHarness__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTestHarness*                  TOPp;
    VTestHarness___024unit         TOP____024unit;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TestHarness;
    VerilatedScope __Vscope_TestHarness__chiptop__system__bootROMDomainWrapper__bootrom__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__clint__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner__monitor_1;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__asource__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmOuter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__bar__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__error;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__error__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiXbar;
    VerilatedScope __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiXbar__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__domain_1__resetCtrl__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__domain__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__domain__serdesser__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__dtm;
    VerilatedScope __Vscope_TestHarness__chiptop__system__dtm__dmiAccessChain;
    VerilatedScope __Vscope_TestHarness__chiptop__system__dtm__dtmInfoChain;
    VerilatedScope __Vscope_TestHarness__chiptop__system__dtm__tapIO_bypassChain;
    VerilatedScope __Vscope_TestHarness__chiptop__system__dtm__tapIO_controllerInternal__irChain;
    VerilatedScope __Vscope_TestHarness__chiptop__system__dtm__tapIO_idcodeChain;
    VerilatedScope __Vscope_TestHarness__chiptop__system__plicDomainWrapper__plic;
    VerilatedScope __Vscope_TestHarness__chiptop__system__plicDomainWrapper__plic__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__atomics;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__atomics__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_bootrom__fragmenter;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_bootrom__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_clint__fragmenter;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_clint__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_debug__fragmenter;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_debug__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_plic__fragmenter;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_plic__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__out_xbar;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__wrapped_error_device__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_cbus__wrapped_error_device__error__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_fbus__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_fbus__coupler_from_port_named_serial_tl_ctrl__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__atomics;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__atomics__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__buffer_1__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_slave_named_tileresetctrl__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_slave_named_tileresetctrl__fragmenter;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_slave_named_tileresetctrl__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__out_xbar;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_pbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_sbus__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_sbus__fixer__monitor_1;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_sbus__system_bus_xbar__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__subsystem_sbus__system_bus_xbar__monitor_1;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__buffer_1__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__core__csr;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__dcache;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__fragmenter_1;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__frontend;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__tlMasterXbar;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestHarness__chiptop__system__uartClockDomainWrapper__uart_0__monitor;
    VerilatedScope __Vscope_TestHarness__ram__adapter;
    VerilatedScope __Vscope_TestHarness__ram__buffer_1__monitor;
    VerilatedScope __Vscope_TestHarness__ram__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__ram__fragmenter;
    VerilatedScope __Vscope_TestHarness__ram__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__ram__serdesser__monitor;
    VerilatedScope __Vscope_TestHarness__ram__srams__monitor;
    
    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;
    
    // CREATORS
    VTestHarness__Syms(VTestHarness* topp, const char* namep);
    ~VTestHarness__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
