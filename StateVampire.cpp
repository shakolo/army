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
    this->deductHP(dmg);
    isAlive();
}

void StateVampire::magicalInfluence(double dmg) {
    isAlive();
    if( dmg >= 0 ) {
        std::cout <<  "someome has magical damage and lost -"<< dmg <<" hp "<<  std::endl;
        this->deductHP(dmg);
    } else {
        dmg *= -1;
        std::cout <<  "someome has magical heal and got +"<< dmg <<" hp "<<  std::endl;
        this->addHP(dmg);
    }
    isAlive();
}
