cmake_minimum_required(VERSION 3.6)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Unit.cpp Unit.hpp State.cpp State.hpp Ability.cpp Ability.hpp Soldier.cpp Soldier.hpp Rogue.cpp Rogue.hpp Berserker.cpp Berserker.hpp Vampire.cpp Vampire.hpp UnitType.cpp UnitType.hpp UnitIsDeadException.hpp AbilityDefault.cpp AbilityDefault.hpp AbilityVampire.cpp AbilityVampire.hpp AbilityRogue.cpp AbilityRogue.hpp StateVampire.cpp StateVampire.hpp StateDefault.cpp StateDefault.hpp Spellcaster.cpp Spellcaster.hpp StateSpellcaster.cpp StateSpellcaster.hpp AbilitySpellcaster.cpp AbilitySpellcaster.hpp Spell.cpp Spell.hpp Wizard.cpp Wizard.hpp Fireball.cpp Fireball.hpp Healer.cpp Healer.hpp CombatMage.cpp CombatMage.hpp HealerMage.cpp HealerMage.hpp SpellType.cpp SpellType.hpp AvadaKedavra.cpp AvadaKedavra.hpp ZeroSpell.cpp ZeroSpell.hpp)
add_executable(army ${SOURCE_FILES})