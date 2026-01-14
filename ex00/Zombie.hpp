#include <string>
#include <iostream>

class Zombie
{
    public:
    std::string Name;

    Zombie(std::string name);
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);