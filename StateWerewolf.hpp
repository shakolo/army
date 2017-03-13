//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_STATEWEREWOLF_HPP
#define ARMY_STATEWEREWOLF_HPP


#include "State.hpp"

class StateWerewolf: public State {
private:
    bool isWolf;
public:
    bool getIsIsWolf() const;

    void setIsWolf(bool isWolf);

public:
    StateWerewolf(double hpmax);
    void physicalDamage(double);
    void vampireDrinks(double);
    void magicalInfluence(double);
    void transform();
};


#endif //ARMY_STATEWEREWOLF_HPP
