#include <iostream>
#include "logic/DiceRoller.hpp"

int main() {
    DiceRoller roller;
    roller.init();

    std::cout << "Rolling all dice...\n";
    roller.rollD4(true);
    roller.rollD6(true);
    roller.rollD8(true);
    roller.rollD10(true);
    roller.rollD12(true);
    roller.rollD20(true);
    roller.rollD100(true);

    return 0;
}
