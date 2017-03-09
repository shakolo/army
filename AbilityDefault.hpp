//
// Created by eVol on 09.03.2017.
//

#ifndef ARMY_ABILITYDEFAULT_HPP
#define ARMY_ABILITYDEFAULT_HPP

#include "Ability.hpp"
#include "Unit.hpp"

class AbilityDefault: public Ability {
public:
    AbilityDefault(Unit*,int);
    void attack(Unit*,Unit*);
    void counterattack(Unit* counterattacker, Unit* target);
    void counterattackDefault(Unit*);
};


#endif //ARMY_ABILITYDEFAULT_HPP
