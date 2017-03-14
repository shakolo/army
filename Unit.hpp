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
#include <set>

class Ability;
class State;

class Unit {
private:
    std::string name;
    std::string type;

protected:
    State* statement;
    Ability* ability;
    std::set<Unit*> observers;

public:
    const std::string &getType() const;

    void setType(const std::string &type);

    Unit(const std::string& type, State *statement, Ability *ability, const std::string& name);

    State * getStatement();
    void setStatement(State*);
    Ability * getAbility();
    void setAbility(Ability*);
    virtual void fight(Unit &enemy);
    virtual void bite(Unit &enemy);
    virtual void transform();

    virtual std::string getName();
    virtual void setName(const std::string& name);

    virtual void addVictims(Unit *pUnit);
    void addObserver(Unit* unit);
    void die();
    void isAlive(Unit& );
    virtual ~Unit();

    static std::map<std::string, UnitType*>UnitTypesConfig;


};
std::ostream &operator<<(std::ostream &out, Unit &unit);

//std::map<std::string, int>UnitTypesConfig;

#endif //ARMY_UNIT_HPP
