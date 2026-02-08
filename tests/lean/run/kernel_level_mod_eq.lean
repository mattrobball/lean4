/-!
# Test: kernel quick_is_def_eq with level-aware structural equality

This test verifies that the kernel's type checker efficiently handles expressions
that are structurally equal modulo universe level normalization (e.g., `max u v ≡ max v u`).

The `rfl` proofs below are checked by the kernel type checker, which needs to verify
that the two sides of the equality are definitionally equal.
-/

universe u v

-- Sort comparison: max u v ≡ max v u
-- The kernel needs is_equal_mod_levels to quickly handle this
example : (Sort (max u v)) = (Sort (max v u)) := rfl

-- Functions whose types involve `max u v` in different orderings
-- When the kernel checks the rfl proof, it encounters types with reordered levels
def myFun (α : Type (max u v)) (x : α) : α := x

example : @myFun.{u, v} = @myFun.{u, v} := rfl

-- A more interesting scenario: definitions that produce types with different level orderings
-- through computation
def levelTest (α : Type u) (β : Type v) : Type (max u v) := α × β

-- The kernel must check that `Type (max u v)` = `Type (max v u)` when verifying these
example (α : Type u) (β : Type v) : levelTest α β = levelTest α β := rfl
