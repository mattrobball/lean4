example (f : Nat → Nat) : (if f x = 0 then f x else f x + 1) + f x = y := by
  simp (config := { contextual := true })
  guard_target =ₛ (if f x = 0 then 0 else f x + 1) + f x = y
  sorry

example (f : Nat → Nat) : f x = 0 → f x + 1 = y := by
  simp (config := { contextual := true })
  guard_target =ₛ f x = 0 → 1 = y
  sorry

example (f : Nat → Nat) : let _  : f x = 0 := sorry; f x + 1 = y := by
  simp (config := { contextual := true, zeta := false })
  guard_target =ₛ let _  : f x = 0 := sorry; 1 = y
  sorry

def overlap : Nat → Nat
  | 0 => 0
  | 1 => 1
  | n+1 => overlap n

example : (if (n = 0 → False) then overlap (n+1) else overlap (n+1)) = overlap n  := by
  simp only [overlap]
  guard_target =ₛ (if (n = 0 → False) then overlap n else overlap (n+1)) = overlap n
  sorry

opaque p : Nat → Bool
opaque g : Nat → Nat
@[simp] theorem g_eq (h : p x) : g x = x := sorry

example : (if p x then g x else g x + 1) + g x = y := by
  simp (discharger := assumption)
  guard_target =ₛ (if p x then x else g x + 1) + g x = y
  sorry

example : (let _  : p x := sorry; g x + 1 = y) ↔ g x = y := by
  simp (config := { zeta := false }) (discharger := assumption)
  guard_target =ₛ (let _  : p x := sorry; x + 1 = y) ↔ g x = y
  sorry
