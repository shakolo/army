//
// Created by eVol on 14.03.2017.
//

#ifndef ARMY_NECROMANCER_HPP
#define ARMY_NECROMANCER_HPP


#include "CombatMage.hpp"

class Necromancer: public CombatMage {
private:
    std::set<Unit*> victims;
public:
    Necromancer(const std::string &name);
    void addVictims(Unit*);

};


#endif //ARMY_NECROMANCER_HPP
