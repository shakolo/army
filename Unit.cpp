//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"

std::map<std::string, UnitType*>Unit::UnitTypes = {{"Soldier",new UnitType("Soldier", 110, 14)},
                                             {"Rogue", new UnitType("Rogue", 100, 10)},
                                             {"Berserker", new UnitType("Berserker", 100, 10)},
                                             {"Vampire", new UnitType("Vampire", 100, 10)},
                                             {"Werewolf", new UnitType("Werewolf", 100, 10)},
                                             {"Wizard", new UnitType("Wizard", 100, 10)},
                                             {"Healer", new UnitType("Healer", 100, 10)},
                                             {"Priest", new UnitType("Priest", 100, 10)},
                                             {"Warlock", new UnitType("Warlock", 100, 10)},
                                             {"Necromancer", new UnitType("Necromancer", 100, 10)},
};

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
//    out << "Unit type: " << UnitTypes[this]->getNameUT() << std::endl;
    out << "state hp: " << unit.getStatement()->getHP() << std::endl;
    out << "ability damage: " << unit.getAbility()->getDamage() << std::endl;
    out<< std::endl;
    return out;
}

