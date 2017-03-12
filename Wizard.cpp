//
// Created by eVol on 11.03.2017.
//

#include "Wizard.hpp"
#include "Fireball.hpp"

Wizard::Wizard(const std::string &name) : CombatMage(name) {
    spellbook["FIREBALL"] = new Fireball();
    std::cout << getName() << " is a " << getType() << std::endl;
    std::cout<<std::endl;
}
