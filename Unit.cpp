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
    std::cout<<std::endl;
    std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
    enemy.getStatement()->isAlive();
    this->getAbility()->attack(&enemy);

    if (enemy.getStatement()->isAlive() && !enemy.getStatement()->getIsVampire()) {
        enemy.getAbility()->counterattack(this);
    }

    if (enemy.getStatement()->isAlive() && enemy.getStatement()->getIsVampire()) {
        std::cout<< "Vampire counterattacks!" << std::endl;
        if ( (enemy.getAbility()->getDamage())/2 <= this->getStatement()->getHP() ){
            enemy.getStatement()->setHP(enemy.getStatement()->getHP() + (enemy.getAbility()->getDamage())/2);
            enemy.getAbility()->counterattack(this);
        } else {
            enemy.getStatement()->setHP(enemy.getStatement()->getHP() + this->getStatement()->getHP());
            enemy.getAbility()->counterattack(this);
        }
    }
    std::cout<<std::endl;
}



std::string Unit::getName() {
    return this->name;
}

void Unit::setName(const std::string& name) {
    this->name = name;
}
std::ostream &operator<<(std::ostream &out, Unit &unit) {
    out << "Unit name: " << unit.getName() << std::endl;
    out << "state hp: " << unit.getStatement()->getHP() << std::endl;
    out << "ability damage: " << unit.getAbility()->getDamage() << std::endl;
    out<< std::endl;
    return out;
}
