#include "Heartbeat.hpp"
#include <bits/this_thread_sleep.h>

void Heartbeat::runPulse() {
    if (!isPulse) {
        isPulse = true;
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        pulse += 1;  // Increment pulse
        isPulse = false;
    }
}

int Heartbeat::getPulse() const {
    return pulse;
}

void Heartbeat::setPulse(int pulse) {
    this->pulse = pulse;
}

bool Heartbeat::getIsPulse() const {
    return isPulse;
}

void Heartbeat::setIsPulse(bool isPulse) {
    this->isPulse = isPulse;
}
