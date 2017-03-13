//
// Created by eVol on 13.03.2017.
//

#include "Warlock.hpp"
#include "Demon.hpp"
#include "AvadaKedavra.hpp"
#include "Fireball.hpp"

int Warlock::i = 1;

Warlock::Warlock(const std::string &name) : CombatMage(name) {
    this->setType(this->UnitTypesConfig["Warlock"]->getNameUT());
    spellbook["FIREBALL"] = new Fireball();
    spellbook["AVADAKEDAVRA"] = new AvadaKedavra();
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}
//void Spellcaster::cast(Unit &target, std::string magic) {
//    std::cout << "Magic moments..  When two hearts are caring.." << std::endl;
//    std::map<std::string, Spell*>::const_iterator pos = spellbook.find(magic);
//    if (pos->second == 0) {
//        spellbook.insert(std::pair<std::string, Spell*>(magic, new ZeroSpell));
//        std::map<std::string, Spell*>::const_iterator posnew = spellbook.find(magic);
//        pos = posnew;
//    }
//    std::cout << this->getName() << " spells: \"" << pos->second->getSpellText() << "\" to " << target.getName() << std::endl;
//    pos->second->magic(&target);
//
//}
void Warlock::callDemon(const std::string &name) {
    demons.insert(std::pair<std::string, Demon*>(name, new Demon(name)));
}

Demon *Warlock::getDemon(const std::string &name) {
    std::map<std::string, Demon*>::const_iterator pos = demons.find(name);
    if (pos->second == 0) {
        demons.insert(std::pair<std::string, Demon*>(name, new Demon(name)));
        std::map<std::string, Demon*>::const_iterator posnew =  demons.find(name);
        pos = posnew;
    }
    return pos->second;
}

