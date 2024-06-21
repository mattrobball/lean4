/-
Copyright (c) 2024 Matthew Robert Ballard. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Tomas Skrivan, Matthew Robert Ballard
-/
prelude
import Init.Tactics
import Lean.Elab.Command
import Lean.Meta.Tactic.Simp.SimpTheorems

namespace Lean.Elab.Tactic.DiscrTreeKey

open Lean.Meta DiscrTree
open Lean.Elab.Tactic
open Lean.Elab.Command

private def mkKey (e : Expr) (simp : Bool) : MetaM (Array Key) := do
  let (_, _, type) ← withReducible <| forallMetaTelescopeReducing e
  let type ← whnfR type
  if simp then
    match type.eq? with
    | some (_, lhs, _) => mkPath lhs simpDtConfig
    | none => throwError "unexpected kind of 'simp' theorem{indentExpr type}"
  else
    mkPath type {}

private def getType (t : TSyntax `term) : TermElabM Expr := do
  if let `($id:ident) := t then
    if let some ldecl := (← getLCtx).findFromUserName? id.getId then
      return ldecl.type
    else
      let info ← getConstInfo (← realizeGlobalConstNoOverloadWithInfo id)
      return info.type
  else
    Term.elabTerm t none

@[builtin_command_elab Lean.Parser.discrTreeKeyCmd]
def evalDiscrTreeKeyCmd : CommandElab := fun stx => do
  Command.liftTermElabM <| do
    match stx with
    | `(command| #discr_tree_key $t:term) => do
      let type ← getType t
      logInfo (← keysAsPattern <| ← mkKey type false)
    | _                        => Elab.throwUnsupportedSyntax

@[builtin_command_elab Lean.Parser.discrTreeSimpKeyCmd]
def evalDiscrTreeSimpKeyCmd : CommandElab := fun stx => do
  Command.liftTermElabM <| do
    match stx with
    | `(command| #discr_tree_simp_key $t:term) => do
      let type ← getType t
      logInfo (← keysAsPattern <| ← mkKey type true)
    | _                        => Elab.throwUnsupportedSyntax

@[builtin_tactic Lean.Parser.Tactic.discrTreeKeyTac]
def evalDiscrTreeKeyTac : Tactic := fun stx => do
  match stx with
  | `(tactic| discr_tree_key) =>
      let e ← getMainGoal
      let keys ← keysAsPattern <| ← mkKey (← e.getType) false
      logInfo keys
  | `(tactic| discr_tree_key $t:term) =>
    withMainContext do
      let type ← getType t
      logInfo (← keysAsPattern <| ← mkKey type false)
  | _                        => throwUnsupportedSyntax

@[builtin_tactic Lean.Parser.Tactic.discrTreeSimpKeyTac]
def evalDiscrTreeSimpKeyTac : Tactic := fun stx => do
  match stx with
  | `(tactic| discr_tree_simp_key) =>
      let e ← getMainGoal
      let keys ← keysAsPattern <| ← mkKey (← e.getType) true
      logInfo keys
  | `(tactic| discr_tree_simp_key $t:term) =>
    withMainContext do
      let type ← getType t
      logInfo (← keysAsPattern <| ← mkKey type true)
  | _                        => throwUnsupportedSyntax

end Lean.Elab.Tactic.DiscrTreeKey
