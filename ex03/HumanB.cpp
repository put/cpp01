#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name)
{
    name = _name;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
    else
        std::cout << name << " attacks with their bare fists (has no weapon)" << std::endl;
}
