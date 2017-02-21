//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_ABILITY_HPP
#define ARMY_ABILITY_HPP


#include "Unit.hpp"

class Ability {
private:
    int damage;

public:
    Ability(int damage);

    virtual ~Ability();

    int getDamage();


};


#endif //ARMY_ABILITY_HPP
