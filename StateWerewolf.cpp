//
// Created by eVol on 13.03.2017.
//

#include "StateWerewolf.hpp"

StateWerewolf::StateWerewolf(double hpmax) : State(hpmax) {
    isWolf = 0;
}

void StateWerewolf::physicalDamage(double dmg) {
    isAlive();
    std::cout <<  "Vamp has physical damage and lost -"<< dmg <<" hp "<<  std::endl;
    this->deductHP(dmg);
    isAlive();
}

void StateWerewolf::magicalInfluence(double dmg) {
    isAlive();
    if (isWolf && dmg >= 0) {
        dmg *=2;
    } else if (isWolf && dmg < 0) {
        dmg /= 2;
    }
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

void StateWerewolf::vampireDrinks(double) {

}

void StateWerewolf::transform() {
    std::cout << "State transform:" << std::endl;
    if (this->getIsIsWolf()) {
        std::cout <<"Werewolf comeback" << std::endl;
        this->setHP(this->getHP()/2);
        this->setHpmax(this->getHPM()/2);
        this->setIsWolf(0);
    } else {
        std::cout << "Big Bad Wolf! " << std::endl;
        this->setHP(this->getHP()*2);
        this->setHpmax(this->getHPM()*2);
        this->setIsWolf(true);
    }
}

bool StateWerewolf::getIsIsWolf() const {
    return isWolf;
}

void StateWerewolf::setIsWolf(bool isWolf) {
    StateWerewolf::isWolf = isWolf;
}
