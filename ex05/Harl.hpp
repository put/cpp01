#ifndef HARL
#define HARL
#include <string>

class Harl {
    private:
    void debug();
    void warning();
    void info();
    void error();
    void (Harl::*functions[4])();
    public:
    Harl();
    void complain(std::string error);
};
#endif