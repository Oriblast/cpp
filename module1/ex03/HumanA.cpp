#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon arme) : nom(name), ar(arme) {

}

HumanA::~HumanA() {
   std::cout << nom << ":est mort" << std::endl;
}

void HumanA::attack() {
    std::cout << nom << " attacks with their " << ar.getType() << std::endl;
}

void HumanA::setWeapon(Weapon s) {
    ar = s;
}