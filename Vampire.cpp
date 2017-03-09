//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Vampire.hpp"

Vampire::Vampire(const std::string &name)
        : Unit(
        UnitTypes["Vampire"]->getNameUT(),
        new State(UnitTypes["Vampire"]->getHpmax()),
        new AbilityVampire(this, UnitTypes["Vampire"]->getDamage()),
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
