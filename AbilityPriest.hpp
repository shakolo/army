//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_ABILITYPRIEST_HPP
#define ARMY_ABILITYPRIEST_HPP


#include "AbilitySpellcaster.hpp"

class AbilityPriest: public AbilitySpellcaster {
public:
    AbilityPriest(Unit *, double damage, double counterattackDamage);

    void attack(Unit*, Unit* );
    void counterattack(Unit*, Unit*);
};


#endif //ARMY_ABILITYPRIEST_HPP
