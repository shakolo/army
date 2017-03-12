//
// Created by eVol on 12.03.2017.
//

#ifndef ARMY_SPELLTYPE_HPP
#define ARMY_SPELLTYPE_HPP


#include <string>

class SpellType {
public:
    SpellType(double spellPower, const std::string &spellText);

    virtual ~SpellType();

    double getSpellPower() const;

    const std::string &getSpellText() const;

    void setSpellPower(double spellPower);

    void setSpellText(const std::string &spellText);

private:
    double spellPower;
    std::string spellText;
public:

};


#endif //ARMY_SPELLTYPE_HPP
