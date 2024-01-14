#include "Array.hpp"

int main ()
{
    Array<int> tab(5);
    Array<int> tab2(7);
    Array<int> tab3 = tab;

    tab[0] = 10;
    tab2 = tab;
    std::cout << tab.size() << std::endl;
    std::cout << tab[0] << std::endl;
    std::cout << tab2.size() << std::endl;
    std::cout << tab3.size() << std::endl;
}