//
// Created by eVol on 21.02.2017.
//

#include <iostream>
#include "Soldier.hpp"



const std::string &Soldier::getName() const {
    return name;
}

Soldier::~Soldier() {

}

Soldier::Soldier(const std::string &name) : name(name) {
    this->setStatement(100);
    this->setAbility(10);
    std::cout << "Soldier created:" << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, Soldier &soldier) {
    out << "Soldier name :" << soldier.getName() << std::endl;
    out << "state hp: " << soldier.getStatement()->getHP() << std::endl;
    out << "ability damage: " << soldier.getAbility()->getDamage() << std::endl;
    return out;
}
