structure A where

structure B extends A

def a : A := sorry

def b' : B := { a with }
#print b'
