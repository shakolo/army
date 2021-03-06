//
// Created by eVol on 21.02.2017.
//

#include "State.hpp"
#include <iostream>

State::State(double hpmax) : hpmax(hpmax) {
    hp = hpmax;
    isVampire = false;
    isUndead = false;
}

State::~State() {

}

double State::getHP() {
    return hp;
}

double State::getHPM() {
    return hpmax;
}


bool State::isAlive() {
    if ( hp <= 0 ) {
        hp = 0;
        //throw UnitIsDeadException("Yes, man is mortal, but it would not be so sad. The bad thing is that sometimes it is suddenly mortal.");
        //std::cout << "Yes, man is mortal, but it would not be so sad. The bad thing is that sometimes it is suddenly mortal." << std::endl;
    }
    return (hp > 0);
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

void State:: deductHP(double hp) {
    if (this->hp > 0 ) {
        if ((this->hp - hp) > 0 ) {
            this->hp -= hp;
            //std::cout<< "deduct hp!" << std::endl;
        } else if (this->hp - hp <= 0) {
            std::cout<< "Someone dead!" << std::endl;
            this->hp = 0;
        }
    } else {
        std::cout << "Hey, what are you doing with deadman?" << std::endl;
        std::cout << std::endl;
    }
}


void State::addHP(double hp) {
    if (this->hp > 0 ) {
        if ((this->hp + hp) <= hpmax ) {
            this->hp += hp;
            //std::cout<< "add hp!" << std::endl;
        } else if ((this->hp + hp) > hpmax) {
            //std::cout<< "hpmax!" << std::endl;
            this->hp = hpmax;
        }
    } else {
        std::cout << "Hey, what are you doing with deadman?" << std::endl;
        std::cout << std::endl;
    }
}

bool State::getIsWerewolf() {
    return isWerewolf;
}

void State::setIsWerewolf() {
    isWerewolf = true;
}

void State::transform() {

}

bool State::getIsUndead() const {
    return isUndead;
}

void State::setIsUndead(bool isUndead) {
   this->isUndead = isUndead;
}
