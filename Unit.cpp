//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"
//#include <set>
const double globalHP = 100;
const double globalDMG = 20;
const double globalCounterattackDMG = 4;

std::map<std::string, UnitType*>Unit::UnitTypesConfig = {{"Soldier",new UnitType("Soldier", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Rogue", new UnitType("Rogue", 21, globalDMG, globalCounterattackDMG)},
                                             {"Berserker", new UnitType("Berserker", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Vampire", new UnitType("Vampire", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Werewolf", new UnitType("Werewolf", globalHP, globalDMG, globalCounterattackDMG)},
                                             {"Spellcaster", new UnitType("Spellcaster", globalHP, globalDMG, globalCounterattackDMG)},
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
    this->statement->setIsUndead(0);
}

Unit::~Unit() {

}

State * Unit::getStatement() {
    return statement;
}

void Unit::setStatement(State* newState) {
    if( this->statement != NULL ) {
        delete this->statement;
    }
    this->statement = newState;
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

void Unit::fight(Unit &enemy) {
    this->statement->isAlive();
    std::cout << std::endl;
    std::cout << this->getName() << " fight " << enemy.getName() << std::endl;

    this->getAbility()->attack(this, &enemy);
    isAlive(enemy);
    std::cout << std::endl;
}

void Unit::transform() {
    std::cout << this->getName() <<" try transform:" <<std::endl;
    this->getAbility()->transform();
    this->getStatement()->transform();
    if (this->getType() == "Werewolf") {
        this->setType("Wolf");
    } else if (this->getType() == "Wolf") {
        this->setType("Werewolf");
    }
}

void Unit::addObserver(Unit* unit) {
    std::cout << "addObserver!" << std::endl;
    observers.insert(unit);
}

void Unit::die() {
    std::cout << "Unit die!" << std::endl;
    for (std::set<Unit*>::iterator it = observers.begin(); it != observers.end(); it++ ) {
        std::cout << "Observer!" << std::endl;
        Unit* unit = *it;
        std::cout << unit->getName() << " add him my life +10 " << std::endl;
        unit->getStatement()->addHP(10);
    }
}

void Unit::isAlive(Unit& enemy) {
    std::cout << "isAlive!" << std::endl;
    if(enemy.getStatement()->getHP()<= 0) {
        enemy.die();
//        enemy.getStatement()->setHP(0);
    }
}

void Unit::addVictims(Unit *pUnit) {
    std::cout << "You are not necromaner, you are necrophile!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Unit &unit) {
    out<< std::endl;
    out << "Unit name: " << unit.getName() << std::endl;
    out << "Unit type: " << unit.getType() << std::endl;
    out << "state hp: " << unit.getStatement()->getHP() << std::endl;
    out << "state hpmax: " << unit.getStatement()->getHPM() << std::endl;
    out << "ability damage: " << unit.getAbility()->getDamage() << std::endl;
    out << "ability counterattackDamage: " << unit.getAbility()->getCounterattackDamage() << std::endl;
    out << "isVampire " << unit.getStatement()->getIsVampire() <<std::endl;
    out << "isUndead " << unit.getStatement()->getIsUndead() <<std::endl;
    out<< std::endl;
    return out;
}

