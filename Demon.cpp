//
// Created by eVol on 14.03.2017.
//

#include "Demon.hpp"
int Demon::i = 1;

Demon::Demon(std::string name) : Soldier(name) {
    this->setType("Demon");
//    i += 1;
}

void Demon::possession(Unit &target) {
    for ( ; target.getStatement()->getHP() > this->ability->getDamage(); ) {
        this->fight(target);
    }
}

