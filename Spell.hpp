//
// Created by eVol on 11.03.2017.
//

#ifndef ARMY_SPELL_HPP
#define ARMY_SPELL_HPP


#include <string>

class Spell {
protected:
    const std::string& spellname;

public:
    Spell(const std::string &spellname);

    virtual ~Spell();

    const std::string &getSpellname() const;

};


#endif //ARMY_SPELL_HPP
