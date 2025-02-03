#ifndef RNG_HPP
#define RNG_HPP

#include <string>

class RNG {
private:
    int seed;
    int RNG_OUT;
    bool debug = false;
    std::string debugOut;

public:
    void init();
    void set_seed(int seed);
    int get_seed();
    int get_RNG_OUT();
    int generate_RNG_OUT(bool debug);
    std::string getDebugOut() const;
    void setDebugOut(const std::string& debugOut);
};

#endif // RNG_HPP
