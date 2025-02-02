#include <thread>
#include <iostream>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <chrono>

class Wait
{
private:
    int time;
    bool debug = 0;
public:
    Wait(int time) {
        this->time = time;
        std::this_thread::sleep_for(std::chrono::seconds(time));

        if (debug) {
            std::cout << "Waited for " << time << " seconds" << std::endl;
        }
    };
};
    
