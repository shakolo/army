//
// Created by eVol on 11.03.2017.
//

#include "Spellcaster.hpp"
#include "StateSpellcaster.hpp"
#include "AbilitySpellcaster.hpp"

Spellcaster::Spellcaster(const std::string &name) : Unit(
        UnitTypesConfig["Spellcaster"]->getNameUT(),
        new StateSpellcaster(UnitTypesConfig["Spellcaster"]->getHpmax()),
        new AbilitySpellcaster(this, UnitTypesConfig["Spellcaster"]->getDamage(), UnitTypesConfig["Spellcaster"]->getCounterattackDamage()),
        name) {
}

void Spellcaster::cast(Unit &target) {
    std::cout << "Magiiiiiic momeeeeent!!!!!" << std::endl;
    target.getStatement()->magicalDamage(target.getAbility()->getDamage());
}
