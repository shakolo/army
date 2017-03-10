//
// Created by eVol on 08.03.2017.
//

#include "UnitType.hpp"

UnitType::UnitType(const std::string &name, double hpmax, double damage, double counterattackDamage) : name(name), hpmax(hpmax), damage(damage), counterattackDamage(counterattackDamage) {

}

UnitType::~UnitType() {

}

const std::string &UnitType::getNameUT() const {
    return name;
}

double UnitType::getHpmax() const {
    return hpmax;
}

double UnitType::getDamage() const {
    return damage;
}

double UnitType::getCounterattackDamage() const {
    return counterattackDamage;
}
