//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP
#include <string>
#include "Unit.hpp"

class Soldier: public Unit {
public:

    Soldier(const std::string &name);

    virtual ~Soldier();

};

std::ostream &operator<<(std::ostream &out, Soldier &soldier);

#endif //ARMY_SOLDIER_HPP
