//
// Created by eVol on 11.03.2017.
//

#include "StateVampire.hpp"



StateVampire::StateVampire(double hpmax) : State(hpmax) {

}

void StateVampire::vampireDrinks(double blood) {
    isAlive();
    this->addHP(blood);
}

void StateVampire::physicalDamage(double dmg) {
    isAlive();
    std::cout <<  "Vamp has physical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->hp -= dmg;
    isAlive();
}

void StateVampire::magicalDamage(double dmg) {
    isAlive();
    std::cout <<  "someome has magical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->hp -= dmg;
    isAlive();
}
