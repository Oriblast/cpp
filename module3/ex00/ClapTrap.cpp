#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _attack_dammage(0), _energy_points(10), _hit_points(10) {
    std::cout << "constructeur par defaut Clap " << std::endl;
}

ClapTrap::ClapTrap (std::string name) : _name(name), _attack_dammage(0), _energy_points(10), _hit_points(10) {
    std::cout << "contruction de " << _name << std::endl;
}

ClapTrap::~ClapTrap () {
    std::cout << "destruction de " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energy_points > 0)
    {
        std::cout << this->_name <<  " attaque " << target << " causign " << _attack_dammage << "dammage" << std::endl;
        _energy_points--;
    }
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
    this->_name = claptrap._name;
    this->_hit_points = claptrap._hit_points;
    this->_energy_points= claptrap._energy_points;
    this->_attack_dammage = claptrap._attack_dammage;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name <<  " recoit " << amount << " de dammage ses point de vie :" << _hit_points << std::endl;
    _hit_points -= amount;
}

int ClapTrap::get_energy() {
    return _energy_points;
}

int ClapTrap::get_life() {
    return _hit_points;
}

int ClapTrap::get_dommage() {
    return _attack_dammage;
}

std::string ClapTrap::get_name() {
    return _name;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points > 0)
    {
        std::cout << this->_name << " recoit " << amount << " point de vie son mana:" << _energy_points << std::endl;
        _energy_points--;
    }
}