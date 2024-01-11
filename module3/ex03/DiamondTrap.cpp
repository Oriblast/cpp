#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    _name = "diamond";
    _attack_dammage = 30;
    _energy_points = 50;
    _hit_points = 100;
    std::cout << "constructeur par defaut Clap " << std::endl;
}

DiamondTrap::DiamondTrap (std::string name) {
    std::cout << "contruction du diamondtrap " << name << std::endl;
    this->_name = name;
    this->_attack_dammage = 30;
    this->_energy_points = 50;
    this->_hit_points = 100;
}

DiamondTrap::~DiamondTrap () {
    std::cout << "destruction du Diamondtrap " << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
    this->_name = diamondtrap._name;
    this->_hit_points = diamondtrap._hit_points;
    this->_energy_points = diamondtrap._energy_points;
    this->_attack_dammage = diamondtrap._attack_dammage;
    std::cout << "DiamondTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Who Am I : " << this->_name << " --> " << this->ClapTrap::get_name() << std::endl;
}