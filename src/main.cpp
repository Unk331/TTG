#include <iostream>
#include "runtime/Heartbeat.hpp"
#include "runtime/Wait.h"
#include <thread>


#include <iostream>
#include "logic/RNG.hpp"

int main() {
    RNG rng;
    rng.init();

    std::cout << "Seed: " << rng.get_seed() << std::endl;
    std::cout << "Random Number: " << rng.generate_RNG_OUT(false) << std::endl;

    std::cout << rng.getDebugOut() << std::endl;

    return 0;
}
