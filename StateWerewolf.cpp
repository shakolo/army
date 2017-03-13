//
// Created by eVol on 13.03.2017.
//

#include "StateWerewolf.hpp"

StateWerewolf::StateWerewolf(double hpmax) : State(hpmax) {}

void StateWerewolf::physicalDamage(double dmg) {
    isAlive();
    std::cout <<  "Vamp has physical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->hp -= dmg;
    isAlive();
}

void StateWerewolf::magicalInfluence(double dmg) {
    isAlive();
    if( dmg >= 0 ) {
        std::cout <<  "someome has magical damage and lost -"<< dmg <<" hp "<<  std::endl;
        this->hp -= dmg;
    } else {
        dmg *= -1;
        std::cout <<  "someome has magical heal and got +"<< dmg <<" hp "<<  std::endl;
        this->addHP(dmg);
    }
    isAlive();
}

void StateWerewolf::vampireDrinks(double) {

}
