//
// Created by eVol on 12.03.2017.
//

#ifndef ARMY_ZEROSPELL_HPP
#define ARMY_ZEROSPELL_HPP


#include "Unit.hpp"
#include "Spell.hpp"

class ZeroSpell: public Spell {
public:
    ZeroSpell();

private:
    void magic(Unit *target);
};


#endif //ARMY_ZEROSPELL_HPP
