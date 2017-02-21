//
// Created by eVol on 21.02.2017.
//

#include <iostream>
#include "Soldier.hpp"

Soldier::Soldier(const std::string &name)
        : Unit(new State(100), new Ability(10), name ) {
    std::cout << getName() << " is a Soldier" << std::endl;
}

Soldier::~Soldier() {

}

std::ostream &operator<<(std::ostream &out, Soldier &soldier) {
    out << "Soldier name :" << soldier.getName() << std::endl;
    out << "state hp: " << soldier.getStatement()->getHP() << std::endl;
    out << "ability damage: " << soldier.getAbility()->getDamage() << std::endl;
    return out;
}
