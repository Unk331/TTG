#include "RNG.hpp"
#include <iostream>
#include <random>
#include <ctime>

void RNG::init() {
    seed = static_cast<int>(std::time(nullptr)); // Use current time as seed
    set_seed(seed);
}

void RNG::set_seed(int seed) {
    this->seed = seed;
    std::srand(seed); // Set the seed for random number generation
}

int RNG::get_seed() {
    return seed;
}

int RNG::get_RNG_OUT() {
    return RNG_OUT;
}

int RNG::generate_RNG_OUT(bool debug) {
    this->debug = debug;
    RNG_OUT = std::rand(); // Generate a random number

    if (debug) {
        debugOut = "Seed Value: " + std::to_string(seed) + 
                   " | RNG Output: " + std::to_string(RNG_OUT);
        setDebugOut(debugOut);
        std::cout << debugOut << std::endl;  // Print debug information
    }

    return RNG_OUT;
}

void RNG::setDebugOut(const std::string& debugOut) {
    this->debugOut = debugOut;
}

std::string RNG::getDebugOut() const {
    return debugOut;
}

