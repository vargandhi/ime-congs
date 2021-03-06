# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestHarness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
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
	VTestHarness__38 \
	VTestHarness__39 \
	VTestHarness__40 \
	VTestHarness__41 \
	VTestHarness__42 \
	VTestHarness__43 \
	VTestHarness__44 \
	VTestHarness__45 \
	VTestHarness__46 \
	VTestHarness__47 \
	VTestHarness__48 \
	VTestHarness__49 \
	VTestHarness__50 \
	VTestHarness__51 \
	VTestHarness__52 \
	VTestHarness__53 \
	VTestHarness__54 \
	VTestHarness__55 \
	VTestHarness__56 \
	VTestHarness__57 \
	VTestHarness__58 \
	VTestHarness__59 \
	VTestHarness__60 \
	VTestHarness__61 \
	VTestHarness__62 \
	VTestHarness__63 \
	VTestHarness__64 \
	VTestHarness__65 \
	VTestHarness__66 \
	VTestHarness__67 \
	VTestHarness__68 \
	VTestHarness__69 \
	VTestHarness__70 \
	VTestHarness__71 \
	VTestHarness__72 \
	VTestHarness__73 \
	VTestHarness__74 \
	VTestHarness__75 \
	VTestHarness__76 \
	VTestHarness__77 \
	VTestHarness__78 \
	VTestHarness__79 \
	VTestHarness__80 \
	VTestHarness__81 \
	VTestHarness__82 \
	VTestHarness__83 \
	VTestHarness__84 \
	VTestHarness__85 \
	VTestHarness__86 \
	VTestHarness__87 \
	VTestHarness__88 \
	VTestHarness__89 \
	VTestHarness__90 \
	VTestHarness__91 \
	VTestHarness__92 \
	VTestHarness__93 \
	VTestHarness__94 \
	VTestHarness__95 \
	VTestHarness__96 \
	VTestHarness__97 \
	VTestHarness__98 \
	VTestHarness__99 \
	VTestHarness__100 \
	VTestHarness__101 \
	VTestHarness__102 \
	VTestHarness__103 \
	VTestHarness__104 \
	VTestHarness__105 \
	VTestHarness__106 \
	VTestHarness__107 \
	VTestHarness__108 \
	VTestHarness__109 \
	VTestHarness__110 \
	VTestHarness__111 \
	VTestHarness__112 \
	VTestHarness__113 \
	VTestHarness__114 \
	VTestHarness__115 \
	VTestHarness__116 \
	VTestHarness__117 \
	VTestHarness__118 \
	VTestHarness__119 \
	VTestHarness__120 \
	VTestHarness__121 \
	VTestHarness__122 \
	VTestHarness__123 \
	VTestHarness__124 \
	VTestHarness__125 \
	VTestHarness__126 \
	VTestHarness__127 \
	VTestHarness__128 \
	VTestHarness__129 \
	VTestHarness__130 \
	VTestHarness__131 \
	VTestHarness__132 \
	VTestHarness__133 \
	VTestHarness__134 \
	VTestHarness__135 \
	VTestHarness__136 \
	VTestHarness__137 \
	VTestHarness__138 \
	VTestHarness__139 \
	VTestHarness__140 \
	VTestHarness__141 \
	VTestHarness__142 \
	VTestHarness__143 \
	VTestHarness__144 \
	VTestHarness__145 \
	VTestHarness__146 \
	VTestHarness__147 \
	VTestHarness__148 \
	VTestHarness__149 \
	VTestHarness__150 \
	VTestHarness__151 \
	VTestHarness__152 \
	VTestHarness__153 \
	VTestHarness__154 \
	VTestHarness__155 \
	VTestHarness__156 \
	VTestHarness__157 \
	VTestHarness__158 \
	VTestHarness__159 \
	VTestHarness__160 \
	VTestHarness__161 \
	VTestHarness__162 \
	VTestHarness__163 \
	VTestHarness__164 \
	VTestHarness__165 \
	VTestHarness__166 \
	VTestHarness__167 \
	VTestHarness__168 \
	VTestHarness__169 \
	VTestHarness__170 \
	VTestHarness__171 \
	VTestHarness__172 \
	VTestHarness__173 \
	VTestHarness__174 \
	VTestHarness__175 \
	VTestHarness__176 \
	VTestHarness__177 \
	VTestHarness__178 \
	VTestHarness__179 \
	VTestHarness__180 \
	VTestHarness__181 \
	VTestHarness__182 \
	VTestHarness__183 \
	VTestHarness__184 \
	VTestHarness__185 \
	VTestHarness__186 \
	VTestHarness__187 \
	VTestHarness__188 \
	VTestHarness__189 \
	VTestHarness__190 \
	VTestHarness__191 \
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
	VTestHarness__15__Slow \
	VTestHarness__16__Slow \
	VTestHarness__17__Slow \
	VTestHarness__18__Slow \
	VTestHarness__19__Slow \
	VTestHarness__20__Slow \
	VTestHarness__21__Slow \
	VTestHarness__22__Slow \
	VTestHarness__23__Slow \
	VTestHarness__24__Slow \
	VTestHarness__25__Slow \
	VTestHarness__26__Slow \
	VTestHarness__27__Slow \
	VTestHarness__28__Slow \
	VTestHarness__29__Slow \
	VTestHarness__30__Slow \
	VTestHarness__31__Slow \
	VTestHarness__32__Slow \
	VTestHarness__33__Slow \
	VTestHarness__34__Slow \
	VTestHarness__35__Slow \
	VTestHarness__36__Slow \
	VTestHarness__37__Slow \
	VTestHarness__38__Slow \
	VTestHarness__39__Slow \
	VTestHarness__40__Slow \
	VTestHarness__41__Slow \
	VTestHarness__42__Slow \
	VTestHarness__43__Slow \
	VTestHarness__44__Slow \
	VTestHarness__45__Slow \
	VTestHarness__46__Slow \
	VTestHarness__47__Slow \
	VTestHarness__48__Slow \
	VTestHarness__49__Slow \
	VTestHarness__50__Slow \
	VTestHarness__51__Slow \
	VTestHarness__52__Slow \
	VTestHarness__53__Slow \
	VTestHarness__54__Slow \
	VTestHarness__55__Slow \
	VTestHarness__56__Slow \
	VTestHarness__57__Slow \
	VTestHarness__58__Slow \
	VTestHarness__59__Slow \
	VTestHarness__60__Slow \
	VTestHarness__61__Slow \
	VTestHarness__62__Slow \
	VTestHarness__63__Slow \
	VTestHarness__64__Slow \
	VTestHarness__65__Slow \
	VTestHarness__66__Slow \
	VTestHarness__67__Slow \
	VTestHarness__68__Slow \
	VTestHarness__69__Slow \
	VTestHarness__70__Slow \
	VTestHarness__71__Slow \
	VTestHarness__72__Slow \
	VTestHarness__73__Slow \
	VTestHarness__74__Slow \
	VTestHarness__75__Slow \
	VTestHarness__76__Slow \
	VTestHarness__77__Slow \
	VTestHarness__78__Slow \
	VTestHarness__79__Slow \
	VTestHarness__80__Slow \
	VTestHarness__81__Slow \
	VTestHarness__82__Slow \
	VTestHarness__83__Slow \
	VTestHarness__84__Slow \
	VTestHarness__85__Slow \
	VTestHarness__86__Slow \
	VTestHarness__87__Slow \
	VTestHarness__88__Slow \
	VTestHarness__89__Slow \
	VTestHarness__90__Slow \
	VTestHarness__91__Slow \
	VTestHarness___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestHarness__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestHarness__Syms \
	VTestHarness__Syms__1 \
	VTestHarness__Syms__2 \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
