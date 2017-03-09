//
// Created by eVol on 21.02.2017.
//

#include "State.hpp"
#include <iostream>

State::State(int hpmax) : hpmax(hpmax) {
    hp = hpmax;
    isVampire = false;
}

State::~State() {

}

int State::getHP() {
    return hp;
}

int State::getHPM() {
    return hpmax;
}

void State::setHP(int newHP) {
    isAlive();
    if ( newHP <= hpmax ) {
        this->hp = newHP;
    } else {
        this->hp = this->hpmax;
    }
    isAlive();
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

void State::setHpmax(int hpmax) {
    State::hpmax = hpmax;
}


