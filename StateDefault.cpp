//
// Created by eVol on 11.03.2017.
//

#include "StateDefault.hpp"

StateDefault::StateDefault(double hpmax) : State(hpmax) {}
void StateDefault::physicalDamage(double dmg) {
    isAlive();
    std::cout <<  "someome has physical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->hp -= dmg;
    isAlive();
}

void StateDefault::vampireDrinks(double) {

}

void StateDefault::magicalDamage(double dmg) {
    isAlive();
    std::cout <<  "someome has magical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->hp -= dmg;
    isAlive();
}


