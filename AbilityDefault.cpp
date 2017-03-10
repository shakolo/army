//
// Created by eVol on 09.03.2017.
//

#include "AbilityDefault.hpp"

AbilityDefault::AbilityDefault(Unit* owner, int damage) : Ability(owner, damage) {}

void AbilityDefault::attack(Unit* attacker, Unit *target) {
    target->getStatement()->isAlive();
    attacker->getStatement()->isAlive();

    std::cout<< "attack succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;

    target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage());

    target->getStatement()->isAlive();

    this->counterattack(target,attacker);
}

void AbilityDefault::counterattack(Unit* counterattacker, Unit* target){
    target->getStatement()->isAlive();
    counterattacker->getStatement()->isAlive();

    std::cout<<counterattacker->getName()<<" counterattack "<< target->getName() << std::endl;

    if (!counterattacker->getStatement()->getIsVampire()) {
        this->counterattackDefault(counterattacker,target);
        std::cout<<"counterattack succes: " << target->getName() <<" lost -"<< this->getDamage()/2 << std::endl;
    } else if (counterattacker->getStatement()->getIsVampire()) {
        counterattacker->getAbility()->counterattack(counterattacker,target);
    }
}

void AbilityDefault::counterattackDefault(Unit* counterattacker, Unit* target) {
    target->getStatement()->setHP(target->getStatement()->getHP() -  counterattacker->getAbility()->getDamage()/2);
}

