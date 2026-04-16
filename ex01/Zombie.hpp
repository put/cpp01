#include <string>
#include <iostream>

class Zombie
{
    public:
    Zombie() : Name("Unnamed") {}
    void setName(std::string name);
    void announce(void);
	private:
	std::string Name;
};

Zombie* zombieHorde(int N, std::string name);