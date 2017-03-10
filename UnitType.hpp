//
// Created by eVol on 08.03.2017.
//

#ifndef ARMY_UNITTYPE_HPP
#define ARMY_UNITTYPE_HPP
#include <iostream>
#include <map>

class UnitType {
private:
    std::string name;
    double hpmax;
    double damage;
    double counterattackDamage;

public:

    UnitType(const std::string &name, double hpmax, double damage, double counterattackDamage);

    virtual ~UnitType();

    const std::string &getNameUT() const;

    double getHpmax() const;

    double getDamage() const;
    double getCounterattackDamage() const;
};


#endif //ARMY_UNITTYPE_HPP
