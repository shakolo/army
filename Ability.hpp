//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_ABILITY_HPP
#define ARMY_ABILITY_HPP

#include "Unit.hpp"

class Unit;

class Ability {
protected:
    int damage;
    Unit* owner;

public:
    void setDamage(int damage);

    Ability(Unit* owner, int damage);

    virtual void attack(Unit*,Unit*) = 0;
    virtual void counterattack(Unit*,Unit*) = 0;
//    virtual void counterattackVampire(Unit*,Unit*) = 0;
//    virtual void counterattackDefault(Unit*,Unit*) = 0;

    virtual ~Ability();

    int getDamage();


};

#endif //ARMY_ABILITY_HPP
