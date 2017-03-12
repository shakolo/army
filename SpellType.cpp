//
// Created by eVol on 12.03.2017.
//

#include "SpellType.hpp"



SpellType::~SpellType() {

}

double SpellType::getSpellPower() const {
    return spellPower;
}

void SpellType::setSpellPower(double spellPower) {
    SpellType::spellPower = spellPower;
}

void SpellType::setSpellText(const std::string &spellText) {
    SpellType::spellText = spellText;
}

const std::string &SpellType::getSpellText() const {
    return spellText;
}

SpellType::SpellType(double spellPower, const std::string &spellText) : spellPower(spellPower), spellText(spellText) {}
