structure A where
  x : Nat

structure B where
  x : Nat
  y : Nat

def foo (a : A) (b : B) : B := {a, b with} -- uses a.x

def boo (a : A) (b : B) : B := {b, a with} -- uses only b

structure C extends B

def baz (a : A) (b : B) : C := {a, b with} -- uses a.x

def biz (a : A) (b : B) : C := {b, a with} -- uses only b

def faz (a : A) (c : C) : C := {a, c with} -- uses a.x

def fiz (a : A) (c : C) : C := {c, a with} -- uses only c

#print foo
#print boo
#print baz
#print biz
#print faz
#print fiz

