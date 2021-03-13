# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /home/centos/chipyard/sims/verilator/simulator-chipyard-TinyRocketConfig

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -O3 -std=c++11 -I/home/centos/chipyard/riscv-tools-install/include -I/home/centos/chipyard/tools/DRAMSim2 -I/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig    -D__STDC_FORMAT_MACROS -DTEST_HARNESS=VTestHarness -DVERILATOR -include /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.plusArgs -include /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/verilator.h \
	-include /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/centos/chipyard/riscv-tools-install/lib -Wl,-rpath,/home/centos/chipyard/riscv-tools-install/lib -L/home/centos/chipyard/sims/verilator -L/home/centos/chipyard/tools/DRAMSim2 -lfesvr -ldramsim  \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDRAM \
	SimDTM \
	SimJTAG \
	SimSerial \
	SimUART \
	emulator \
	mm \
	mm_dramsim2 \
	remote_bitbang \
	testchip_tsi \
	uart \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDRAM.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimDRAM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimDTM.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimDTM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimJTAG.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimSerial.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimSerial.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimUART.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/SimUART.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/emulator.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/mm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm_dramsim2.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/mm_dramsim2.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/remote_bitbang.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
testchip_tsi.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/testchip_tsi.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
uart.o: /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/uart.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/centos/chipyard/sims/verilator/simulator-chipyard-TinyRocketConfig: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
