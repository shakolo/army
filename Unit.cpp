//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"

Unit::Unit(State *statement, Ability *ability, const std::string& name) : statement(statement), ability(ability), name(name) {
    std::cout << "Unit created: " << this->getName() << std::endl;
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


void Unit::fight(Unit &enemy) {
    enemy.getStatement()->isAlive();
    this->getAbility()->attack(&enemy);
    enemy.getAbility()->counterattack(this);
}



std::string Unit::getName() {
    return this->name;
}

void Unit::setName(const std::string& name) {
    this->name = name;
}
