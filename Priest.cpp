//
// Created by eVol on 13.03.2017.
//

#include "Priest.hpp"
#include "Fireball.hpp"
#include "AvadaKedavra.hpp"
#include "AbilityPriest.hpp"
#include "StateSpellcaster.hpp"
#include "StatePriest.hpp"
#include "Exorcism.hpp"

Priest::Priest(const std::string &name) : HealerMage(name) {
    this->setType(this->UnitTypesConfig["Priest"]->getNameUT());
    this->setAbility(new AbilityPriest(this, UnitTypesConfig["Priest"]->getDamage(), UnitTypesConfig["Priest"]->getCounterattackDamage()));
    this->setStatement(new StatePriest(UnitTypesConfig["Priest"]->getHpmax()));

    spellbook["AVADAKEDAVRA"] = new AvadaKedavra();
    spellbook["EXORCISM"] = new Exorcism();
    spellbook["FIREBALL"] = new Fireball();
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}

void Priest::cast(Unit &target, std::string magic) {
    std::cout << "Some music starts to play: Magic moments..  When two hearts are caring.." << std::endl;
    std::map<std::string, Spell*>::const_iterator pos = spellbook.find(magic);
    std::cout << this->getName() << " spells: \"" << pos->second->getSpellText() << "\" to " << target.getName() << std::endl;

//    double tempSpellPower = pos->second->getSpellPower();

    if (!target.getStatement()->getIsUndead() && pos->second->getSpellPower() >= 0) {
        pos->second->setSpellPower(pos->second->getSpellPower()/2);
        pos->second->magic(&target);
        pos->second->setSpellPower(pos->second->getSpellPower()*2);
    } else if (target.getStatement()->getIsUndead() && pos->second->getSpellPower() >= 0) {
        pos->second->setSpellPower(pos->second->getSpellPower()*2);
        std::cout << "I found Vampire!!!!" << std::endl;
        pos->second->magic(&target);
        pos->second->setSpellPower(pos->second->getSpellPower()/2);
    }

//    if (pos->second->getSpellPower() >= 0) {
//        pos->second->setSpellPower(pos->second->getSpellPower());
//        tempSpellPower = pos->second->getSpellPower();
//    }
}