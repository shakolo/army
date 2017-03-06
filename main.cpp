#include <iostream>
#include "Unit.hpp"
#include "Soldier.hpp"

int main() {
    Soldier* bob = new Soldier("Bob");
    Soldier* john = new Soldier("John");
    std::cout<< *john << std::endl;
    bob->fight(*john);
    std::cout<< *john << std::endl;
    std::cout<< *bob << std::endl;
    return 0;
}
