#include <iostream>
#include "Unit.hpp"
#include "Soldier.hpp"
#include "Rogue.hpp"
#include "Berserker.hpp"


int main() {
    Soldier* bob = new Soldier("Bob");
    Soldier* john = new Soldier("John");
    Rogue* solovey = new Rogue("Solovey");
    std::cout<< *john << std::endl;
    bob->fight(*john);
    std::cout<< *john << std::endl;
    std::cout<< *bob << std::endl;
    std::cout<< std::endl;
    solovey->fight(*bob);
    std::cout<< *bob << std::endl;
    std::cout<< *solovey << std::endl;

    Berserker* ivar = new Berserker("Ivar");
    ivar->fight(*solovey);
    solovey->fight(*ivar);

    std::cout<< *solovey << std::endl;
    std::cout<< *ivar << std::endl;
    return 0;
}
