import logic
open tactic

theorem tst (a b : Prop) (H : ¬ a ∨ ¬ b) (Hb : b) : ¬ a ∧ b
:= by apply and.intro;
      assumption;
      apply not_intro;
      exact
        (assume Ha, or.elim H
          (assume Hna, @absurd _ false Ha Hna)
          (assume Hnb, @absurd _ false Hb Hnb))
