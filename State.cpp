//
// Created by eVol on 21.02.2017.
//

#include "State.hpp"
#include <iostream>

State::State(double hpmax) : hpmax(hpmax) {
    hp = hpmax;
    isVampire = false;
}

State::~State() {

}

double State::getHP() {
    return hp;
}

double State::getHPM() {
    return hpmax;
}


void State::isAlive() {
    if ( hp <= 0 ) {
        hp = 0;
        throw UnitIsDeadException("Yes, man is mortal, but it would not be so sad. The bad thing is that sometimes it is suddenly mortal.");
    }
    //return hp > 0;
}

void State::setIsVampire() {
    isVampire = true;
}

bool State::getIsVampire() {
    return isVampire;
}

void State::setHpmax(double hpmax) {
   this->hpmax = hpmax;
}

void State::setHP(double hp) {
    this->hp = hp;
}

void State::addHP(double hp) {
    if ((this->hp + hp) <= hpmax ) {
        this->hp += hp;
        std::cout<< "add hp!" << std::endl;
    } else {
        std::cout<< "hpmax!" << std::endl;
        this->hp = hpmax;
    }
}

