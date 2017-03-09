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

    this->getAbility()->attackVampire(this, &enemy);
    enemy.getAbility()->counterattack(&enemy, this);
    std::cout << std::endl;
}



//std::ostream &operator<<(std::ostream &out, Vampire &vampire){
//    out << "Vampire name: " << vampire.getName() << std::endl;
//    out << "state hp: " << vampire.getStatement()->getHP() << std::endl;
//    out << "ability damage: " << vampire.getAbility()->getDamage() << std::endl;
//    out<< std::endl;
//    return out;
//}
