#include <iostream>
#include "Unit.hpp"
//#include "UnitType.hpp"
#include "Soldier.hpp"
#include "Rogue.hpp"
#include "Berserker.hpp"
#include "Vampire.hpp"
#include "Wizard.hpp"
#include "Healer.hpp"
#include "Werewolf.hpp"


int main() {
    Werewolf* lupin = new Werewolf("Remus Lupin");

    Vampire *drakula = new Vampire("Drakula");
    Healer* avicenna = new Healer("Ibn-Sina");
    Wizard* gendalf = new Wizard("Gendalf");
    Soldier* bob = new Soldier("Bob");
    Berserker* ivar = new Berserker("Ivar");

    lupin->fight(*bob);
    std::cout<< *bob << std::endl;

    lupin->bite(*bob);
    std::cout<< *bob << std::endl;

    bob->bite(*drakula);
    std::cout<< *drakula << std::endl;

    lupin->bite(*bob);
    std::cout<< *bob << std::endl;

    drakula->bite(*bob);
    std::cout<< *bob << std::endl;

    std::cout<< *lupin  << std::endl;
    gendalf->cast(*lupin, "FIREBALL");
    std::cout<< *lupin  << std::endl;
//
//    std::cout<< *ivar  << std::endl;
//    avicenna->cast(*ivar, "AVADAKEDAVRA");
//    std::cout<< *ivar  << std::endl;
//
//    std::cout<< *ivar  << std::endl;
//    gendalf->cast(*ivar, "FIREBALL");
//
//    std::cout<< *bob << std::endl;
//    avicenna->cast(*bob, "AVADAKEDAVRA");
//    std::cout<< *bob << std::endl;
//
//    std::cout<< *bob << std::endl;
//    avicenna->cast(*bob, "FIREBALL");
//
//
//    std::cout<< *bob << std::endl;
//    gendalf->cast(*bob, "AVADAKEDAVRA");
//    std::cout<< *bob << std::endl;
//
//    gendalf->fight(*bob);
//    std::cout<< *bob << std::endl;
//    std::cout<< *gendalf << std::endl;
//
//    bob->fight(*gendalf);
//    std::cout<< *bob << std::endl;
//    std::cout<< *gendalf << std::endl;
//
//    drakula->bite(*gendalf);
//    std::cout<< *gendalf << std::endl;
//
//    gendalf->cast(*bob, "AVADAKEDAVRA");
//    std::cout<< *bob << std::endl;
//
//    avicenna->cast(*bob, "AVADAKEDAVRA");
//    std::cout<< *bob << std::endl;
//    gendalf->cast(*bob, "FIREBALL");
//
//    std::cout<< *bob << std::endl;
//    avicenna->cast(*bob, "FIREBALL");
//
//
//    std::cout<< *bob << std::endl;
//    gendalf->cast(*bob, "AVADAKEDAVRA");
//    std::cout<< *bob << std::endl;
//
//    avicenna->cast(*bob, "AVADAKEDAVRA");
//    std::cout<< *bob << std::endl;
//    gendalf->cast(*bob, "FIREBALL");
//
//    std::cout<< *bob << std::endl;
//    avicenna->cast(*bob, "FIREBALL");
//
//
//    std::cout<< *bob << std::endl;
//    gendalf->bite(*bob);
//    std::cout<< *bob << std::endl;

//
//    Rogue* solovey = new Rogue("Solovey");
//    std::cout<< *solovey << std::endl;
//    solovey->fight(*gendalf);
//    std::cout<< *gendalf << std::endl;
//    gendalf->bite(*solovey);
//
//    std::cout<< *solovey << std::endl;
//    solovey->fight(*gendalf);
//    std::cout<< *gendalf << std::endl;
//


//    Berserker* ivar = new Berserker("Ivar");
//    Soldier* john = new Soldier("John");
//
//    Rogue* solovey = new Rogue("Solovey");
//    std::cout<< *drakula << std::endl;
//    std::cout<< *solovey << std::endl;
////
//    drakula->fight(*bob);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
//    bob->fight(*drakula);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
//    bob->bite(*drakula);
//    drakula->bite(*bob);
//
//    std::cout<< *bob << std::endl;
//    bob->bite(*drakula);
////    std::cout<< *ivar << std::endl;
//    solovey->fight(*drakula);
////    bob->fight(*drakula);
////    std::cout<< *bob << std::endl;
//    std::cout<< *drakula << std::endl;
////    bob->bite(*solovey);
//    std::cout<< *solovey << std::endl;
//
//    drakula->fight(*solovey);

//    try{
//        bob->fight(*drakula);
//        std::cout<< *bob << std::endl;
//        std::cout<< *drakula << std::endl;
//
//    } catch (UnitIsDeadException& e) {
//    std::cout << "Standard exception: "<< e.message << std::endl;
//}

//    std::cout<< *drakula << std::endl;
//    std::cout<< *solovey << std::endl;
//    solovey->fight(*drakula);
//    std::cout<< *bob << std::endl;


//
//    std::cout<< *john << std::endl;



//    std::cout<< std::endl;
//    solovey->fight(*bob);
//    std::cout<< *bob << std::endl;
//    std::cout<< *solovey << std::endl;
//
//    std::cout<< *ivar << std::endl;
//    solovey->bite(*ivar);
//    std::cout<< *ivar << std::endl;
//    ivar->fight(*solovey);
//    solovey->fight(*ivar);
//
//    std::cout<< *solovey << std::endl;




//    drakula->fight(*ivar);
//
//    std::cout<< *drakula << std::endl;
//    std::cout<< *ivar << std::endl;
//    ivar->fight(*drakula);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *ivar << std::endl;
//    solovey->fight(*drakula);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *solovey << std::endl;
//try {
//    std::cout<< *john << std::endl;
//    std::cout<< *bob << std::endl;
//    bob->fight(*john);
//    std::cout<< *john << std::endl;
//    std::cout<< *bob << std::endl;
//} catch (UnitIsDeadException& e) {
//    std::cout << "Standard exception: "<< e.message << std::endl;
//}
//    try {
//        john->fight(*bob);
//        std::cout<< *john << std::endl;
//        std::cout<< *bob << std::endl;
//    } catch (UnitIsDeadException& e) {
//        std::cout << "Standard exception: "<< e.message << std::endl;
//    }
//    std::cout<< *bob << std::endl;
//    std::cout<< *drakula << std::endl;
//try {
////    std::cout<< *drakula << std::endl;
////    std::cout<< *bob << std::endl;
//        drakula->fight(*solovey);
//    } catch (UnitIsDeadException& e) {
//        std::cout << "Standard exception: "<< e.message << std::endl;
//}
//    std::cout<< *drakula << std::endl;
//    std::cout<< *solovey << std::endl;
//    std::cout<< *bob << std::endl;
//    bob->fight(*drakula);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
//    bob->setAbility(new AbilityVampire(bob, 24));

//    try {
////        bob->getAbility()->infect(*drakula);
//drakula->fight(*bob);
//        std::cout<< *drakula << std::endl;
//
//        std::cout<< *bob << std::endl;
//    } catch (UnitIsDeadException& e) {
//        std::cout << "Standard exception: "<< e.message << std::endl;
//    }

//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
//    bob->fight(*drakula);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
    return 0;
}
