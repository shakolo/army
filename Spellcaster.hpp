//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_SPELLCASTER_HPP
#define ARMY_SPELLCASTER_HPP

#include "Unit.hpp"

class Spellcaster: public Unit {

public:
    Spellcaster(const std::string &name);
    void cast(Unit& target);
};


#endif //ARMY_SPELLCASTER_HPP
