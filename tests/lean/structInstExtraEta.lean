/-! This test assures that that `toA` field is not eta expanded using the `with` pattern as it was
  before #2478 -/

structure A where

structure B extends A

def a : A := sorry

def b' : B := { a with }
#print b'
