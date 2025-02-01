#ifndef HEARTBEAT_HPP 
#define HEARTBEAT_HPP

class Heartbeat
{
private:
    int pulse = 0;   // Initialize member variables
    bool isPulse = false;

public:
    void runPulse();
    int getPulse() const;
    void setPulse(int pulse);
    bool getIsPulse() const;
    void setIsPulse(bool isPulse);
};

#endif // HEARTBEAT_HPP
