#ifndef DICE_ROLLER_HPP
#define DICE_ROLLER_HPP

#include <string>

class DiceRoller {
private:
    int seed;
    int lastRoll;
    bool debug = false;
    std::string debugOut;

public:
    void init();
    void set_seed(int seed);
    int get_seed();
    int get_last_roll();

    int rollDice(int sides, bool debug);

    // Roll specific dice types
    int rollD4(bool debug = false);
    int rollD6(bool debug = false);
    int rollD8(bool debug = false);
    int rollD10(bool debug = false);
    int rollD12(bool debug = false);
    int rollD20(bool debug = false);
    int rollD100(bool debug = false);

    std::string getDebugOut() const;
    void setDebugOut(const std::string& debugOut);
};

#endif // DICE_ROLLER_HPP
