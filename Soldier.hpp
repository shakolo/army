//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP
#include <string>
#include "Unit.hpp"
#include "AbilityDefault.hpp"
#include "StateDefault.hpp"

class Soldier: public Unit {
public:

    Soldier(const std::string &name);
    void fight(Unit &enemy);
    virtual ~Soldier();

};

#endif //ARMY_SOLDIER_HPP
