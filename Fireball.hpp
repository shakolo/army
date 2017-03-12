//
// Created by eVol on 12.03.2017.
//

#ifndef ARMY_FIREBALL_HPP
#define ARMY_FIREBALL_HPP

#include "Spell.hpp"

class Fireball: public Spell {
public:
    Fireball();

    void magicAttack(Unit* target);
};


#endif //ARMY_FIREBALL_HPP
