//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_STATE_HPP
#define ARMY_STATE_HPP


class State {
private:
    int hp;
    int hpmax;

public:
    State(int hpmax);

    int getHP();
    int getHPM();

    void setHP(int);

    virtual ~State();
};


#endif //ARMY_STATE_HPP
