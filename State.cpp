//
// Created by eVol on 21.02.2017.
//

#include "State.hpp"
#include <iostream>

State::State(int hpmax) : hpmax(hpmax) {
    hp = hpmax;
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
    this->hp = newHP;
}

bool State::isAlive() {
    if ( hp <= 0 ) {
       std::cout << "UnitDeadException()" << std::endl;
        throw;
    }
    return hp > 0;
}


