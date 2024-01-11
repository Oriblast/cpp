#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
    this->_name = "Flag";
    this->_attack_dammage = 30;
    this->_energy_points = 100;
    this->_hit_points = 100;
    std::cout << "constructeur par defaut Clap " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "contruction du Frag " << _name << std::endl;
    _attack_dammage = 30;
    _energy_points = 100;
    _hit_points = 100;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << _name << " YEAH !!!!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "destruction du Frag " << _name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &claptrap)
{
    this->_name = claptrap._name;
    this->_hit_points = claptrap._hit_points;
    this->_energy_points= claptrap._energy_points;
    this->_attack_dammage = claptrap._attack_dammage;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (_energy_points > 0)
    {
        std::cout << _name <<  " the fragtrap attack " << target << " causign " << _attack_dammage << "dammage" << std::endl;
        _energy_points--;
    }
}
