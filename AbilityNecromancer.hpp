//
// Created by eVol on 14.03.2017.
//

#ifndef ARMY_ABILITYNECROMANCER_HPP
#define ARMY_ABILITYNECROMANCER_HPP


#include "Ability.hpp"
#include "AbilitySpellcaster.hpp"
#include "Necromancer.hpp"

class AbilityNecromancer: public AbilitySpellcaster {

public:
    AbilityNecromancer(Unit *, double damage, double counterattackDamage);

    void attack(Unit *attacker, Unit *target);
    void addVictims(Unit *attacker, Unit *target);
    void counterattack(Unit *attacker, Unit *target);
};


#endif //ARMY_ABILITYNECROMANCER_HPP
