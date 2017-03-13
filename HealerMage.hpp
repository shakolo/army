//
// Created by eVol on 12.03.2017.
//

#ifndef ARMY_HEALERMAGE_HPP
#define ARMY_HEALERMAGE_HPP


#include "Spellcaster.hpp"
#include "StateSpellcaster.hpp"
#include "AbilityPriest.hpp"

class HealerMage: public Spellcaster {
public:
    HealerMage(const std::string &name);

    void cast(Unit &target, std::string magic);
};


#endif //ARMY_HEALERMAGE_HPP
