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
    std::cout << this->getName() << " in possession: I will fight you while you steel alive, " << target.getName() << std::endl;
    for ( ; target.getStatement()->getHP() > this->ability->getDamage(); ) {
        this->fight(target);
    }
}

