#include "Weapon.hpp"

HumanB::HumanB(std::string name) : nom(name), ar("default_weapon") {}

HumanB::~HumanB() {
   std::cout << nom << ":est mort" << std::endl;
}

void HumanB::attack() {
    std::cout << nom << " attacks with their " << ar.getType() << std::endl;
}

void HumanB::setWeapon(Weapon s) {
    ar = s;
}