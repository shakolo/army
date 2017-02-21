//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"

Unit::Unit(State *statement, Ability *ability) : statement(statement), ability(ability) {
    std::cout << "Unit created" << std::endl;
}
Unit::Unit() {
    std::cout << "Unit created" << std::endl;
}

Unit::~Unit() {

}



State * Unit::getStatement() {
    return statement;
}

void Unit::setStatement(int hp) {
    this->statement = new State(hp);
}

Ability * Unit::getAbility() {
    return ability;
}

void Unit::setAbility(int dmg) {
    this->ability = new Ability(dmg);
}


void Unit::attack(Unit &enemy) {
    if ( enemy.isAlive() ) {
        int newHP = enemy.getStatement()->getHP() - this->getAbility()->getDamage();
        enemy.getStatement()->setHP(newHP);
    } else {
        std::cout << "Enemy dead" << std::endl;
    }

}

bool Unit::isAlive() {
    return this->getStatement()->getHP() > 0;
}





