//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_STATEBERSERKER_HPP
#define ARMY_STATEBERSERKER_HPP

#include "State.hpp"

class StateBerserker: public State {
public:
    StateBerserker(double hpmax);
    void physicalDamage(double);
    void magicalInfluence(double);
    void vampireDrinks(double);
};


#endif //ARMY_STATEBERSERKER_HPP
