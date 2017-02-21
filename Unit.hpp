//
// Created by eVol on 19.02.2017.
//

#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

#include "State.hpp"
#include "Ability.hpp"

class Ability;
class State;

class Unit {
    private:
        State* statement;
        Ability* ability;

public:
    Unit(State *statement, Ability *ability);
    State * getStatement();
    Ability * getAbility();
    virtual void attack(Unit& enemy);
    virtual ~Unit();
};


#endif //ARMY_UNIT_HPP
