//
// Created by eVol on 09.03.2017.
//

#ifndef ARMY_ABILITYROGUE_HPP
#define ARMY_ABILITYROGUE_HPP

#include "Unit.hpp"

class AbilityRogue: public Ability {
public:
    AbilityRogue(Unit* owner,int damage);
    void attack(Unit* attacker,Unit* target);

    void counterattack(Unit *counterattacker, Unit *target);
};

#endif //ARMY_ABILITYROGUE_HPP

