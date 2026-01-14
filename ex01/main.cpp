#include "Zombie.hpp"

void makePrintDelete(int n, std::string name)
{
    Zombie* horde = zombieHorde(n, name);
    if (horde == nullptr)
    {
        std::cout << "Invalid number of zombies provided" << std::endl;
    }
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete [] horde;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./ex00 [number_of_zombies]" << std::endl;
        return (1);
    }
    std::string count(argv[1]);
    makePrintDelete(std::stoi(argv[1]), "OneOfThem");
}