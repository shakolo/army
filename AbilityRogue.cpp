//
// Created by eVol on 09.03.2017.
//

#include "AbilityRogue.hpp"

AbilityRogue::AbilityRogue(Unit *owner, double damage, double counterattackDamage) :
        Ability(owner, damage, counterattackDamage) {
}

void AbilityRogue::attack(Unit *attacker, Unit *target) {
    target->getStatement()->isAlive();
    attacker->getStatement()->isAlive();

    std::cout<< "attack succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;

    target->getStatement()->physicalDamage(this->getDamage());

    target->getStatement()->isAlive();
}

void AbilityRogue::counterattack(Unit* counterattacker, Unit* target){
    target->getStatement()->isAlive();
    counterattacker->getStatement()->isAlive();

    std::cout<<counterattacker->getName()<<" counterattack "<< target->getName() << std::endl;
    target->getStatement()->physicalDamage(counterattacker->getAbility()->getCounterattackDamage());

//    if (!counterattacker->getStatement()->getIsVampire()) {
//        this->counterattackDefault(counterattacker,target);
//        std::cout<<"counterattack succes: " << target->getName() <<" lost -"<<getCounterattackDamage() << std::endl;
//    } else if (counterattacker->getStatement()->getIsVampire()) {
//        counterattacker->getAbility()->counterattack(counterattacker,target);
//    }
}
//void AbilityRogue::counterattackDefault(Unit* counterattacker, Unit* target) {
//}
