import Init.Data.Nat.Basic
import Init.Data.List.Lemmas

universe u

open Nat List

-- Keys for simp theorems
#discr_tree_simp_key zero_le
#discr_tree_simp_key succ_eq_add_one
#discr_tree_simp_key Nat.mul_one
#discr_tree_simp_key Nat.not_le
#discr_tree_simp_key Nat.pred_succ
#discr_tree_simp_key get?_nil
#discr_tree_simp_key get?_cons_succ
#discr_tree_simp_key or_cons
#discr_tree_simp_key not_mem_nil
#discr_tree_simp_key mem_cons
#discr_tree_simp_key singleton_append
#discr_tree_simp_key append_eq_nil
#discr_tree_simp_key mapM_nil

-- Keys for instances
#discr_tree_key Nat.instIdempotentOpGcd
#discr_tree_key List.instDecidableMemOfLawfulBEq
#discr_tree_key List.instForIn'InferInstanceMembership

-- Specifying the term directly
def bar (_ _ : Nat) : Nat := default

#discr_tree_key (∀ {a n : Nat}, bar a (OfNat.ofNat n) = default)
#discr_tree_simp_key (∀ {a n : Nat}, bar a (no_index (OfNat.ofNat n)) = default)
#discr_tree_simp_key (∀ m : Nat, ∃ n : Nat, m ≠ n)
#discr_tree_simp_key (∀ m : Nat, m > 0 → m ≠ 0)
