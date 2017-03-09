//
// Created by eVol on 09.03.2017.
//

#ifndef ARMY_ABILITYDEFAULT_HPP
#define ARMY_ABILITYDEFAULT_HPP
#include "Unit.hpp"
#include "Ability.hpp"


class AbilityDefault: public Ability {
public:
    AbilityDefault(Unit*,int);
    void attack(Unit*,Unit*);
    void counterattack(Unit* counterattacker, Unit* target);
    void counterattackDefault(Unit* counterattacker, Unit* target);
    void counterattackVampire(Unit* counterattacker, Unit* target);
};


#endif //ARMY_ABILITYDEFAULT_HPP
