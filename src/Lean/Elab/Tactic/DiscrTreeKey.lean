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

open Lean.Meta DiscrTree
open Lean.Elab.Tactic
open Lean.Elab.Command

private def mkKey (e : Expr) : MetaM (Array Key) := do
  let (_, _, type) ← withReducible <| forallMetaTelescopeReducing e
  let type ← whnfR type
  match type.eq? with
  | some (_, lhs, _) => mkPath lhs simpDtConfig
  | none => throwError "unexpected kind of 'simp' theorem{indentExpr type}"

@[builtin_command_elab Lean.Parser.discrTreeKeyCmd]
def evalDiscrTreeKeyCmd : CommandElab := fun stx => do
  Command.liftTermElabM <| do
    match stx with
    | `(command| #discr_tree_key $t:term) => do
      if let `($id:ident) := t then
        let info ← getConstInfo id.getId
        let msgdata ← keysAsPattern <| ← mkKey info.type
        logInfo msgdata
      else
      let e ← Term.elabTerm t none
      let msgdata ← keysAsPattern <| ← mkKey e
      logInfo msgdata
    | _                        => Elab.throwUnsupportedSyntax

@[builtin_tactic Lean.Parser.Tactic.discrTreeKeyTac]
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

end Lean.Elab.Tactic.DiscrTreeKey
