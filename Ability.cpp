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
    std::cout<<"attack"<<std::endl;

    target->getStatement()->setHP(target->getStatement()->getHP() - damage);
}

void Ability::counterattack(Unit *target) {
    std::cout<<"counterattack"<<std::endl;
    target->getStatement()->setHP(target->getStatement()->getHP() - damage/2);
}


