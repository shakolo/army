//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Berserker.hpp"

Berserker::Berserker(const std::string &name): Unit(UnitTypes["Berserker"]->getNameUT(), new State(UnitTypes["Berserker"]->getHpmax()), new Ability(UnitTypes["Berserker"]->getDamage()), name ) {
//    this->setType(UnitTypes["Berserker"]->getNameUT());
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}

Berserker::~Berserker() {

}

//std::ostream &operator<<(std::ostream &out, Berserker &berserker) {
//    out << "Berserker name: " << berserker.getName() << std::endl;
//    out << "state hp: " << berserker.getStatement()->getHP() << std::endl;
//    out << "ability damage: " << berserker.getAbility()->getDamage() << std::endl;
//    out<< std::endl;
//    return out;
//}
