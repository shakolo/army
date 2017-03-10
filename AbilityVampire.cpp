//
// Created by eVol on 09.03.2017.
//

#include "AbilityVampire.hpp"

AbilityVampire::AbilityVampire(Unit *owner, double damage, double counterattackDamage) : Ability(owner, damage, counterattackDamage) {}

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
    target->getAbility()->counterattack(target,attacker);
}

void AbilityVampire::counterattack(Unit* attacker, Unit *target) {
    std::cout<< "Vampire counterattacks!" << std::endl;

    if ( (attacker->getAbility()->getCounterattackDamage()) <= target->getStatement()->getHP() ){
        attacker->getStatement()->setHP(attacker->getStatement()->getHP() + (attacker->getAbility()->getCounterattackDamage()));
        std::cout << attacker->getName() << " drinks +" << (attacker->getAbility()->getCounterattackDamage()) << " of blood " <<  target->getName() << std::endl;
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
    if (!target->getStatement()->getIsVampire()) {
        target->getStatement()->isAlive();
        target->setType(target->UnitTypes["Vampire"]->getNameUT());
        if(target->getStatement()->getHP() > target->UnitTypes["Vampire"]->getHpmax()) {
            target->getStatement()->setHP(target->UnitTypes["Vampire"]->getHpmax());
        }
        target->getStatement()->setHpmax(target->UnitTypes["Vampire"]->getHpmax());
        target->getAbility()->setDamage(target->UnitTypes["Vampire"]->getDamage());
        target->getAbility()->setCounterattackDamage(target->UnitTypes["Vampire"]->getCounterattackDamage());
        target->getStatement()->setIsVampire();
        target->setAbility(new AbilityVampire(target, target->UnitTypes["Vampire"]->getDamage(), target->UnitTypes["Vampire"]->getCounterattackDamage()));
        std::cout << attacker->getName() << " infected " << target->getName() << std::endl;
        std::cout << std::endl;
    } else {
        std::cout << target->getName() << ": You can bite your heel, stupid idiot! I'm already a vampire." << std::endl;
    }

}

