//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_ABILITYSPELLCASTER_HPP
#define ARMY_ABILITYSPELLCASTER_HPP


#include "AbilityDefault.hpp"

class AbilitySpellcaster: public AbilityDefault {
public:
    AbilitySpellcaster(Unit *, double damage, double counterattackDamage);

    void attack(Unit*, Unit* );
    void counterattack(Unit*, Unit*);

};


#endif //ARMY_ABILITYSPELLCASTER_HPP
