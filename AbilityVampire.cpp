//
// Created by eVol on 09.03.2017.
//

#include "AbilityVampire.hpp"

AbilityVampire::AbilityVampire(Unit *owner, double damage, double counterattackDamage) : Ability(owner, damage, counterattackDamage) {}

void AbilityVampire::attack(Unit *attacker, Unit *target) {
    std::cout<< "attackVampire succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;

    if (attacker->getAbility()->getDamage() <=  target->getStatement()->getHP()) {
        target->getStatement()->physicalDamage(this->getDamage());
        std::cout << attacker->getName() << "! drinks +" << attacker->getAbility()->getDamage() << " of blood "
                  <<  target->getName() << std::endl;
        attacker->getStatement()->vampireDrinks(this->getDamage());
    } else {
        std::cout << attacker->getName() << " drinks +" <<  target->getStatement()->getHP() << " of blood "
                  <<  target->getName() << std::endl;
        attacker->getStatement()->vampireDrinks(target->getStatement()->getHP());
        target->getStatement()->physicalDamage(target->getStatement()->getHP());
    }
    target->getAbility()->counterattack(target,attacker);
}

void AbilityVampire::counterattack(Unit* attacker, Unit *target) {
    std::cout<< "Vampire counterattacks!" << std::endl;
    if ( (attacker->getAbility()->getCounterattackDamage()) <= target->getStatement()->getHP() ){
        std::cout << attacker->getName() << " drinks +" << (attacker->getAbility()->getCounterattackDamage()) << " of blood " <<  target->getName() << std::endl;
        attacker->getStatement()->vampireDrinks(attacker->getAbility()->getCounterattackDamage());
        target->getStatement()->physicalDamage(attacker->getAbility()->getCounterattackDamage());
    } else {
        attacker->getStatement()->vampireDrinks(target->getStatement()->getHP());
        target->getStatement()->physicalDamage(target->getStatement()->getHP());
    }
}

void AbilityVampire::infect(Unit* attacker, Unit* target) {
    if (!target->getStatement()->getIsVampire()) {

        target->getStatement()->isAlive();
        target->setType(target->UnitTypesConfig["Vampire"]->getNameUT());
        target->getAbility()->setDamage(target->UnitTypesConfig["Vampire"]->getDamage());
        target->getAbility()->setCounterattackDamage(target->UnitTypesConfig["Vampire"]->getCounterattackDamage());
        target->setAbility(new AbilityVampire(target, target->UnitTypesConfig["Vampire"]->getDamage(), target->UnitTypesConfig["Vampire"]->getCounterattackDamage()));
        double currentHp = target->getStatement()->getHP();
        target->setStatement(new StateVampire(target->UnitTypesConfig["Vampire"]->getHpmax()));
        target->getStatement()->setHP(currentHp);
        target->getStatement()->setIsVampire();
        std::cout << attacker->getName() << " infected " << target->getName() << std::endl;
        std::cout << std::endl;
    } else {
        std::cout << target->getName() << ": You can bite your heel, stupid idiot! I'm already a vampire." << std::endl;
    }

}

