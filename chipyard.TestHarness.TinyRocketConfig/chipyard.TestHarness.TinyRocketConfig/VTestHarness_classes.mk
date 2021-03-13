# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestHarness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTestHarness \
	VTestHarness__1 \
	VTestHarness__2 \
	VTestHarness__3 \
	VTestHarness__4 \
	VTestHarness__5 \
	VTestHarness__6 \
	VTestHarness__7 \
	VTestHarness__8 \
	VTestHarness__9 \
	VTestHarness__10 \
	VTestHarness__11 \
	VTestHarness__12 \
	VTestHarness__13 \
	VTestHarness__14 \
	VTestHarness__15 \
	VTestHarness__16 \
	VTestHarness__17 \
	VTestHarness__18 \
	VTestHarness__19 \
	VTestHarness__20 \
	VTestHarness__21 \
	VTestHarness__22 \
	VTestHarness__23 \
	VTestHarness__24 \
	VTestHarness__25 \
	VTestHarness__26 \
	VTestHarness__27 \
	VTestHarness__28 \
	VTestHarness__29 \
	VTestHarness__30 \
	VTestHarness__31 \
	VTestHarness__32 \
	VTestHarness__33 \
	VTestHarness__34 \
	VTestHarness__35 \
	VTestHarness__36 \
	VTestHarness__37 \
	VTestHarness___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTestHarness__Slow \
	VTestHarness__1__Slow \
	VTestHarness__2__Slow \
	VTestHarness__3__Slow \
	VTestHarness__4__Slow \
	VTestHarness__5__Slow \
	VTestHarness__6__Slow \
	VTestHarness__7__Slow \
	VTestHarness__8__Slow \
	VTestHarness__9__Slow \
	VTestHarness__10__Slow \
	VTestHarness__11__Slow \
	VTestHarness__12__Slow \
	VTestHarness__13__Slow \
	VTestHarness__14__Slow \
	VTestHarness___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestHarness__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestHarness__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
