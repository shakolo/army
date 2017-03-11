//
// Created by eVol on 06.03.2017.
//

#include <iostream>
#include "Rogue.hpp"

Rogue::Rogue(const std::string &name)
        : Unit(UnitTypesConfig["Rogue"]->getNameUT(),
                new StateDefault(UnitTypesConfig["Rogue"]->getHpmax()),
                new AbilityRogue(this, UnitTypesConfig["Rogue"]->getDamage(), UnitTypesConfig["Rogue"]->getCounterattackDamage()),
                name)
{
    std::cout << getName() << " is a " <<  getType() << std::endl;
    std::cout<<std::endl;
}

void Rogue::fight(Unit &enemy) {
        this->getStatement()->isAlive();
        std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
        enemy.getStatement()->isAlive();
        this->ability->attack(this, &enemy);
        std::cout << std::endl;
}

Rogue::~Rogue() {

}

