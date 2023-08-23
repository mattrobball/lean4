structure A where

structure B extends A

def a : A := sorry

def b : B := sorry

def a'' : A := { a with }
#print a''

def a' : A := { b with }
#print a'

def b' : B := { a with }
#print b'
