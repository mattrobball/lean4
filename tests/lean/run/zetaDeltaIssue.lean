structure A where
  a : Nat
structure B extends A where
  b : Nat
  w : a = b
def x : A where a := 37
@[simp] theorem x_a : x.a = 37 := rfl

def y : B := { x with b := 37, w := by simp }

class foo where

def bar : foo := ⟨⟩

def biz : Prop := True

def boz [foo] : biz := trivial

structure baz where
  p : biz

example : baz :=
  { bar with p := boz }

