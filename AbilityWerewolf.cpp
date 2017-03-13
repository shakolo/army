//
// Created by eVol on 13.03.2017.
//

#include "AbilityWerewolf.hpp"
#include "StateWerewolf.hpp"

AbilityWerewolf::AbilityWerewolf(Unit *owner, double damage, double counterattackDamage) : Ability(owner, damage,
                                                                                                   counterattackDamage) {}

void AbilityWerewolf::attack(Unit *attacker, Unit *target) {
    std::cout<< "Werewolf attack succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;
    target->getStatement()->physicalDamage(this->getDamage());
}

void AbilityWerewolf::counterattack(Unit *counterattacker, Unit *target) {
    std::cout<< "Werewolf counterattacks!" << std::endl;
    target->getStatement()->physicalDamage(counterattacker->getAbility()->getCounterattackDamage());
}

void AbilityWerewolf::transform() {

}

void AbilityWerewolf::infect(Unit *attacker, Unit *target) {
    if (!target->getStatement()->getIsVampire() && !target->getStatement()->getIsWerewolf()) {

        target->getStatement()->isAlive();
        target->setType(target->UnitTypesConfig["Werewolf"]->getNameUT());
        target->getAbility()->setDamage(target->UnitTypesConfig["Werewolf"]->getDamage());
        target->getAbility()->setCounterattackDamage(target->UnitTypesConfig["Werewolf"]->getCounterattackDamage());
        target->setAbility(new AbilityWerewolf(target, target->UnitTypesConfig["Werewolf"]->getDamage(), target->UnitTypesConfig["Vampire"]->getCounterattackDamage()));
        double currentHp = target->getStatement()->getHP();
        target->setStatement(new StateWerewolf(target->UnitTypesConfig["Werewolf"]->getHpmax()));
        target->getStatement()->setHP(currentHp);
        target->getStatement()->setIsWerewolf();
        std::cout << attacker->getName() << " infected " << target->getName() << std::endl;
        std::cout << std::endl;
    } else if (target->getStatement()->getIsVampire()){
        std::cout << target->getName() << ": You can bite your heel, fleasy lump of wool! I'm a vampire." << std::endl;
    } else {
        std::cout << target->getName() << ": You can bite your own tail, fleasy friend! I'm a werewolf." << std::endl;
    }
}


