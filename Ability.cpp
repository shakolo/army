//
// Created by eVol on 21.02.2017.
//

#include "Ability.hpp"

Ability::Ability(int damage) : damage(damage) {}

Ability::~Ability() {

}

int Ability::getDamage() {
    return damage;
}

