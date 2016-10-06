/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.monad init.meta.format
/-
Remark: we use a function that produces a format object as the exception information.
Motivation: the formatting object may be big, and we may create it on demand.
-/
meta inductive exceptional (A : Type)
| success   : A → exceptional
| exception : (options → format) → exceptional

section
open exceptional
variables {A : Type}
variables [has_to_string A]

protected meta def exceptional.to_string : exceptional A → string
| (success a)       := to_string a
| (exception .A e) := "Exception: " ++ to_string (e options.mk)

meta instance : has_to_string (exceptional A) :=
has_to_string.mk exceptional.to_string
end

namespace exceptional
variables {A B : Type}

protected meta def to_bool : exceptional A → bool
| (success _)      := tt
| (exception .A _) := ff

protected meta def to_option : exceptional A → option A
| (success a)      := some a
| (exception .A _) := none

@[inline] protected meta def fmap (f : A → B) (e : exceptional A) : exceptional B :=
exceptional.cases_on e
  (λ a, success (f a))
  (λ f, exception B f)

@[inline] protected meta def bind (e₁ : exceptional A) (e₂ : A → exceptional B) : exceptional B :=
exceptional.cases_on e₁
  (λ a, e₂ a)
  (λ f, exception B f)

@[inline] protected meta def return (a : A) : exceptional A :=
success a

@[inline] meta def fail (f : format) : exceptional A :=
exception A (λ u, f)
end exceptional

meta instance : monad exceptional :=
⟨@exceptional.fmap, @exceptional.return, @exceptional.bind⟩
