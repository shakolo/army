//
// Created by eVol on 11.03.2017.
//

#include "Spell.hpp"

Spell::Spell(const std::string &spellname) : spellname(spellname) {}

Spell::~Spell() {

}

const std::string &Spell::getSpellname() const {
    return spellname;
}
