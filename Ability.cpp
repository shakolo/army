//
// Created by eVol on 21.02.2017.
//

#include "Ability.hpp"
#include <iostream>

Ability::Ability(int damage) : damage(damage) {}

Ability::~Ability() {

}

int Ability::getDamage() {
    return damage;
}

void Ability::attack(Unit *target) {
    target->getStatement()->isAlive();
    std::cout<< "attack succes: " << target->getName()<<" lost -"<< damage << " hp" << std::endl;

    target->getStatement()->setHP(target->getStatement()->getHP() - damage);
}

void Ability::counterattack(Unit* counterattacker, Unit* target){
    target->getStatement()->isAlive();
    std::cout<<counterattacker->getName()<<" counterattack "<< target->getName() << std::endl;
    if (!counterattacker->getStatement()->getIsVampire()) {
        counterattacker->getAbility()->counterattackDefault(target);
    } else if (counterattacker->getStatement()->getIsVampire()) {
        counterattacker->getAbility()->counterattackVampire(counterattacker,target);
    }
}

void Ability::counterattackDefault(Unit *target) {
    target->getStatement()->setHP(target->getStatement()->getHP() - damage/2);
    std::cout<<"counterattack succes: " << target->getName() <<" lost -"<< damage/2 << " hp" << std::endl;
}

void Ability::counterattackVampire(Unit* vampire, Unit *target) {
    std::cout<< "Vampire counterattacks!" << std::endl;
    if ( (vampire->getAbility()->getDamage())/2 <= target->getStatement()->getHP() ){
            vampire->getStatement()->setHP(vampire->getStatement()->getHP() + (vampire->getAbility()->getDamage())/2);
            std::cout << vampire->getName() << " drinks +" << (vampire->getAbility()->getDamage()/2) << " of blood " <<  target->getName() << std::endl;
            vampire->getAbility()->counterattackDefault(target);
        } else {
        vampire->getStatement()->setHP(target->getStatement()->getHP() + vampire->getStatement()->getHP());
        std::cout << vampire->getName() << " drinks +" << target->getStatement()->getHP() << " of blood " <<  target->getName() << std::endl;

        vampire->getAbility()->counterattackDefault(target);
    }
}

void Ability::setDamage(int damage) {
    Ability::damage = damage;
}
