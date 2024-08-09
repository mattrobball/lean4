import Lean.Environment

open Lean

structure StatisticEntry where
  name : Name
  attempts : Nat := 0
deriving Inhabited

structure StatisticsState where
  stats : SMap Name Nat := {}
deriving Inhabited

namespace StatisticsState

def addEntry (s : StatisticsState) (entry : StatisticEntry) : StatisticsState :=
  { s with stats :=
      if let some attempts := s.stats.find? entry.name then
        s.stats.insert entry.name (attempts + entry.attempts)
      else
        s.stats.insert entry.name entry.attempts }

def switch (s : StatisticsState) : StatisticsState :=
  { s with stats := s.stats.switch }

builtin_initialize statisticsExtension : SimplePersistentEnvExtension StatisticEntry StatisticsState ←
  registerSimplePersistentEnvExtension {
    addEntryFn    := StatisticsState.addEntry
    addImportedFn := fun es => (mkStateFromImportedEntries StatisticsState.addEntry {} es).switch}

def getAttempts? (env : Environment) (declName : Name) : Option Nat :=
  (statisticsExtension.getState env).stats.find? declName

