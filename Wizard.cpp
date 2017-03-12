//
// Created by eVol on 11.03.2017.
//

#include "Wizard.hpp"
#include "Fireball.hpp"
#include "AvadaKedavra.hpp"

Wizard::Wizard(const std::string &name) : CombatMage(name) {
    this->setType(this->UnitTypesConfig["Wizard"]->getNameUT());
    spellbook["FIREBALL"] = new Fireball();
    spellbook["AVADAKEDAVRA"] = new AvadaKedavra();
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}
