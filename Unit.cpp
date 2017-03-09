//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"

std::map<std::string, UnitType*>Unit::UnitTypes = {{"Soldier",new UnitType("Soldier", 110, 14)},
                                             {"Rogue", new UnitType("Rogue", 112, 12)},
                                             {"Berserker", new UnitType("Berserker", 20, 16)},
                                             {"Vampire", new UnitType("Vampire", 80, 10)},
                                             {"Werewolf", new UnitType("Werewolf", 100, 10)},
                                             {"Wizard", new UnitType("Wizard", 100, 10)},
                                             {"Healer", new UnitType("Healer", 100, 10)},
                                             {"Priest", new UnitType("Priest", 100, 10)},
                                             {"Warlock", new UnitType("Warlock", 100, 10)},
                                             {"Necromancer", new UnitType("Necromancer", 100, 10)},
};

Unit::Unit(const std::string& type, State *statement, Ability *ability, const std::string& name) : statement(statement), ability(ability), name(name), type(type) {
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

std::ostream &operator<<(std::ostream &out, Unit &unit) {
    out << "Unit name: " << unit.getName() << std::endl;
    out << "Unit type: " << unit.getType() << std::endl;
    out << "state hp: " << unit.getStatement()->getHP() << std::endl;
    out << "ability damage: " << unit.getAbility()->getDamage() << std::endl;
    out<< std::endl;
    return out;
}

