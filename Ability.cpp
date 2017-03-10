//
// Created by eVol on 21.02.2017.
//

#include "Ability.hpp"

Ability::Ability(Unit* owner, int damage) {
    this->owner = owner;
    this->damage = damage;
}

Ability::~Ability() {

}

int Ability::getDamage() {
    return damage;
}

void Ability::setDamage(int damage) {
    Ability::damage = damage;
}

void Ability::infect(Unit *biter, Unit *target) {
    std::cout << biter->getName() << ", are you a wild animal?" <<std::endl;
    std::cout << std::endl;
}

