/-
Copyright (c) 2024 Matthew Robert Ballard. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Thomas Skrivan, Matthew Robert Ballard
-/
prelude
import Init.Tactics
import Lean.Elab.Command
import Lean.Meta.Tactic.Simp.SimpTheorems

open Lean Meta

namespace Lean.Elab

def discrKey (e : Expr) : MetaM (Array DiscrTree.Key) := do
  let (_, _, type) ← withReducible <| forallMetaTelescopeReducing e
  let type ← whnfR type
  match type.eq? with
  | some (_, lhs, _) => DiscrTree.mkPath lhs simpDtConfig
  | none => throwError "unexpected kind of 'simp' theorem{indentExpr type}"

end Lean.Elab

namespace Lean.Elab.Command

open Elab Term

@[builtin_command_elab Lean.Parser.discrTreeKeyCmd] def elabDiscrKeyTree : CommandElab := fun stx =>
  Command.liftTermElabM <| do
    match stx with
    | `(command| #discr_tree_key $t:term) =>
      let e ← elabTerm t none
      let msgdata ← (← discrKey e).keysAsPattern
      IO.println ((← discrKey e).map fun key => key.format)
      return ()
    -- | `(command| #discr_tree_key $id:ident) => do return ()
      -- let info ← getConstInfo ide.getId
      -- IO.println ((← discrKey info.type).map fun key => key.format)
    | _                        => throwUnsupportedSyntax

end Lean.Elab.Command

#synth Format (DiscrTree.Key)

namespace Lean.Elab.Tactic

@[builtin_tactic Lean.Parser.Tactic.discrTreeKeyTac] def elabDiscrTreeKey : Tactic := fun _ => do
  let e ← getMainGoal
  let keys ← discrKey (← e.getType)
  logInfo s!"{keys.map fun key => key.format}"

end Lean.Elab.Tactic
