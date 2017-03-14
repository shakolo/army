//
// Created by eVol on 14.03.2017.
//

#include "Necromancer.hpp"
#include "AbilityNecromancer.hpp"

Necromancer::Necromancer(const std::string &name) : CombatMage(name) {
    this->setAbility(new AbilityNecromancer(this, UnitTypesConfig["Necromancer"]->getDamage(), UnitTypesConfig["Necromancer"]->getCounterattackDamage()));
    this->setType(this->UnitTypesConfig["Necromancer"]->getNameUT());
    this->getStatement()->setIsUndead(true);
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}

void Necromancer::addVictims(Unit *enemy) {
    std::cout << "addVictim!" << std::endl;
    victims.insert(enemy);
}
