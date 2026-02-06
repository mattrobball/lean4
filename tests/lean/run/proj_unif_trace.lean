abbrev N := 1000

class A (α : Type u) where
  a : α → α

class B (α : Type u) extends A α
class C (α : Type u) extends A α

class X (α : Type u) (n : Nat) where
  a : α → α

variable {α : Type u}

instance [X α N] : B α where a := X.a N
instance [X α N] : C α where a := X.a N

instance {n : Nat} [X α n] : X α (n + 1) where a := X.a n
instance : X α 0 where a x := x

set_option synthInstance.maxHeartbeats 1000000
set_option synthInstance.maxSize 10000

example (α : Type u) (β : Type t) :
    let inst' : B (α × (_ : Type _)) := inferInstance;
    let inst : C (α × β) := inferInstance;
    inst.a = inst'.a :=
  rfl
