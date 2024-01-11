#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()  {
    _name = "scav";
    _attack_dammage = 20;
    _energy_points = 50;
    _hit_points = 100;
    std::cout << "constructeur par defaut Clap " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "contruction du scav " << _name << std::endl;
    _attack_dammage = 20;
    _energy_points = 50;
    _hit_points = 100;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &claptrap)
{
    this->_name = claptrap._name;
    this->_hit_points = claptrap._hit_points;
    this->_energy_points= claptrap._energy_points;
    this->_attack_dammage = claptrap._attack_dammage;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << _name << " is naw in Gate keeper mod" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "destruction du scav " << _name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy_points > 0)
    {
        std::cout << _name <<  " the scavtrap attack " << target << " causign " << _attack_dammage << "dammage" << std::endl;
        _energy_points--;
    }
}
