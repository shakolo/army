#include <iostream>
#include "Unit.hpp"
#include "Soldier.hpp"

int main() {
    Soldier* bob = new Soldier(new State(100), new Ability(10), "Bob");
    Soldier* john = new Soldier(new State(100), new Ability(10), "John");
    std::cout<< *john << std::endl;
    bob->attack(*john);
    std::cout<< *john << std::endl;
    return 0;
}
