//
// Created by eVol on 12.03.2017.
//

#include "CombatMage.hpp"

CombatMage::CombatMage(const std::string &name) : Spellcaster(name) {}

void CombatMage::cast(Unit &target, std::string magic) {
    std::cout << "Some music starts to play: Magic moments..  When two hearts are caring.." << std::endl;
    std::map<std::string, Spell*>::const_iterator pos = spellbook.find(magic);
    std::cout << this->getName() << " spells: \"" << pos->second->getSpellText() << "\" to " << target.getName() << std::endl;
    if (pos->second->getSpellPower() < 0) {
        pos->second->setSpellPower(pos->second->getSpellPower()/2);
    }
    pos->second->magic(&target);
    if (pos->second->getSpellPower() < 0) {
        pos->second->setSpellPower(pos->second->getSpellPower()*2);
    }
}