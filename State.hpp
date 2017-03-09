//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_STATE_HPP
#define ARMY_STATE_HPP
#include "UnitIsDeadException.hpp"

class State {
private:
    int hp;
    int hpmax;
    bool isVampire;
public:
    State(int hpmax);

    int getHP();
    int getHPM();

    void setHP(int);
    bool getIsVampire();
    void setIsVampire();
    virtual ~State();

    void isAlive();
    void setHpmax(int hpmax);
};


#endif //ARMY_STATE_HPP
