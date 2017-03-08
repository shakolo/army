//
// Created by eVol on 08.03.2017.
//

#include "UnitType.hpp"

UnitType::UnitType(const std::string &name, int hpmax, int damage) : name(name), hpmax(hpmax), damage(damage), counterattackDivider(counterattackDivider) {

}

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
