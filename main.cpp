#include <iostream>
#include "Unit.hpp"
#include "Soldier.hpp"
#include "Rogue.hpp"
#include "Berserker.hpp"
#include "Vampire.hpp"


int main() {
//    Soldier* bob = new Soldier("Bob");
//    Soldier* john = new Soldier("John");
    Rogue* solovey = new Rogue("Solovey");
    Berserker* ivar = new Berserker("Ivar");
    Vampire *drakula = new Vampire("Drakula");
//    std::cout<< *john << std::endl;
//    bob->fight(*john);
//    std::cout<< *john << std::endl;
//    std::cout<< *bob << std::endl;
//    std::cout<< std::endl;
//    solovey->fight(*bob);
//    std::cout<< *bob << std::endl;
//    std::cout<< *solovey << std::endl;
//

//    ivar->fight(*solovey);
//    solovey->fight(*ivar);
//
//    std::cout<< *solovey << std::endl;
//    std::cout<< *ivar << std::endl;


    ivar->fight(*drakula);
    std::cout<< *drakula << std::endl;
    std::cout<< *ivar << std::endl;
    drakula->fight(*ivar);

    std::cout<< *drakula << std::endl;
    std::cout<< *ivar << std::endl;

    solovey->fight(*drakula);
    std::cout<< *drakula << std::endl;
    std::cout<< *solovey << std::endl;
    return 0;
}
