//
// Created by eVol on 11.03.2017.
//

#include "Spell.hpp"
double globalCombatMagic = 10;
double globalHealMagic = -10;

std::map<std::string, SpellType*>Spell::SpellBookConfig = {{"FIREBALL",new SpellType(50, "Gori gori yasno so as don't pogaslo!")},
                                                           {"AVADAKEDAVRA", new SpellType(globalHealMagic, "Quae dicta sunt, factum est!")},
                                                           {"EXORCISM", new SpellType(globalCombatMagic, "Exorcizamus te, omnis immundus spiritus, omnis satanica potestas, omnis incursio infernalis adversarii, omnis legio, omnis congregatio et secta diabolica, in nomine et virtute Domini Nostri Jesu Christi!")}
};

Spell::~Spell() {
}

const std::string &Spell::getSpellText() const {
    return spellText;
}

Spell::Spell() {
}

double Spell::getSpellPower() const {
    return spellPower;
}

void Spell::setSpellPower(double spellPower) {
    Spell::spellPower = spellPower;
}
