#include "ClapTrap.hpp"

int main ()
{
    ClapTrap ken("ken");
    ClapTrap kenneth("kenneth");

    while (ken.get_energy() > 0 && kenneth.get_energy() > 0)
    {
        ken.attack(kenneth.get_name());
        kenneth.takeDamage(ken.get_dommage());
        kenneth.attack(ken.get_name());
        ken.takeDamage(kenneth.get_dommage());

        ken.attack(kenneth.get_name());
        kenneth.takeDamage(ken.get_dommage());
        kenneth.attack(ken.get_name());
        ken.takeDamage(kenneth.get_dommage());

        kenneth.beRepaired(5);
        ken.beRepaired(5);
    }
}