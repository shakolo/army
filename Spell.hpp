//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_SPELL_HPP
#define ARMY_SPELL_HPP


#include <string>
#include "Unit.hpp"
#include "SpellType.hpp"
#include <map>

class Spell {
protected:
//    std::map<std::string, Spell*> spellbook;


    double spellPower;
public:
    void setSpellPower(double spellPower);

public:
    double getSpellPower() const;

protected:

    std::string spellText;
public:
    const std::string &getSpellText() const;
    Spell();
    static std::map<std::string, SpellType*>SpellBookConfig;

    virtual ~Spell();

    virtual void magic(Unit* target) = 0;
//    virtual void magicHeal(Unit* target);
};


#endif //ARMY_SPELL_HPP
