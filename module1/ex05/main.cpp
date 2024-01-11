#include "Harl.hpp"

int main ()
{
    std::string s;
    Harl dacc;

    while (1)
    {
        std::cout << "entre DEBUG , ERREUR, INFO WARNING, INFO OU EXIT" << std::endl;
        std::cin >> s;
        if (s == "EXIT")
            break ;
        dacc.complain(s);
    }
    return 0;
}