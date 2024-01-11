#include "ScavTrap.hpp"

int main ()
{
    ClapTrap ken("ken");
    ClapTrap kenneth("kenneth");
    ScavTrap max("max");
    ScavTrap ori("blast");

    while (ken.get_energy() > 0 && kenneth.get_energy() > 0 && max.get_energy() > 0 && ori.get_energy() > 0)
    {
        ken.attack(kenneth.get_name());
        kenneth.takeDamage(ken.get_dommage());
        kenneth.attack(ken.get_name());
        ken.takeDamage(kenneth.get_dommage());
        std::cout << std::endl;

        ken.attack(kenneth.get_name());
        kenneth.takeDamage(ken.get_dommage());
        kenneth.attack(ken.get_name());
        ken.takeDamage(kenneth.get_dommage());
        std::cout << std::endl;

        max.attack(ori.get_name());
        ori.takeDamage(max.get_dommage());
        ori.attack(max.get_name());
        max.takeDamage(ori.get_dommage());
        std::cout << std::endl;

        kenneth.beRepaired(5);
        ken.beRepaired(5);
        ori.beRepaired(5);
        max.beRepaired(5);
        max.guardGate();
        ori.guardGate();
        std::cout << std::endl;
    }
}

