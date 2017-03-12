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

void Spellcaster::cast(Unit &target, std::string magic) {
    std::cout << "Magic moments..  When two hearts are caring.." << std::endl;
    std::map<std::string, Spell*>::const_iterator pos = spellbook.find(magic);
    std::cout << this->getName() << " spells: \"" << pos->second->getSpellText() << "\" to " << target.getName() << std::endl;
    pos->second->magicAttack(&target);
}

