//
// Created by eVol on 07.03.2017.
//

#ifndef ARMY_VAMPIRE_HPP
#define ARMY_VAMPIRE_HPP
#include <string>
#include "Unit.hpp"

class Vampire: public Unit {
public:
    Vampire(const std::string &name);
    void fight(Unit&);
    virtual ~Vampire();
};

std::ostream &operator<<(std::ostream &out, Vampire &vampire);
#endif //ARMY_VAMPIRE_HPP
