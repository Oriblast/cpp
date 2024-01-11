#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>

class Weapon {
    public:
    Weapon(std::string arme);
    ~Weapon();
    std::string&    getType();
    void    setType(std::string arm);

    private:
    std::string type;
};

class HumanA {
    public:
    HumanA(std::string name, Weapon arme);
    ~HumanA();
    void attack();
    void setWeapon(Weapon s);

    private:
    std::string nom;
    Weapon ar;
};

class HumanB {
    public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon s);

    private:
    std::string nom;
    Weapon ar;
};

#endif