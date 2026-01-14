#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    Name = name;
}
