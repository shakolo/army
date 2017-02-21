//
// Created by eVol on 21.02.2017.
//

#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP
#include <string>
#include "Unit.hpp"

class Soldier: public Unit {
private:
    std::string name;

public:
    Soldier(State *statement, Ability *ability, const std::string &name);

    virtual ~Soldier();

    const std::string &getName() const;
};

std::ostream &operator<<(std::ostream &out, Soldier &soldier);

#endif //ARMY_SOLDIER_HPP
