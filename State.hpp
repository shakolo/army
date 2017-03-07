//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_STATE_HPP
#define ARMY_STATE_HPP


class State {
private:
    int hp;
    int hpmax;
    bool isVampire;

public:
    State(int hpmax);

    int getHP();
    int getHPM();
    void setIsVampire();
    void setHP(int);
    bool getIsVampire();

    virtual ~State();

    bool isAlive();
};


#endif //ARMY_STATE_HPP
