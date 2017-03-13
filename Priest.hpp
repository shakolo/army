//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_PRIEST_HPP
#define ARMY_PRIEST_HPP


#include "HealerMage.hpp"

class Priest: public HealerMage {
public:
    Priest(const std::string &name);

    void cast(Unit &target, std::string magic);
};


#endif //ARMY_PRIEST_HPP
