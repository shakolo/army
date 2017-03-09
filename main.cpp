#include <iostream>
#include "Unit.hpp"
//#include "UnitType.hpp"
#include "Soldier.hpp"
#include "Rogue.hpp"
#include "Berserker.hpp"
#include "Vampire.hpp"


int main() {

    Soldier* bob = new Soldier("Bob");
//    Berserker* ivar = new Berserker("Ivar");
    Soldier* john = new Soldier("John");
//    Vampire *drakula = new Vampire("Drakula");
//    Rogue* solovey = new Rogue("Solovey");
//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
//    std::cout<< *solovey << std::endl;
//    std::cout<< *ivar << std::endl;
//    solovey->fight(*drakula);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *solovey << std::endl;
//    drakula->fight(*solovey);
//    std::cout<< *drakula << std::endl;
//    std::cout<< *solovey << std::endl;
//    std::cout<< *ivar << std::endl;
//
//    std::cout<< *john << std::endl;



//    std::cout<< std::endl;
//    solovey->fight(*bob);
//    std::cout<< *bob << std::endl;
//    std::cout<< *solovey << std::endl;
//

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
try {
    std::cout<< *john << std::endl;
    std::cout<< *bob << std::endl;
    bob->fight(*john);
    std::cout<< *john << std::endl;
    std::cout<< *bob << std::endl;
} catch (UnitIsDeadException& e) {
    std::cout << "Standard exception: "<< e.message << std::endl;
}
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
//        bob->fight(*drakula);
//        std::cout<< *drakula << std::endl;
//        std::cout<< *bob << std::endl;
//    } catch (UnitIsDeadException& e) {
//        std::cout << "Standard exception: "<< e.message << std::endl;
//}
//    try {
//        bob->getAbility()->infect(*drakula);
//        std::cout<< *drakula << std::endl;
//        std::cout<< *bob << std::endl;
//    } catch (UnitIsDeadException& e) {
//        std::cout << "Standard exception: "<< e.message << std::endl;
//    }

//    std::cout<< *drakula << std::endl;
//    std::cout<< *bob << std::endl;
    return 0;
}
