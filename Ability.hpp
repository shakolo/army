//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_ABILITY_HPP
#define ARMY_ABILITY_HPP

#include "Unit.hpp"

class Unit;

class Ability {
protected:
    double damage;
    double counterattackDamage;
public:
    void setCounterattackDamage(double counterattackDamage);

protected:
    Unit* owner;

public:
    void setDamage(double damage);

    Ability(Unit* owner, double damage, double counterattackDamage);

    virtual void attack(Unit*,Unit*) = 0;
    virtual void counterattack(Unit*,Unit*) = 0;
    virtual void infect(Unit*,Unit*);
    virtual void transform();

    virtual ~Ability();

    double getDamage();
    double getCounterattackDamage() const;

};

#endif //ARMY_ABILITY_HPP
