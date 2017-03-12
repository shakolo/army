//
// Created by eVol on 12.03.2017.
//

#include "Fireball.hpp"

void Fireball::magicAttack(Unit* target) {
    target->getStatement()->magicalDamage(spellPower);
}

Fireball::Fireball() {
    this->spellPower = SpellBookConfig["FIREBALL"]->getSpellPower();
    this->spellText = SpellBookConfig["FIREBALL"]->getSpellText();
}
