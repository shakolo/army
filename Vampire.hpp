//
// Created by eVol on 07.03.2017.
//

#ifndef ARMY_VAMPIRE_HPP
#define ARMY_VAMPIRE_HPP
#include <string>
#include "Unit.hpp"
//#include "AbilityDefault.hpp"
#include "AbilityVampire.hpp"

class Vampire: public Unit {
public:
    Vampire(const std::string &name);
    void fight(Unit&);
    virtual ~Vampire();
};

#endif //ARMY_VAMPIRE_HPP
