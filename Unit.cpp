//
// Created by eVol on 19.02.2017.
//
#include <iostream>
#include "Unit.hpp"

Unit::Unit(State *statement, Ability *ability) : statement(statement), ability(ability) {
    std::cout << "Unit created" << std::endl;
}

Unit::~Unit() {

}
