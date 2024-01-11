#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
  
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &claptrap);

    void guardGate();
    void attack(const std::string& target);
};