//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_ABILITY_HPP
#define ARMY_ABILITY_HPP


#include "Unit.hpp"

class Unit;

class Ability {
private:
    int damage;
public:
    void setDamage(int damage);

public:
    Ability(int damage);

    void attack(Unit*,Unit*);

    void attackVampire(Unit *attacker, Unit *target);

    void counterattack(Unit* counterattacker, Unit* target);

    void counterattackDefault(Unit*);

    void counterattackVampire(Unit* counterattacker, Unit *target);

    void infect(Unit &target);

    virtual ~Ability();

    int getDamage();


};


#endif //ARMY_ABILITY_HPP
