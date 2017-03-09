//
// Created by eVol on 09.03.2017.
//

#include "AbilityDefault.hpp"

AbilityDefault::AbilityDefault(Unit* owner, int damage) : Ability(owner, damage) {}

void AbilityDefault::attack(Unit* attacker, Unit *target) {
    target->getStatement()->isAlive();
    attacker->getStatement()->isAlive();

    if (!attacker->getStatement()->getIsVampire()) {
        std::cout<< "attack succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;

        target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage());
        target->getStatement()->isAlive();
//        attacker->getAbility()->counterattack(target, attacker);
    } else if (attacker->getStatement()->getIsVampire()) {
//        attacker->getAbility()->attackVampire(attacker, target);
    }

}
//void AbilityDefault::counterattackDefault(Unit *target) {
//    target->getStatement()->isAlive();
//    target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage()/2);
//    std::cout<<"counterattack succes: " << target->getName() <<" lost -"<< this->getDamage()/2 << " hp" << std::endl;
//}
void AbilityDefault::counterattack(Unit* counterattacker, Unit* target){
    target->getStatement()->isAlive();
    std::cout<<counterattacker->getName()<<" counterattack "<< target->getName() << std::endl;

    if (!counterattacker->getStatement()->getIsVampire()) {
        target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage()/2);
        std::cout<<"counterattack succes: " << target->getName() <<" lost -"<< this->getDamage()/2 << std::endl;
    } else if (counterattacker->getStatement()->getIsVampire()) {
//        counterattacker->getAbility()->counterattackVampire(counterattacker,target);
    }
}


