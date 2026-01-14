#include <string>
#include <iostream>

class Zombie
{
    public:
    std::string Name;

    Zombie() : Name("Unnamed") {}
    void setName(std::string name);
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);