//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_STATEDEFAULT_HPP
#define ARMY_STATEDEFAULT_HPP

#include "State.hpp"

class StateDefault: public State {
public:
    StateDefault(double hpmax);
    void physicalDamage(double);
    void magicalInfluence(double);
    void vampireDrinks(double);
};


#endif //ARMY_STATEDEFAULT_HPP
