/-! This test assures that that `toA` field is not eta expanded using the `with` pattern as it was
  before #2478 -/

structure A where
  x : Nat

structure B extends A

structure C extends B

structure D extends B

def a : A := ⟨ 0 ⟩

def b : B := { a with }
#print b

def c : C := { a with }
#print c

def d : D := { c with }
#print d
