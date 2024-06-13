theorem liftOn_mk (a : α) (f : α → γ) (h : ∀ a₁ a₂, r a₁ a₂ → f a₁ = f a₂) :
    Quot.liftOn (Quot.mk r a) f h = f a := rfl

#discr_tree_key liftOn_mk

example (n : Nat) : n = n := by
  discr_tree_key
  rfl
