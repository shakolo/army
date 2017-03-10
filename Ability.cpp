//
// Created by eVol on 21.02.2017.
//

#include "Ability.hpp"

Ability::Ability(Unit* owner, double damage, double counterattackDamage) {
    this->owner = owner;
    this->damage = damage;
    this->counterattackDamage = counterattackDamage;

}

Ability::~Ability() {

}

double Ability::getDamage() {
    return damage;
}

void Ability::setDamage(double damage) {
    Ability::damage = damage;
}

void Ability::infect(Unit *biter, Unit *target) {
    std::cout << biter->getName() << ", are you a wild animal?" <<std::endl;
    std::cout << std::endl;
}

double Ability::getCounterattackDamage() const {
    return counterattackDamage;
}

void Ability::setCounterattackDamage(double counterattackDamage) {
    Ability::counterattackDamage = counterattackDamage;
}


