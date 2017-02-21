//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"

Unit::Unit(State *statement, Ability *ability) : statement(statement), ability(ability) {
    std::cout << "Unit created" << std::endl;
}

Unit::~Unit() {

}



State * Unit::getStatement() {
    return statement;
}
Ability * Unit::getAbility() {
    return ability;
}

void Unit::attack(Unit &enemy) {
    int newHP = enemy.getStatement()->getHP() - this->getAbility()->getDamage();
    enemy.getStatement()->setHP(newHP);
}

