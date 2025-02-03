#include "DiceRoller.hpp"
#include <iostream>
#include <random>
#include <ctime>

void DiceRoller::init() {
    seed = static_cast<int>(std::time(nullptr)); // Use current time as seed
    set_seed(seed);
}

void DiceRoller::set_seed(int seed) {
    this->seed = seed;
    std::srand(seed); // Set the seed for random number generation
}

int DiceRoller::get_seed() {
    return seed;
}

int DiceRoller::get_last_roll() {
    return lastRoll;
}

// Generic roll function
int DiceRoller::rollDice(int sides, bool debug) {
    if (sides < 1) return -1; // Invalid number of sides

    lastRoll = (std::rand() % sides) + 1; // Roll between 1 and `sides`

    if (debug) {
        debugOut = "Rolled a d" + std::to_string(sides) + ": " + std::to_string(lastRoll);
        setDebugOut(debugOut);
        std::cout << debugOut << std::endl;  // Print debug information
    }

    return lastRoll;
}

// Specialized dice rolls
int DiceRoller::rollD4(bool debug) { return rollDice(4, debug); }
int DiceRoller::rollD6(bool debug) { return rollDice(6, debug); }
int DiceRoller::rollD8(bool debug) { return rollDice(8, debug); }
int DiceRoller::rollD10(bool debug) { return rollDice(10, debug); }
int DiceRoller::rollD12(bool debug) { return rollDice(12, debug); }
int DiceRoller::rollD20(bool debug) { return rollDice(20, debug); }
int DiceRoller::rollD100(bool debug) { return rollDice(100, debug); }

void DiceRoller::setDebugOut(const std::string& debugOut) {
    this->debugOut = debugOut;
}

std::string DiceRoller::getDebugOut() const {
    return debugOut;
}
