//
// Created by eVol on 13.03.2017.
//

#include "Werewolf.hpp"
#include "StateWerewolf.hpp"
#include "AbilityWerewolf.hpp"

Werewolf::Werewolf(const std::string &name) : Unit(
        UnitTypesConfig["Werewolf"]->getNameUT(),
        new StateWerewolf(UnitTypesConfig["Werewolf"]->getHpmax()),
        new AbilityWerewolf(this, UnitTypesConfig["Werewolf"]->getDamage(), UnitTypesConfig["Werewolf"]->getCounterattackDamage()),
        name )
{
                std::cout << getName() << " is a " << getType() << std::endl;
                this->statement->setIsWerewolf();
                std::cout<<std::endl;
}


