//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Berserker.hpp"

Berserker::Berserker(const std::string &name): Unit(new State(100), new Ability(10), name ) {
    std::cout << getName() << " is a Berserker" << std::endl;
}

Berserker::~Berserker() {

}

std::ostream &operator<<(std::ostream &out, Berserker &berserker) {
    out << "Soldier name :" << berserker.getName() << std::endl;
    out << "state hp: " << berserker.getStatement()->getHP() << std::endl;
    out << "ability damage: " << berserker.getAbility()->getDamage() << std::endl;
    return out;
}
