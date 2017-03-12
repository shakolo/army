//
// Created by eVol on 12.03.2017.
//

#ifndef ARMY_COMBATMAGE_HPP
#define ARMY_COMBATMAGE_HPP


#include "Spellcaster.hpp"

class CombatMage: public Spellcaster {
public:
    CombatMage(const std::string &name);

    void cast(Unit &target, std::string magic);
};


#endif //ARMY_COMBATMAGE_HPP
