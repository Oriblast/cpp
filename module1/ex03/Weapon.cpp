#include "Weapon.hpp"

Weapon::Weapon(std::string arme) {
    type = arme;
}

Weapon::~Weapon() {
    std::cout << type << ": est detruite" << &std::endl;
}

void    Weapon::setType(std::string arm) {
    type = arm;
}

std::string&    Weapon::getType() {
    std::string& arm = type;
    return arm;
}