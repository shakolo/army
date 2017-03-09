//
// Created by eVol on 09.03.2017.
//

#include "AbilityVampire.hpp"

AbilityVampire::AbilityVampire(Unit *owner, int damage) : Ability(owner, damage) {}

void AbilityVampire::attack(Unit *attacker, Unit *target) {
    std::cout<< "attackVampire succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;
    if (attacker->getAbility()->getDamage() <=  target->getStatement()->getHP()) {

        target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage());

        attacker->getStatement()->setHP(attacker->getStatement()->getHP() + attacker->getAbility()->getDamage());
        std::cout << attacker->getName() << " drinks +" << attacker->getAbility()->getDamage() << " of blood "
                  <<  target->getName() << std::endl;

    } else {
        attacker->getStatement()->setHP(attacker->getStatement()->getHP() +  target->getStatement()->getHP());
        std::cout << attacker->getName() << " drinks +" <<  target->getStatement()->getHP() << " of blood "
                  <<  target->getName() << std::endl;

        target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage());
    }
    if (target->getType() == "Vampire" || target->getType() == "Werewolf" ) {
        this->counterattack(target, attacker);
    } else {
        this->infect(attacker, target);
    }
}

void AbilityVampire::counterattack(Unit* attacker, Unit *target) {
    std::cout<< "Infected Vampire counterattacks!" << std::endl;

    if ( (attacker->getAbility()->getDamage())/2 <= target->getStatement()->getHP() ){
        attacker->getStatement()->setHP(attacker->getStatement()->getHP() + (attacker->getAbility()->getDamage())/2);
        std::cout << attacker->getName() << " drinks +" << (attacker->getAbility()->getDamage()/2) << " of blood " <<  target->getName() << std::endl;
        this->counterattackDefault(attacker,target);
    } else {
        attacker->getStatement()->setHP(target->getStatement()->getHP() + attacker->getStatement()->getHP());
        std::cout << attacker->getName() << " drinks +" << target->getStatement()->getHP() << " of blood " <<  target->getName() << std::endl;
        this->counterattackDefault(attacker,target);
    }
}

void AbilityVampire::counterattackDefault(Unit* counterattacker, Unit* target) {
    target->getStatement()->setHP(target->getStatement()->getHP() -  counterattacker->getAbility()->getDamage()/2);
}

void AbilityVampire::infect(Unit* attacker, Unit* target) {
    target->setType(target->UnitTypes["Vampire"]->getNameUT());
    target->getStatement()->setHpmax(target->UnitTypes["Vampire"]->getHpmax());
    target->getAbility()->setDamage(target->UnitTypes["Vampire"]->getDamage());
    target->getStatement()->setIsVampire();
    std::cout << "Infect!" << std::endl;
    target->setAbility(new AbilityVampire(target, target->UnitTypes["Vampire"]->getDamage()));
    this->counterattack(target, attacker);
}

