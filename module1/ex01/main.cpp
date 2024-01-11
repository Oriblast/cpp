#include "Zombi.hpp"

Zombi* zombieHorde(int N, std::string name)
{
    Zombi *z = new Zombi[N];

    for(int i = 0; i < N; i++)
    {
        z[i].nom(name);
        z[i].announce();
    }
    return z;
}

int main()
{
    int N = 10;
    Zombi *zmbi = zombieHorde(N, "ken");
    delete []zmbi;

    return 0;
}