#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
    std::string _name;

    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap &operator=(DiamondTrap const &diamondtrap);

    using ScavTrap::attack;
    void whoAmI();
};
