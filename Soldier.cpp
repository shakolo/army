//
// Created by eVol on 21.02.2017.
//

#include <iostream>
#include "Soldier.hpp"
#include "UnitType.hpp"
#include <map>

Soldier::Soldier(const std::string &name)
        : Unit(UnitTypes["Soldier"]->getNameUT(), new State(UnitTypes["Soldier"]->getHpmax()), new Ability(UnitTypes["Soldier"]->getDamage()), name) {
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}
void Soldier::fight(Unit &enemy) {
    std::cout<<std::endl;
    std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
//    enemy.getStatement()->isAlive();

    this->getAbility()->attack(&enemy);
    enemy.getAbility()->counterattack(&enemy, this);
    std::cout<<std::endl;
}
Soldier::~Soldier() {

}

//std::ostream &operator<<(std::ostream &out, Soldier &soldier) {
//    out << "Soldier name: " << soldier.getName() << std::endl;
//    out << "state hp: " << soldier.getStatement()->getHP() << std::endl;
//    out << "ability damage: " << soldier.getAbility()->getDamage() << std::endl;
//    out<< std::endl;
//    return out;
//}
