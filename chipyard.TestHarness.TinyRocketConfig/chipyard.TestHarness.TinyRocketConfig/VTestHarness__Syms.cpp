// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTestHarness__Syms.h"
#include "VTestHarness.h"
#include "VTestHarness___024unit.h"



// FUNCTIONS
VTestHarness__Syms::VTestHarness__Syms(VTestHarness* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP____024unit(Verilated::catName(topp->name(), "$unit"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TestHarness.configure(this, name(), "TestHarness", "TestHarness", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__bootROMDomainWrapper__bootrom__monitor.configure(this, name(), "TestHarness.chiptop.system.bootROMDomainWrapper.bootrom.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__clint__monitor.configure(this, name(), "TestHarness.chiptop.system.clint.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmInner.dmInner", "dmInner", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmInner.dmInner.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner__monitor_1.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmInner.dmInner.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__asource__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.asource.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmOuter__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmOuter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__bar__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiBypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__error.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiBypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__error__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiBypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiXbar.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiXbar", "dmiXbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiXbar__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiXbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__domain_1__resetCtrl__monitor.configure(this, name(), "TestHarness.chiptop.system.domain_1.resetCtrl.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__domain__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.domain.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__domain__serdesser__monitor.configure(this, name(), "TestHarness.chiptop.system.domain.serdesser.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm.configure(this, name(), "TestHarness.chiptop.system.dtm", "dtm", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__dmiAccessChain.configure(this, name(), "TestHarness.chiptop.system.dtm.dmiAccessChain", "dmiAccessChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__dtmInfoChain.configure(this, name(), "TestHarness.chiptop.system.dtm.dtmInfoChain", "dtmInfoChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__tapIO_bypassChain.configure(this, name(), "TestHarness.chiptop.system.dtm.tapIO_bypassChain", "tapIO_bypassChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__tapIO_controllerInternal__irChain.configure(this, name(), "TestHarness.chiptop.system.dtm.tapIO_controllerInternal.irChain", "irChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__tapIO_idcodeChain.configure(this, name(), "TestHarness.chiptop.system.dtm.tapIO_idcodeChain", "tapIO_idcodeChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__plicDomainWrapper__plic.configure(this, name(), "TestHarness.chiptop.system.plicDomainWrapper.plic", "plic", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__plicDomainWrapper__plic__monitor.configure(this, name(), "TestHarness.chiptop.system.plicDomainWrapper.plic.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__atomics.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__atomics__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_bootrom__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_bootrom.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_bootrom__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_bootrom.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_clint__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_clint__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_debug__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_debug__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_plic__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_plic__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__fixer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__out_xbar.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.out_xbar", "out_xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__out_xbar__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.out_xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__wrapped_error_device__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__wrapped_error_device__error__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_fbus__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_fbus.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_fbus__coupler_from_port_named_serial_tl_ctrl__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_fbus.coupler_from_port_named_serial_tl_ctrl.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__atomics.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__atomics__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__buffer_1__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.buffer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.coupler_to_device_named_uart_0.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.coupler_to_device_named_uart_0.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_slave_named_tileresetctrl__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_slave_named_tileresetctrl__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__coupler_to_slave_named_tileresetctrl__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__fixer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__out_xbar.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.out_xbar", "out_xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__out_xbar__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_sbus__fixer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_sbus.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_sbus__fixer__monitor_1.configure(this, name(), "TestHarness.chiptop.system.subsystem_sbus.fixer.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_sbus__system_bus_xbar.configure(this, name(), "TestHarness.chiptop.system.subsystem_sbus.system_bus_xbar", "system_bus_xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_sbus__system_bus_xbar__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_sbus__system_bus_xbar__monitor_1.configure(this, name(), "TestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__buffer_1__monitor.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.buffer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__core__PlusArgTimeout.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.core.PlusArgTimeout", "PlusArgTimeout", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__core__csr.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.core.csr", "csr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__dcache.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.dcache", "dcache", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__fragmenter_1.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.fragmenter_1", "fragmenter_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__frontend.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.frontend", "frontend", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__tlMasterXbar.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar", "tlMasterXbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__tlMasterXbar__monitor.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__tile_prci_domain__tile_reset_domain__tile__tlMasterXbar__monitor_1.configure(this, name(), "TestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__uartClockDomainWrapper__uart_0__monitor.configure(this, name(), "TestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__adapter.configure(this, name(), "TestHarness.ram.adapter", "adapter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__buffer_1__monitor.configure(this, name(), "TestHarness.ram.buffer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__buffer__monitor.configure(this, name(), "TestHarness.ram.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__fragmenter.configure(this, name(), "TestHarness.ram.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__fragmenter__monitor.configure(this, name(), "TestHarness.ram.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__serdesser__monitor.configure(this, name(), "TestHarness.ram.serdesser.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ram__srams__monitor.configure(this, name(), "TestHarness.ram.srams.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    
    // Setup scope hierarchy
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
