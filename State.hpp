//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_STATE_HPP
#define ARMY_STATE_HPP
#include "UnitIsDeadException.hpp"

class State {
private:
    double hp;
    double hpmax;
    bool isVampire;
public:
    State(double hpmax);

    double getHP();
    double getHPM();

    void setHP(double);
    bool getIsVampire();
    void setIsVampire();
    virtual ~State();

    void isAlive();
    void setHpmax(double hpmax);
};


#endif //ARMY_STATE_HPP
