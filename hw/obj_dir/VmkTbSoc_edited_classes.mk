# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VmkTbSoc_edited.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VmkTbSoc_edited \
	VmkTbSoc_edited___024root__DepSet_hfff3098e__0 \
	VmkTbSoc_edited___024root__DepSet_hfff3098e__1 \
	VmkTbSoc_edited___024root__DepSet_hfff3098e__2 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__0 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__1 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__2 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__3 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__4 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__5 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__6 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__7 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__8 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__9 \
	VmkTbSoc_edited___024root__DepSet_h0a421243__10 \
	VmkTbSoc_edited___024unit__DepSet_h96402dea__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VmkTbSoc_edited__ConstPool_0 \
	VmkTbSoc_edited___024root__Slow \
	VmkTbSoc_edited___024root__DepSet_hfff3098e__0__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__0__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__1__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__2__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__3__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__4__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__5__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__6__Slow \
	VmkTbSoc_edited___024root__DepSet_h0a421243__7__Slow \
	VmkTbSoc_edited___024unit__Slow \
	VmkTbSoc_edited___024unit__DepSet_h23d4f69f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VmkTbSoc_edited__Dpi \
	VmkTbSoc_edited__Trace__0 \
	VmkTbSoc_edited__Trace__1 \
	VmkTbSoc_edited__Trace__2 \
	VmkTbSoc_edited__Trace__3 \
	VmkTbSoc_edited__Trace__4 \
	VmkTbSoc_edited__Trace__5 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VmkTbSoc_edited__Syms \
	VmkTbSoc_edited__Trace__0__Slow \
	VmkTbSoc_edited__TraceDecls__0__Slow \
	VmkTbSoc_edited__Trace__1__Slow \
	VmkTbSoc_edited__Trace__2__Slow \
	VmkTbSoc_edited__Trace__3__Slow \
	VmkTbSoc_edited__Trace__4__Slow \
	VmkTbSoc_edited__Trace__5__Slow \
	VmkTbSoc_edited__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
