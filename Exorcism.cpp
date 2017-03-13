//
// Created by eVol on 13.03.2017.
//

#include "Exorcism.hpp"

Exorcism::Exorcism() {
    this->spellPower = SpellBookConfig["EXORCISM"]->getSpellPower();
    this->spellText = SpellBookConfig["EXORCISM"]->getSpellText();
}

void Exorcism::magic(Unit *target) {
    target->getStatement()->magicalInfluence(spellPower);
}
