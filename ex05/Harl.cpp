#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

void Harl::debug()
{
    std::cout << "Debugging is tedious, why can't it be easier?" << std::endl;
}

void Harl::info()
{
    std::cout << "Let me tell ya something, this info is useless!" << std::endl;;
}

void Harl::warning()
{
    std::cout << "You better work this time, or else.." << std::endl;
}

void Harl::error()
{
    std::cout << "This straight up doesn't work. Of course it's broken!" << std::endl;
}

void Harl::complain(std::string level)
{
    static const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = 0;
    for (; index < 4; index++)
    {
        if (levels[index] == level)
            break;
    }
    if (index == 4)
        return;
    (this->*functions[index])();
}