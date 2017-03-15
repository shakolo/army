//
// Created by eVol on 13.03.2017.
//

#include "StateBerserker.hpp"

StateBerserker::StateBerserker(double hpmax) : State(hpmax) {}

void StateBerserker::physicalDamage(double dmg) {
    isAlive();
    std::cout <<  "someome has physical damage and lost -"<< dmg <<" hp "<<  std::endl;
    std::cout << std::endl;
    this->hp -= dmg;
    isAlive();
}

void StateBerserker::vampireDrinks(double) {

}

void StateBerserker::magicalInfluence(double dmg) {
    std::cout << "Berseker: Odin protect me! Trembling witch!"<<  std::endl;
    std::cout << std::endl;
}