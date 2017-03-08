//
// Created by eVol on 06.03.2017.
//
#include <iostream>
#include "Rogue.hpp"

Rogue::Rogue(const std::string &name): Unit(new State(100), new Ability(14), name ) {
    std::cout << getName() << " is a Rogue" << std::endl;
    std::cout<<std::endl;
}

Rogue::~Rogue() {

}

void Rogue::fight(Unit &enemy) {
    std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
    enemy.getStatement()->isAlive();
    this->getAbility()->attack(&enemy);
//    enemy.getAbility()->counterattack(this);
    std::cout<<std::endl;
}

std::ostream &operator<<(std::ostream &out, Rogue &rogue) {
    out << "Rogue name: " << rogue.getName() << std::endl;
    out << "state hp: " << rogue.getStatement()->getHP() << std::endl;
    out << "ability damage: " << rogue.getAbility()->getDamage() << std::endl;
    out<< std::endl;
    return out;
}
