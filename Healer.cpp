//
// Created by eVol on 12.03.2017.
//

#include "Healer.hpp"
#include "AvadaKedavra.hpp"
#include "Fireball.hpp"

Healer::Healer(const std::string &name) : HealerMage(name) {
    this->setType(this->UnitTypesConfig["Healer"]->getNameUT());
    spellbook["AVADAKEDAVRA"] = new AvadaKedavra();
    spellbook["FIREBALL"] = new Fireball();
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}