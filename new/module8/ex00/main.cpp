#include "easyfind.hpp"

int main ()
{
    std::map<std::string, int> tab;
    tab["pomme"] = 5;
    tab["samsung"] = 50;
    tab["asus"] = 2;
    if (easyfind(tab, 2))
        std::cout << "le chiffre 2 est bien dans notre tab" << std::endl;
    else
        std::cout << "il n y pas ce chiffre dans notre conteurs" << std::endl;
    return 0;
}