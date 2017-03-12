//
// Created by eVol on 11.03.2017.
//

#include "Spellcaster.hpp"
#include "StateSpellcaster.hpp"
#include "AbilitySpellcaster.hpp"
#include "ZeroSpell.hpp"

Spellcaster::Spellcaster(const std::string &name) : Unit(
        UnitTypesConfig["Spellcaster"]->getNameUT(),
        new StateSpellcaster(UnitTypesConfig["Spellcaster"]->getHpmax()),
        new AbilitySpellcaster(this, UnitTypesConfig["Spellcaster"]->getDamage(), UnitTypesConfig["Spellcaster"]->getCounterattackDamage()),
        name) {
}

void Spellcaster::cast(Unit &target, std::string magic) {
    std::cout << "Magic moments..  When two hearts are caring.." << std::endl;
    std::map<std::string, Spell*>::const_iterator pos = spellbook.find(magic);
    if (pos->second == 0) {
        spellbook.insert(std::pair<std::string, Spell*>(magic, new ZeroSpell));
        std::map<std::string, Spell*>::const_iterator posnew = spellbook.find(magic);
        pos = posnew;
    }
    std::cout << this->getName() << " spells: \"" << pos->second->getSpellText() << "\" to " << target.getName() << std::endl;
    pos->second->magic(&target);

}


std::ostream &operator<<(std::ostream &out, Spellcaster &unit) {
    out << "Unit name: " << unit.getName() << std::endl;
    out << "Unit type: " << unit.getType() << std::endl;
    out << "state hp: " << unit.getStatement()->getHP() << std::endl;
    out << "ability damage: " << unit.getAbility()->getDamage() << std::endl;
    out << "ability counterattackDamage: " << unit.getAbility()->getCounterattackDamage() << std::endl;
    out << "isVampire " << unit.getStatement()->getIsVampire() <<std::endl;
    out << "ability spells: " << std::endl;
//    for ( std::map<std::string, Spell*>::const_iterator pos = spellbook.begin() ; pos == spellbook.end();  ) {
//        out << pos->first << std::endl;
//    }
    out<< std::endl;
    return out;
}