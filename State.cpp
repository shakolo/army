//
// Created by eVol on 21.02.2017.
//

#include "State.hpp"

State::State(int hp, int hpmax) : hp(hp), hpmax(hpmax) {}

State::~State() {

}

int State::getHP() {
    return hp;
}

int State::getHPM() {
    return hpmax;
}


