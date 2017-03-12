//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_STATEVAMPIRE_HPP
#define ARMY_STATEVAMPIRE_HPP

#include "State.hpp"


class StateVampire: public State {
public:
    StateVampire(double hpmax);
    void physicalDamage(double);
    void vampireDrinks(double);
    void magicalInfluence(double);
};


#endif //ARMY_STATEVAMPIRE_HPP
