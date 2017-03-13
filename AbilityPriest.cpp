//
// Created by eVol on 13.03.2017.
//

#include "AbilityPriest.hpp"

AbilityPriest::AbilityPriest(Unit *, double damage, double counterattackDamage) : AbilitySpellcaster(owner,damage,counterattackDamage){

}

void AbilityPriest::attack(Unit *attacker, Unit *target) {
    if (target->getStatement()->getIsUndead()) {
        std::cout<< "Priest attack succes: " << target->getName()<<" lost -"<< this->getDamage()*2 << " hp" << std::endl;
        target->getStatement()->physicalDamage(attacker->getAbility()->getDamage()*2);
    } else {
        std::cout<< "Priest attack succes: " << target->getName()<<" lost -"<< this->getDamage()/2 << " hp" << std::endl;
        target->getStatement()->physicalDamage(attacker->getAbility()->getDamage()/2);
    }
    target->getAbility()->counterattack(target,attacker);
}

void AbilityPriest::counterattack(Unit *attacker, Unit *target) {
    std::cout<< "Priest counterattacks!" << std::endl;
    if (target->getStatement()->getIsUndead()) {
        target->getStatement()->physicalDamage(attacker->getAbility()->getCounterattackDamage()*2);
    } else {
        target->getStatement()->physicalDamage(attacker->getAbility()->getCounterattackDamage()/2);
    }
}
