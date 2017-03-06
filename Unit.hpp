//
// Created by eVol on 19.02.2017.
//

#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

#include "State.hpp"
#include "Ability.hpp"
#include <string>

class Ability;
class State;

class Unit {
    private:
    State* statement;
    Ability* ability;
    std::string name;

public:
    Unit(State *statement, Ability *ability, const std::string& name);

    State * getStatement();
    void setStatement(int);
    Ability * getAbility();
    void setAbility(int);
    virtual void fight(Unit &enemy);

    virtual std::string getName();
    virtual void setName(const std::string& name);
    virtual ~Unit();
};


#endif //ARMY_UNIT_HPP
