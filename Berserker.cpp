//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Berserker.hpp"
#include "StateBerserker.hpp"

Berserker::Berserker(const std::string &name): Unit(UnitTypesConfig["Berserker"]->getNameUT(), new StateBerserker(UnitTypesConfig["Berserker"]->getHpmax()), new AbilityDefault(this, UnitTypesConfig["Berserker"]->getDamage(), UnitTypesConfig["Berserker"]->getCounterattackDamage()), name ) {
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}

Berserker::~Berserker() {
}
