//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_EXORCISM_HPP
#define ARMY_EXORCISM_HPP


#include "Spell.hpp"

class Exorcism: public Spell {
public:
    Exorcism();

    void magic(Unit* target);
};


#endif //ARMY_EXORCISM_HPP
