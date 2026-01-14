#include "Zombie.hpp"

int main(void)
{
    randomChump("Test1");
    Zombie* z = newZombie("Test2");
    z->announce();
    delete z;
    return 0;
}