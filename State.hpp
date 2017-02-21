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
    State();

    int getHP();
    int getHPM();

    virtual ~State();
};


#endif //ARMY_STATE_HPP
