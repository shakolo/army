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
    int hpmax;
    int damage;

public:

    UnitType(const std::string &name, int hpmax, int damage);

    virtual ~UnitType();

    const std::string &getNameUT() const;

    int getHpmax() const;

    int getDamage() const;
};


#endif //ARMY_UNITTYPE_HPP
