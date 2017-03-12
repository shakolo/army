//
// Created by eVol on 12.03.2017.
//

#ifndef ARMY_AVADAKEDAVRA_HPP
#define ARMY_AVADAKEDAVRA_HPP

#include "Spell.hpp"

class AvadaKedavra: public Spell {
public:
    AvadaKedavra();

    void magic(Unit* target);

    virtual ~AvadaKedavra();
};


#endif //ARMY_AVADAKEDAVRA_HPP
