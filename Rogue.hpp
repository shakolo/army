//
// Created by eVol on 06.03.2017.
//

#ifndef ARMY_ROGUE_HPP
#define ARMY_ROGUE_HPP
#include "Unit.hpp"
#include "AbilityDefault.hpp"

class Rogue: public Unit {
public:
    Rogue(const std::string &name);

    virtual ~Rogue();

    void fight(Unit&);

};

//std::ostream &operator<<(std::ostream &out, Rogue &rogue);

#endif //ARMY_ROGUE_HPP
