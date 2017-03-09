//
// Created by eVol on 09.03.2017.
//

#include "AbilityRogue.hpp"

AbilityRogue::AbilityRogue(Unit *owner, int damage) :
        Ability(owner, damage) {
}

void AbilityRogue::attack(Unit *attacker, Unit *target) {
    target->getStatement()->isAlive();
    attacker->getStatement()->isAlive();

    std::cout<< "attack succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;

    target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage());

    target->getStatement()->isAlive();
}
void AbilityRogue::counterattack(Unit* counterattacker, Unit* target){}