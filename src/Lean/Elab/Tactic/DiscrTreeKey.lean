/-
Copyright (c) 2024 Matthew Robert Ballard. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Thomas Skrivan, Matthew Robert Ballard
-/
prelude
import Init.Tactics
import Lean.Elab.Command
import Lean.Meta.Tactic.Simp.SimpTheorems

namespace Lean.Elab.Tactic.DiscrTreeKey

open Lean Meta Elab Term Tactic DiscrTree --Meta Elab Term DiscrTree

private def mkKey (e : Expr) : MetaM (Array Key) := do
  let (_, _, type) ← withReducible <| forallMetaTelescopeReducing e
  let type ← whnfR type
  match type.eq? with
  | some (_, lhs, _) => DiscrTree.mkPath lhs simpDtConfig
  | none => throwError "unexpected kind of 'simp' theorem{indentExpr type}"

open Lean.Parser

@[builtin_command_elab discrTreeKeyCmd]
def evalDiscrTreeKeyCmd : Elab.Command.CommandElab := fun stx => do
  Elab.Command.liftTermElabM <| do
    match stx with
    | `(command| #discr_tree_key $t:term) => do
      if let `($id:ident) := t then
        let info ← getConstInfo id.getId
        let msgdata ← keysAsPattern <| ← mkKey info.type
        logInfo msgdata
      else
      let e ← Elab.Term.elabTerm t none
      let msgdata ← keysAsPattern <| ← mkKey e
      logInfo msgdata
    | _                        => Elab.throwUnsupportedSyntax

open Lean.Parser.Tactic

@[builtin_tactic discrTreeKeyTac]
def evalDiscrTreeKeyTac : Tactic := fun stx => do
  match stx with
  | `(tactic| discr_tree_key) =>
    let e ← getMainGoal
    let keys ← DiscrTree.keysAsPattern <| ← mkKey (← e.getType)
    logInfo keys
  | `(tactic| discr_tree_key $t:term) =>
    let e ← Term.elabTerm t none
    logInfo (← keysAsPattern <| ← mkKey e)
  | _                        => throwUnsupportedSyntax

private theorem foo (n : Nat) : n = n := by
  discr_tree_key
  rfl

#discr_tree_key foo

end Lean.Elab.Tactic.DiscrTreeKey
