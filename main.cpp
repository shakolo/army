#include <iostream>
#include "Unit.hpp"
#include "Soldier.hpp"

int main() {
    Soldier* bob = new Soldier("Bob");
    Soldier* john = new Soldier("John");
    std::cout<< *john << std::endl;
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    bob->attack(*john);
    std::cout<< *john << std::endl;
    return 0;
}
