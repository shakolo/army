//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_ABILITY_HPP
#define ARMY_ABILITY_HPP


class Ability {
private:
    int damage;

public:
    Ability(int damage);

    virtual ~Ability();

private:
    int getDamage();

};


#endif //ARMY_ABILITY_HPP
