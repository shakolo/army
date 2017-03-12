//
// Created by eVol on 11.03.2017.
//

#include "Spell.hpp"
#include "Fireball.hpp"

std::map<std::string, SpellType*>Spell::SpellBookConfig = {{"FIREBALL",new SpellType(10, "Gori gori yasno so as don't pogaslo!")},

};

Spell::~Spell() {
}

const std::string &Spell::getSpellText() const {
    return spellText;
}

Spell::Spell() {
}