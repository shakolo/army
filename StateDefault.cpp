//
// Created by eVol on 11.03.2017.
//

#include "StateDefault.hpp"

StateDefault::StateDefault(double hpmax) : State(hpmax) {}

void StateDefault::physicalDamage(double dmg) {
    isAlive();
    std::cout <<  "someome has physical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->deductHP(dmg);
    isAlive();
}

void StateDefault::vampireDrinks(double) {

}

void StateDefault::magicalInfluence(double dmg) {
    if( dmg >= 0 ) {
        std::cout <<  "someome has magical damage and lost -"<< dmg <<" hp "<<  std::endl;
        this->deductHP(dmg);
        std::cout << std::endl;
    } else {
        dmg *= -1;
        std::cout <<  "someome has magical heal and got +"<< dmg <<" hp "<<  std::endl;
        this->addHP(dmg);
        std::cout << std::endl;
    }
}

