#ifndef DEF_CLAPTRAP
#define DEF_CLAPTRAP

#include <iostream>
#include <iomanip>

class ClapTrap {
    protected:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_dammage;

    public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &claptrap);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int get_energy();
    int get_life();
    int get_dommage();
    std::string get_name();
};

#endif