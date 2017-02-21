//
// Created by eVol on 21.02.2017.
//

#include <iostream>
#include "Soldier.hpp"

Soldier::Soldier(State *statement, Ability *ability, const std::string &name) : Unit(statement, ability), name(name) {
    std::cout << "Create soldier: " << this->getName() <<std::endl;
}

const std::string &Soldier::getName() const {
    return name;
}

Soldier::~Soldier() {

}


std::ostream &operator<<(std::ostream &out, Soldier &soldier) {
    out << "Soldier name :" << soldier.getName() << std::endl;
    out << "state hp: " << soldier.getStatement()->getHP() << std::endl;
    out << "ability damage: " << soldier.getAbility()->getDamage() << std::endl;
    return out;
}
