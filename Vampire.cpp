//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Vampire.hpp"

Vampire::Vampire(const std::string &name): Unit(UnitTypes["Vampire"]->getNameUT(), new State(UnitTypes["Vampire"]->getHpmax()), new Ability(UnitTypes["Vampire"]->getDamage()), name ) {
    std::cout << getName() << " is a " << getType() << std::endl;
    this->getStatement()->setIsVampire();
    std::cout<<std::endl;
}

Vampire::~Vampire() {

}

void Vampire::fight(Unit &enemy) {

    this->getStatement()->isAlive();
        std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
            if (this->getAbility()->getDamage() <= enemy.getStatement()->getHP()) {
                this->getAbility()->attack(&enemy);
                this->getStatement()->setHP(this->getStatement()->getHP() + this->getAbility()->getDamage());
                std::cout << this->getName() << " drinks +" << this->getAbility()->getDamage() << " of blood "
                          << enemy.getName() << std::endl;

            } else {
                this->getStatement()->setHP(this->getStatement()->getHP() + enemy.getStatement()->getHP());
                std::cout << this->getName() << " drinks +" << enemy.getStatement()->getHP() << " of blood "
                          << enemy.getName() << std::endl;
                this->getAbility()->attack(&enemy);
            }

            enemy.getAbility()->counterattack(&enemy, this);
        std::cout << std::endl;
}

void Vampire::infect(Unit &target) {
    target.setType(UnitTypes["Vampire"]->getNameUT());
    target.getStatement()->setHpmax(UnitTypes["Vampire"]->getHpmax());
    target.getAbility()->setDamage(UnitTypes["Vampire"]->getDamage());
    target.getStatement()->setIsVampire();
}

//std::ostream &operator<<(std::ostream &out, Vampire &vampire){
//    out << "Vampire name: " << vampire.getName() << std::endl;
//    out << "state hp: " << vampire.getStatement()->getHP() << std::endl;
//    out << "ability damage: " << vampire.getAbility()->getDamage() << std::endl;
//    out<< std::endl;
//    return out;
//}
