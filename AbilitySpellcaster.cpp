//
// Created by eVol on 11.03.2017.
//

#include "AbilitySpellcaster.hpp"

AbilitySpellcaster::AbilitySpellcaster(Unit *owner, double damage, double counterattackDamage):AbilityDefault(owner, damage, counterattackDamage){
}

void AbilitySpellcaster::attack(Unit *attacker, Unit* target) {
    std::cout<< "Spellcaster attack succes: " << target->getName()<<" lost -"<< this->getDamage()/2 << " hp" << std::endl;
    target->getStatement()->physicalDamage(attacker->getAbility()->getDamage()/2);
    target->getAbility()->counterattack(target,attacker);
}

void AbilitySpellcaster::counterattack(Unit* attacker, Unit *target) {
    std::cout<< "Spellcaster counterattacks!" << std::endl;
    target->getStatement()->physicalDamage(attacker->getAbility()->getCounterattackDamage()/2);
}