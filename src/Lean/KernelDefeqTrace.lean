/-
Copyright (c) 2025 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Debugging utilities for kernel defeq tracing
-/
prelude
import Init.Core

namespace Lean.Kernel

/--
Enable kernel defeq tracing. When enabled, the kernel will print to stderr
information about the branching path taken during definitional equality checking.

This is useful for debugging kernel performance issues related to universe normalization
(e.g., `max u v` vs `max v u` causing slowdowns).

Parameters:
- `traceExpr`: if true, also prints the full expressions being compared (can be very verbose)

The trace output includes:
- `[Kernel.isDefEq]` - entry/exit of is_def_eq_core with depth
- `[Kernel.isDefEq.level]` - level comparison with normalization details
- Branch decisions (quick, whnf, proof_irrel, lazy_delta, const_eq, app_eq, eta, etc.)

Use `setKernelDefeqTraceFilter` to filter tracing to specific declaration names.
-/
@[extern "lean_kernel_enable_defeq_trace"]
opaque enableKernelDefeqTrace (traceExpr : Bool := false) : IO Unit

/-- Disable kernel defeq tracing. -/
@[extern "lean_kernel_disable_defeq_trace"]
opaque disableKernelDefeqTrace : IO Unit

/--
Set a filter for kernel defeq tracing. Only declarations whose name has this
prefix will be traced. For example, setting the filter to `KaehlerDifferential.mvPolynomialEquiv`
will only trace defeq checks that occur while type-checking that declaration.
-/
@[extern "lean_kernel_set_defeq_trace_filter"]
opaque setKernelDefeqTraceFilter (declNamePrefix : Name) : IO Unit

/-- Clear the kernel defeq trace filter (trace all declarations when tracing is enabled). -/
@[extern "lean_kernel_clear_defeq_trace_filter"]
opaque clearKernelDefeqTraceFilter : IO Unit

end Lean.Kernel
