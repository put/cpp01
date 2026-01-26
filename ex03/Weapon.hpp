#ifndef WEAPON
#define WEAPON
#include <string>

class Weapon {
    private:
    std::string type;
    public:
    Weapon();
    Weapon(std::string _type);
    void setType(std::string newType);
    const std::string& getType();
};
#endif