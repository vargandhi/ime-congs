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
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__ALUExeUnit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__ALUExeUnit__alu;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__csr;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__csr_exe_unit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__csr_exe_unit__alu;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__csr_exe_unit__ifpu;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_0;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_1;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_10;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_11;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_12;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_13;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_14;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_15;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_16;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_17;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_18;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_19;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_2;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_20;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_21;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_22;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_23;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_3;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_4;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_5;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_6;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_7;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_8;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fp_issue_unit__slots_9;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fpiu_unit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fpiu_unit__fdivsqrt;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_pipeline__fregfile;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_rename_stage;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_rename_stage__freelist;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__fp_rename_stage__maptable;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_0;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_1;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_10;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_11;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_12;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_13;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_14;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_15;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_16;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_17;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_18;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_19;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_2;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_20;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_21;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_22;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_23;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_24;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_25;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_26;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_27;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_28;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_29;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_3;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_30;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_31;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_4;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_5;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_6;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_7;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_8;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__int_issue_unit__slots_9;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__iregfile;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__jmp_unit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_0;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_1;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_10;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_11;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_12;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_13;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_14;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_15;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_2;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_3;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_4;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_5;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_6;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_7;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_8;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_issue_unit__slots_9;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__mem_units_0__MemAddrCalcUnit;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__rename_stage;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__rename_stage__freelist;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__rename_stage__maptable;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__core__rob;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache__mshrs;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache__mshrs__mmios_0;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache__mshrs__mshrs_0;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache__mshrs__mshrs_1;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache__mshrs__mshrs_2;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__dcache__mshrs__mshrs_3;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__frontend;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__frontend__bpd;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__frontend__icache;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__frontend__tlb;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__lsu;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__lsu__dtlb;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__ptw;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__tlMasterXbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__boom_tile__tlMasterXbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__system__bootrom__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__clint__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__m;
    VerilatedScope __Vscope_TestHarness__dut__system__plic;
    VerilatedScope __Vscope_TestHarness__dut__system__plic__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__atomics;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__atomics__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__buffer_1__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_bootrom__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_bootrom__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_bus_named_subsystem_pbus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_clint__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_clint__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_debug__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_debug__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_l2_ctrl__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_l2_ctrl__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_l2_ctrl__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_plic__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__coupler_to_plic__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__in_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__out_xbar;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__out_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__wrapped_error_device__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_cbus__wrapped_error_device__error__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_fbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_fbus__coupler_from_port_named_serialadapter__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_fbus__coupler_from_port_named_serialadapter__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_fbus__subsystem_fbus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__InclusiveCache_inner_TLBuffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__InclusiveCache_outer_TLBuffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__binder__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__coherent_jbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__cork;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__cork__IDPool;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__cork__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__coupler_to_bus_named_subsystem_mbus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__filter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_0;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_1;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_2;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_3;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_4;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_5;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_6;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_7;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_8;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_9;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__bc_mshr;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__c_mshr;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__directory;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__requests;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sinkA__putbuffer;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sinkC;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sinkC__ListBuffer;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sinkD;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sourceB;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sourceC;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_l2_wrapper__l2__mods_0__sourceD;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__picker__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_mbus__subsystem_mbus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__atomics;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__atomics__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__buffer_1__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__in_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_pbus__out_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__coupler_from_boom_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__coupler_from_bus_named_subsystem_fbus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__coupler_from_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__coupler_to_bus_named_subsystem_cbus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__coupler_to_bus_named_subsystem_l2__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__fixer__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__fixer__TLMonitor_2;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__system_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__system_bus_xbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__system__subsystem_sbus__system_bus_xbar__TLMonitor_2;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__core__csr;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__core__ibuf;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__dcache;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__dcache__tlb;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__fpuOpt;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__frontend;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__frontend__icache;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__frontend__tlb;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__ptw;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__tlMasterXbar;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__tlMasterXbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__tile__tlMasterXbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__system__uartClockDomainWrapper__uart_0__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__system__uartClockDomainWrapper__uart_0__buffer__TLMonitor;
    
    // CREATORS
    VTestHarness__Syms(VTestHarness* topp, const char* namep);
    ~VTestHarness__Syms() {}
    void VTestHarness__Syms_1(VTestHarness* topp);
    void VTestHarness__Syms_2(VTestHarness* topp);
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
