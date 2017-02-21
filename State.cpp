//
// Created by eVol on 21.02.2017.
//

#include "State.hpp"

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
    this->hp = newHP;
}



