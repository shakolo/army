//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_SPELLCASTER_HPP
#define ARMY_SPELLCASTER_HPP

#include "Unit.hpp"
#include "Spell.hpp"
#include <map>

class Spellcaster: public Unit {
protected:
    std::map<std::string, Spell*> spellbook;

public:
    Spellcaster(const std::string &name);
    virtual void cast(Unit& target, std::string magic);
};


#endif //ARMY_SPELLCASTER_HPP
