#include <iostream>
#include <thread>
#include "runtime/Heartbeat.hpp"

int main()
{
    Heartbeat heartbeat; // Create an instance of Heartbeat

    while (true)
    {
        heartbeat.runPulse(); // Correct function call

        std::cout << "Heartbeat: " << heartbeat.getPulse() << std::endl;

        // Adding a delay to prevent excessive CPU usage
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "Beat: " << heartbeat.getIsPulse() << std::endl;
    }

    return 0;
}
