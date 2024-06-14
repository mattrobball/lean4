universe u

variable (α : Type u) [Add α]

class AddSemigroup (α : Type u) extends Add α where
  add_assoc : ∀ (a b c : α), a + b + c = a + (b + c)

#discr_tree_key AddSemigroup.add_assoc

structure Wrapper (α : Type u) where
  val : α

namespace Foo

scoped instance foo : Add (Wrapper α) where
  add x y := ⟨x.val + y.val⟩

end Foo

namespace Bar

scoped instance bar : Add (Wrapper α) where
  add := fun ⟨x⟩ ⟨y⟩ => ⟨x + y⟩

end Bar

section

open Foo AddSemigroup

variable (β : Type u) [AddSemigroup β]

instance : AddSemigroup (Wrapper β) where
  add_assoc _ _ _ := congrArg Wrapper.mk (by
    discr_tree_key AddSemigroup.add_assoc
    discr_tree_key
    fail_if_success simp [add_assoc]
    sorry)

end

section

open Bar AddSemigroup

variable (β : Type u) [AddSemigroup β]

instance : AddSemigroup (Wrapper β) where
  add_assoc _ _ _ := congrArg Wrapper.mk (by
    have (b₁ b₂ b₃ : β) : b₁ + b₂ + b₃ = b₁ + (b₂ + b₃) := add_assoc _ _ _
    discr_tree_key this
    discr_tree_key
    simp [add_assoc])
end

