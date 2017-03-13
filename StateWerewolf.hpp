//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_STATEWEREWOLF_HPP
#define ARMY_STATEWEREWOLF_HPP


#include "State.hpp"

class StateWerewolf: public State {
public:
    StateWerewolf(double hpmax);
    void physicalDamage(double);
    void vampireDrinks(double);
    void magicalInfluence(double);
};


#endif //ARMY_STATEWEREWOLF_HPP
