//
// Created by eVol on 07.03.2017.
//
#include <iostream>
#include "Vampire.hpp"

Vampire::Vampire(const std::string &name): Unit(new State(100), new Ability(10), name ) {
    std::cout << getName() << " is a Vampire" << std::endl;
    this->getStatement()->setIsVampire();
}

Vampire::~Vampire() {

}

void Vampire::fight(Unit &enemy) {
    std::cout << this->getName() << " fight " << enemy.getName() << std::endl;
    if (enemy.getStatement()->isAlive()) {
        if ( this->getAbility()->getDamage() <= enemy.getStatement()->getHP() ){
            this->getAbility()->attack(&enemy);
            this->getStatement()->setHP(this->getStatement()->getHP() + this->getAbility()->getDamage());
        } else {
            this->getStatement()->setHP(this->getStatement()->getHP() + enemy.getStatement()->getHP());
            this->getAbility()->attack(&enemy);
        }
    }

    if ( enemy.getStatement()->isAlive() ) {
        enemy.getAbility()->counterattack(this);
    }

}

std::ostream &operator<<(std::ostream &out, Vampire &vampire){
    out << "Vampire name :" << vampire.getName() << std::endl;
    out << "state hp: " << vampire.getStatement()->getHP() << std::endl;
    out << "ability damage: " << vampire.getAbility()->getDamage() << std::endl;
    return out;
}
