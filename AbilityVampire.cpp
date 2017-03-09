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
}


void AbilityVampire::counterattack(Unit* vampire, Unit *target) {
    std::cout<< "Vampire counterattacks!" << std::endl;
    if ( (vampire->getAbility()->getDamage())/2 <= target->getStatement()->getHP() ){
        vampire->getStatement()->setHP(vampire->getStatement()->getHP() + (vampire->getAbility()->getDamage())/2);
        std::cout << vampire->getName() << " drinks +" << (vampire->getAbility()->getDamage()/2) << " of blood " <<  target->getName() << std::endl;
//        vampire->getAbility()->counterattackDefault(target);
    } else {
        vampire->getStatement()->setHP(target->getStatement()->getHP() + vampire->getStatement()->getHP());
        std::cout << vampire->getName() << " drinks +" << target->getStatement()->getHP() << " of blood " <<  target->getName() << std::endl;

//        vampire->getAbility()->counterattackDefault(target);
    }
}
void AbilityVampire::infect(Unit &target) {
    std::cout << "Infect!" << std::endl;
    target.setType(target.UnitTypes["Vampire"]->getNameUT());
    target.getStatement()->setHpmax(target.UnitTypes["Vampire"]->getHpmax());
    target.getAbility()->setDamage(target.UnitTypes["Vampire"]->getDamage());
    target.getStatement()->setIsVampire();
}

