//
// Created by eVol on 08.03.2017.
//

#include "UnitType.hpp"

//std::map<std::string, UnitType*>UnitTypes = {{"Soldier",new UnitType("Soldier", 100, 10)},
//                                             {"Rogue", new UnitType("Rogue", 100, 10)},
//                                             {"Berserker", new UnitType("Berserker", 100, 10)},
//                                             {"Vampire", new UnitType("Vampire", 100, 10)},
//                                             {"Werewolf", new UnitType("Werewolf", 100, 10)},
//                                             {"Wizard", new UnitType("Wizard", 100, 10)},
//                                             {"Healer", new UnitType("Healer", 100, 10)},
//                                             {"Priest", new UnitType("Priest", 100, 10)},
//                                             {"Warlock", new UnitType("Warlock", 100, 10)},
//                                             {"Necromancer", new UnitType("Necromancer", 100, 10)},
//};

UnitType::UnitType(const std::string &name, int hpmax, int damage) : name(name), hpmax(hpmax), damage(damage) {}

UnitType::~UnitType() {

}

const std::string &UnitType::getNameUT() const {
    return name;
}

int UnitType::getHpmax() const {
    return hpmax;
}

int UnitType::getDamage() const {
    return damage;
}
