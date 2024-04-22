/-!
# Delaboration of projection functions, and generalized field notation
-/

structure A where
  x : Nat

structure B extends A where
  y : Nat

structure C extends B where
  z : Nat

variable (a : A) (b : B) (c : C)

section
/-!
Checking projection delaboration, including parent projection collapse.
-/

/-- info: a.x : Nat -/
#guard_msgs in #check a.x
/-- info: b.x : Nat -/
#guard_msgs in #check b.x
/-- info: c.x : Nat -/
#guard_msgs in #check c.x

/-- info: b.y : Nat -/
#guard_msgs in #check b.y
/-- info: c.y : Nat -/
#guard_msgs in #check c.y

/-- info: c.z : Nat -/
#guard_msgs in #check c.z

end

section
/-!
Checking `pp.fieldNotation` can turn off this delaborator.
-/

set_option pp.fieldNotation false

/-- info: A.x a : Nat -/
#guard_msgs in #check a.x
/-- info: A.x (B.toA b) : Nat -/
#guard_msgs in #check b.x
/-- info: A.x (B.toA (C.toB c)) : Nat -/
#guard_msgs in #check c.x

/-- info: B.y b : Nat -/
#guard_msgs in #check b.y
/-- info: B.y (C.toB c) : Nat -/
#guard_msgs in #check c.y

/-- info: C.z c : Nat -/
#guard_msgs in #check c.z

end

structure Fin0 where
  val : Nat

structure Fin' extends Fin0

structure Fin'' (n : Nat) extends Fin0

structure D (n : Nat) extends A

variable (x : Fin0) (y : Fin') (z : Fin'' 5) (d : D 5)

section
/-!
Checking handling of parameters.
-/

/-- info: x.val : Nat -/
#guard_msgs in #check x.val
/-- info: y.val : Nat -/
#guard_msgs in #check y.val
/-- info: z.val : Nat -/
#guard_msgs in #check z.val
/-- info: d.x : Nat -/
#guard_msgs in #check d.x

end

section
/-!
Check handling of parameters when `pp.explicit` is true.
-/
set_option pp.explicit true
/-- info: c.x : Nat -/
#guard_msgs in #check c.x
/-- info: x.val : Nat -/
#guard_msgs in #check x.val
/-- info: y.val : Nat -/
#guard_msgs in #check y.val
/-- info: (@Fin''.toFin0 5 z).val : Nat -/
#guard_msgs in #check z.val
/-- info: (@D.toA 5 d).x : Nat -/
#guard_msgs in #check d.x

end

structure Fn (α β : Type) where
  toFun : α → β

variable (f : Fn Nat Int)

/-!
Check overapplication.
-/

/-- info: f.toFun 0 : Int -/
#guard_msgs in #check f.toFun 0

/-!
Basic generalized field notation
-/
def A.g (a : A) : Nat := a.x

/-- info: a.g : Nat -/
#guard_msgs in #check a.g
/-- info: b.g : Nat -/
#guard_msgs in #check b.g
/-- info: c.g : Nat -/
#guard_msgs in #check c.g

set_option pp.fieldNotation.generalized false in
/-- info: A.g a : Nat -/
#guard_msgs in #check a.g

set_option pp.fieldNotation false in
/-- info: A.g a : Nat -/
#guard_msgs in #check a.g

attribute [pp_nodot] A.g
/-- info: A.g a : Nat -/
#guard_msgs in #check a.g

/-!
Special case: do not use generalized field notation for numeric literals.
(This can be revisited if `2.succ` and `2.2.abs` are ever parseable, by human and/or by machine.)
-/
/-- info: Nat.succ 2 : Nat -/
#guard_msgs in #check Nat.succ 2
/-- info: Float.abs 2.2 : Float -/
#guard_msgs in #check Float.abs 2.2
