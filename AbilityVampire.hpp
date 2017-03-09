//
// Created by eVol on 09.03.2017.
//

#ifndef ARMY_ABILITYVAMPIRE_HPP
#define ARMY_ABILITYVAMPIRE_HPP

#include "Ability.hpp"
#include "Unit.hpp"

class AbilityVampire: public Ability {
public:
    AbilityVampire(Unit *owner, int damage);
    void attack(Unit *attacker, Unit *target);
    void counterattack(Unit* counterattacker, Unit *target);
    void counterattackDefault(Unit* counterattacker, Unit *target);
    void infect(Unit *attacker, Unit* target);
};


#endif //ARMY_ABILITYVAMPIRE_HPP
