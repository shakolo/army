//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Vampire.hpp"

Vampire::Vampire(const std::string &name)
        : Unit(
        UnitTypesConfig["Vampire"]->getNameUT(),
        new StateVampire(UnitTypesConfig["Vampire"]->getHpmax()),
        new AbilityVampire(this, UnitTypesConfig["Vampire"]->getDamage(), UnitTypesConfig["Vampire"]->getCounterattackDamage()),
        name )
{
    std::cout << getName() << " is a " << getType() << std::endl;
    this->statement->setIsVampire();
    std::cout<<std::endl;
}

Vampire::~Vampire() {

}

void Vampire::fight(Unit &enemy) {
    this->statement->isAlive();
    std::cout << std::endl;
    std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
    this->ability->attack(this, &enemy);
    std::cout << std::endl;
}
