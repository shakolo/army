//
// Created by eVol on 21.02.2017.
//

#include <iostream>
#include "Soldier.hpp"

Soldier::Soldier(const std::string &name)
        : Unit(UnitTypes["Soldier"]->getNameUT(),
               new State(UnitTypes["Soldier"]->getHpmax()),
               new AbilityDefault(this, UnitTypes["Soldier"]->getDamage()),
               name)
{
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}
void Soldier::fight(Unit &enemy) {
        this->statement->isAlive();
        std::cout << std::endl;
        std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
        this->ability->attack(this, &enemy);
        std::cout << std::endl;
}
Soldier::~Soldier() {

}
