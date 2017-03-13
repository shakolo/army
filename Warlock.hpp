//
// Created by eVol on 13.03.2017.
//

#ifndef ARMY_WARLOCK_HPP
#define ARMY_WARLOCK_HPP


#include "CombatMage.hpp"
#include "Demon.hpp"

class Warlock: public CombatMage {
private:
    static int i;
protected:
    std::map<std::string, Demon*> demons;
public:
    Warlock(const std::string &name);

    void callDemon(const std::string &demon);
    Demon* getDemon(const std::string &name);
};


#endif //ARMY_WARLOCK_HPP
