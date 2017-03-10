//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"
const double globalHP = 100;
const double globalDMG = 20;
const double globalCounterattackDMG = 4;

std::map<std::string, UnitType*>Unit::UnitTypes = {{"Soldier",new UnitType("Soldier", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Rogue", new UnitType("Rogue", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Berserker", new UnitType("Berserker", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Vampire", new UnitType("Vampire", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Werewolf", new UnitType("Werewolf", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Wizard", new UnitType("Wizard", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Healer", new UnitType("Healer", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Priest", new UnitType("Priest", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Warlock", new UnitType("Warlock", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Necromancer", new UnitType("Necromancer", globalHP, globalDMG, globalCounterattackDMG)},
};

Unit::Unit(const std::string& type, State *statement, Ability *ability, const std::string& name) :
        type(type),
        statement(statement),
        ability(ability),
        name(name)
{
    std::cout << "Unit created: " << this->getName() << std::endl;
}

Unit::~Unit() {

}

State * Unit::getStatement() {
    return statement;
}

void Unit::setStatement(double hp) {
    this->statement = new State(hp);
}

Ability * Unit::getAbility() {
    return ability;
}

void Unit::setAbility(Ability* newAbility) {
    if( this->ability != NULL ) {
        delete this->ability;
    }
    this->ability = newAbility;
}

std::string Unit::getName() {
    return this->name;
}

void Unit::setName(const std::string& name) {
    this->name = name;
}

void Unit::setType(const std::string &type) {
    Unit::type = type;
}

const std::string &Unit::getType() const {
    return type;
}

void Unit::bite(Unit &enemy) {
    std::cout << this->getName() << " bites " << enemy.getName() << std::endl;
    this->getAbility()->infect(this, &enemy);
}

std::ostream &operator<<(std::ostream &out, Unit &unit) {
    out << "Unit name: " << unit.getName() << std::endl;
    out << "Unit type: " << unit.getType() << std::endl;
    out << "state hp: " << unit.getStatement()->getHP() << std::endl;
    out << "ability damage: " << unit.getAbility()->getDamage() << std::endl;
    out << "ability counterattackDamage: " << unit.getAbility()->getCounterattackDamage() << std::endl;
    out << "isVampire " << unit.getStatement()->getIsVampire() <<std::endl;
    out<< std::endl;
    return out;
}

