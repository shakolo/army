//
// Created by eVol on 09.03.2017.
//

#include "AbilityDefault.hpp"

AbilityDefault::AbilityDefault(Unit* owner, int damage) : Ability(owner, damage) {}

void AbilityDefault::attack(Unit* attacker, Unit *target) {
    target->getStatement()->isAlive();
    attacker->getStatement()->isAlive();

    std::cout<< "attack succes: " << target->getName()<<" lost -"<< this->getDamage() << " hp" << std::endl;

    target->getStatement()->setHP(target->getStatement()->getHP() - this->getDamage());

    target->getStatement()->isAlive();

    this->counterattack(target,attacker);
}

void AbilityDefault::counterattack(Unit* counterattacker, Unit* target){
    target->getStatement()->isAlive();
    counterattacker->getStatement()->isAlive();

    std::cout<<counterattacker->getName()<<" counterattack "<< target->getName() << std::endl;

    if (!counterattacker->getStatement()->getIsVampire()) {
        this->counterattackDefault(counterattacker,target);
        std::cout<<"counterattack succes: " << target->getName() <<" lost -"<< this->getDamage()/2 << std::endl;
    } else if (counterattacker->getStatement()->getIsVampire()) {
        this->counterattackVampire(counterattacker,target);
    }
}

void AbilityDefault::counterattackDefault(Unit* counterattacker, Unit* target) {
    target->getStatement()->setHP(target->getStatement()->getHP() -  counterattacker->getAbility()->getDamage()/2);
}

void AbilityDefault::counterattackVampire(Unit* vampire, Unit *target) {
    std::cout<< "Vampire counterattacks!" << std::endl;

    if ( (vampire->getAbility()->getDamage())/2 <= target->getStatement()->getHP() ){
        vampire->getStatement()->setHP(vampire->getStatement()->getHP() + (vampire->getAbility()->getDamage())/2);
        std::cout << vampire->getName() << " drinks +" << (vampire->getAbility()->getDamage()/2) << " of blood " <<  target->getName() << std::endl;
        this->counterattackDefault(vampire,target);
    } else {
        vampire->getStatement()->setHP(target->getStatement()->getHP() + vampire->getStatement()->getHP());
        std::cout << vampire->getName() << " drinks +" << target->getStatement()->getHP() << " of blood " <<  target->getName() << std::endl;
        this->counterattackDefault(vampire,target);
    }

}
