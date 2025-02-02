#include <iostream>
#include "runtime/Heartbeat.hpp"
#include "runtime/Wait.h"
#include <thread>

int main() {
    Heartbeat heartbeat;

    // Test with debugging enabled
    for (int i = 0; i < 5; ++i) {
        heartbeat.runPulse(true);  // Pass 'true' to enable debugging output
        std::cout << "Current Pulse: " << heartbeat.getPulse() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Wait for a while before next pulse
    }
Wait(1);
    // Test without debugging output
    for (int i = 0; i < 5; ++i) {
        heartbeat.runPulse(false);  // Pass 'false' to disable debugging output
        std::cout << "Current Pulse: " << heartbeat.getPulse() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Wait for a while before next pulse
    }

   
    return 0;
}
