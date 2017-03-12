//
// Created by eVol on 12.03.2017.
//

#include "Fireball.hpp"

void Fireball::magic(Unit* target) {
    target->getStatement()->magicalInfluence(spellPower);
}

Fireball::Fireball() {
    this->spellPower = SpellBookConfig["FIREBALL"]->getSpellPower();
    this->spellText = SpellBookConfig["FIREBALL"]->getSpellText();
}
