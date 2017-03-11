//
// Created by eVol on 21.02.2017.
//

#include <iostream>
#include "Soldier.hpp"

Soldier::Soldier(const std::string &name)
        : Unit(UnitTypesConfig["Soldier"]->getNameUT(),
               new StateDefault(UnitTypesConfig["Soldier"]->getHpmax()),
               new AbilityDefault(this, UnitTypesConfig["Soldier"]->getDamage(), UnitTypesConfig["Soldier"]->getCounterattackDamage()),
               name)
{
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}

//void Soldier::fight(Unit &enemy) {
//        this->statement->isAlive();
//        std::cout << std::endl;
//        std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
//        this->getAbility()->attack(this, &enemy);
//        std::cout << std::endl;
//}



Soldier::~Soldier() {

}
