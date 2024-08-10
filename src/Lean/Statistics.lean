import Lean.Environment

open Lean

structure SimpStatEntry where
  name : Name
  attempts : Nat := 0
  successes : Nat := 0
deriving Inhabited

structure SimpStatState where
  stats : PersistentHashMap Name (Nat × Nat) := {}
deriving Inhabited

namespace SimpStatState

def addEntry (s : SimpStatState) (entry : SimpStatEntry) : SimpStatState :=
  { s with stats :=
      if let some stats := s.stats.find? entry.name then
        s.stats.insert entry.name (stats.1 + entry.attempts, stats.2 + entry.successes)
      else
        s.stats.insert entry.name (entry.attempts, entry.successes) }

end SimpStatState

open SimpStatState

builtin_initialize simpStatExt : SimplePersistentEnvExtension SimpStatEntry SimpStatState ←
  registerSimplePersistentEnvExtension {
    addEntryFn    := SimpStatState.addEntry
    addImportedFn := fun es => (mkStateFromImportedEntries addEntry {} es)}

def Lean.Environment.getAttempts? (env : Environment) (declName : Name) : Option Nat :=
  (simpStatExt.getState env).stats.find? declName |>.map (·.1)

def Lean.Environment.getAllAttempts (env : Environment) : Array (Name × Nat) :=
  (simpStatExt.getState env).stats.toArray |>.map fun (n, (a, _)) => (n, a)

def Lean.Environment.getSuccesses? (env : Environment) (declName : Name) : Option Nat :=
  (simpStatExt.getState env).stats.find? declName |>.map (·.2)

def Lean.Environment.getAllSuccesses (env : Environment) : Array (Name × Nat) :=
  (simpStatExt.getState env).stats.toArray |>.map fun (n, (_, s)) => (n, s)
