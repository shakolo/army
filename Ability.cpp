//
// Created by eVol on 21.02.2017.
//

#include "Ability.hpp"
#include <iostream>

Ability::Ability(int damage) : damage(damage) {}

Ability::~Ability() {

}

int Ability::getDamage() {
    return damage;
}

void Ability::attack(Unit* attacker, Unit *target) {
    target->getStatement()->isAlive();
    attacker->getStatement()->isAlive();
 if (!attacker->getStatement()->getIsVampire()) {
     std::cout<< "attack succes: " << target->getName()<<" lost -"<< damage << " hp" << std::endl;

     target->getStatement()->setHP(target->getStatement()->getHP() - damage);
 } else if (attacker->getStatement()->getIsVampire()) {
     attacker->getAbility()->attackVampire(attacker, target);
 }

}

void Ability::attackVampire(Unit *attacker, Unit *target) {
    std::cout<< "attackVampire succes: " << target->getName()<<" lost -"<< damage << " hp" << std::endl;
    if (attacker->getAbility()->getDamage() <=  target->getStatement()->getHP()) {

        target->getStatement()->setHP(target->getStatement()->getHP() - damage);

        attacker->getStatement()->setHP(attacker->getStatement()->getHP() + attacker->getAbility()->getDamage());
        std::cout << attacker->getName() << " drinks +" << attacker->getAbility()->getDamage() << " of blood "
                  <<  target->getName() << std::endl;

    } else {
        attacker->getStatement()->setHP(attacker->getStatement()->getHP() +  target->getStatement()->getHP());
        std::cout << attacker->getName() << " drinks +" <<  target->getStatement()->getHP() << " of blood "
                  <<  target->getName() << std::endl;

        target->getStatement()->setHP(target->getStatement()->getHP() - damage);
    }
}

void Ability::counterattack(Unit* counterattacker, Unit* target){
    target->getStatement()->isAlive();
    std::cout<<counterattacker->getName()<<" counterattack "<< target->getName() << std::endl;
    if (!counterattacker->getStatement()->getIsVampire()) {
        counterattacker->getAbility()->counterattackDefault(target);
    } else if (counterattacker->getStatement()->getIsVampire()) {
        counterattacker->getAbility()->counterattackVampire(counterattacker,target);
    }
}

void Ability::counterattackDefault(Unit *target) {
    target->getStatement()->isAlive();
    target->getStatement()->setHP(target->getStatement()->getHP() - damage/2);
    std::cout<<"counterattack succes: " << target->getName() <<" lost -"<< damage/2 << " hp" << std::endl;
}

void Ability::counterattackVampire(Unit* vampire, Unit *target) {
    std::cout<< "Vampire counterattacks!" << std::endl;
    if ( (vampire->getAbility()->getDamage())/2 <= target->getStatement()->getHP() ){
            vampire->getStatement()->setHP(vampire->getStatement()->getHP() + (vampire->getAbility()->getDamage())/2);
            std::cout << vampire->getName() << " drinks +" << (vampire->getAbility()->getDamage()/2) << " of blood " <<  target->getName() << std::endl;
            vampire->getAbility()->counterattackDefault(target);
        } else {
        vampire->getStatement()->setHP(target->getStatement()->getHP() + vampire->getStatement()->getHP());
        std::cout << vampire->getName() << " drinks +" << target->getStatement()->getHP() << " of blood " <<  target->getName() << std::endl;

        vampire->getAbility()->counterattackDefault(target);
    }
}
void Ability::infect(Unit &target) {
    target.setType(target.UnitTypes["Vampire"]->getNameUT());
    target.getStatement()->setHpmax(target.UnitTypes["Vampire"]->getHpmax());
    target.getAbility()->setDamage(target.UnitTypes["Vampire"]->getDamage());
    target.getStatement()->setIsVampire();
}

void Ability::setDamage(int damage) {
    Ability::damage = damage;
}

