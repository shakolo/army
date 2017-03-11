//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Berserker.hpp"

Berserker::Berserker(const std::string &name): Unit(UnitTypesConfig["Berserker"]->getNameUT(), new StateDefault(UnitTypesConfig["Berserker"]->getHpmax()), new AbilityDefault(this, UnitTypesConfig["Berserker"]->getDamage(), UnitTypesConfig["Berserker"]->getCounterattackDamage()), name ) {
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}
void Berserker::fight(Unit &enemy) {
//    this->getStatement()->isAlive();
        std::cout<<std::endl;
        std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
//        this->getAbility()->attack(this, &enemy);
//        enemy.getAbility()->counterattack(&enemy, this);
        std::cout<<std::endl;
}
Berserker::~Berserker() {

}
