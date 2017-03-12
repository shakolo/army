//
// Created by eVol on 12.03.2017.
//

#include "AvadaKedavra.hpp"

void AvadaKedavra::magic(Unit* target) {
    target->getStatement()->magicalInfluence(spellPower);
}

AvadaKedavra::AvadaKedavra() {
    this->spellPower = SpellBookConfig["AVADAKEDAVRA"]->getSpellPower();
    this->spellText = SpellBookConfig["AVADAKEDAVRA"]->getSpellText();
}

AvadaKedavra::~AvadaKedavra() {

}
