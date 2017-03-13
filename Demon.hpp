//
// Created by eVol on 14.03.2017.
//

#ifndef ARMY_DEMON_HPP
#define ARMY_DEMON_HPP


#include "Soldier.hpp"

class Demon: public Soldier {
private:
    static int i;
public:
    Demon(std::string);
    void possession(Unit& target);
};


#endif //ARMY_DEMON_HPP
