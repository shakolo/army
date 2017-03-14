//
// Created by eVol on 14.03.2017.
//

#include "AbilityNecromancer.hpp"
#include "Necromancer.hpp"

AbilityNecromancer::AbilityNecromancer(Unit *, double damage, double counterattackDamage) : AbilitySpellcaster(owner,damage,counterattackDamage) {
}

void AbilityNecromancer::attack(Unit *attacker, Unit *target) {

    std::cout<< "Necromancer attack succes: " << target->getName()<<" lost -"<< this->getDamage()<< " hp" << std::endl;
    target->getStatement()->physicalDamage(attacker->getAbility()->getDamage());
    attacker->getAbility()->addVictims(attacker, target);
    target->addObserver(attacker);
    target->getStatement()->isAlive();
    target->getAbility()->counterattack(target,attacker);

}

void AbilityNecromancer::counterattack(Unit *attacker, Unit *target) {
    std::cout<< "Necromancer counterattacks!" << std::endl;

        target->getStatement()->physicalDamage(attacker->getAbility()->getCounterattackDamage());


}

void AbilityNecromancer::addVictims(Unit *attacker, Unit *target) {
    attacker->addVictims(target);
}

