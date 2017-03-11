//
// Created by eVol on 07.03.2017.
//

#ifndef ARMY_BERSERKER_HPP
#define ARMY_BERSERKER_HPP
#include <string>
#include "Unit.hpp"
#include "AbilityDefault.hpp"
#include "StateDefault.hpp"

class Berserker: public Unit {
public:

    Berserker(const std::string &name);
    void fight(Unit &enemy);
    virtual ~Berserker();
};

//std::ostream &operator<<(std::ostream &out, Berserker &berserker);
#endif //ARMY_BERSERKER_HPP
