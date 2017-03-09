//
// Created by eVol on 19.02.2017.
//

#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

#include "State.hpp"
#include "Ability.hpp"
#include "UnitType.hpp"
#include <string>
#include <map>

class Ability;
class State;

class Unit {
    private:
    State* statement;
    Ability* ability;
    std::string name;
    std::string type;
public:
    const std::string &getType() const;

public:
    void setType(const std::string &type);

public:
    Unit(const std::string& type, State *statement, Ability *ability, const std::string& name);

    State * getStatement();
    void setStatement(int);
    Ability * getAbility();
    void setAbility(int);
    virtual void fight(Unit &enemy) = 0 ;

    virtual std::string getName();
    virtual void setName(const std::string& name);
    virtual ~Unit();

    static std::map<std::string, UnitType*>UnitTypes;
};
std::ostream &operator<<(std::ostream &out, Unit &unit);

//std::map<std::string, int>UnitTypes;

#endif //ARMY_UNIT_HPP
