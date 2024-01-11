#include "ClapTrap.hpp"

class  FragTrap : public ClapTrap {
  
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap &operator=(FragTrap const &claptrap);
    
    void highFivesGuys(void);
    void attack(const std::string& target);
};