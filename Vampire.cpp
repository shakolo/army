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
    this->getStatement()->setIsUndead(true);
    std::cout<<std::endl;
}

Vampire::~Vampire() {

}
