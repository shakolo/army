//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_STATE_HPP
#define ARMY_STATE_HPP
#include "UnitIsDeadException.hpp"

class State {
protected:
    double hp;
    double hpmax;
    bool isVampire;
    bool isWerewolf;
    bool isUndead;
public:
    bool getIsUndead() const;

    void setIsUndead(bool isUndead);

    State(double hpmax);

    double getHP();
    double getHPM();

    virtual void physicalDamage(double) = 0;
    virtual void magicalInfluence(double) = 0;
    virtual void vampireDrinks(double) = 0;
    virtual void transform();
    bool getIsVampire();
    void setIsVampire();
    virtual ~State();

    bool isAlive();
    void setHpmax(double hpmax);

    void setHP(double d);

    void addHP(double hp);
    void deductHP(double hp);

    bool getIsWerewolf();

    void setIsWerewolf();



};


#endif //ARMY_STATE_HPP
