#include "iter.hpp"
template<typename T>
void incre(T &a)
{
    a++;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    char b[6] = "salut";
    iter(a, 5, &incre);
    iter(b, 5, &incre);
    for (int i = 0; i<5; i++)
        std::cout << a[i] << std::endl;
    for (int i = 0; i<5; i++)
        std::cout << b[i] << std::endl;
    return 0;
}