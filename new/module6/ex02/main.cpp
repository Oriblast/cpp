#include "Base.hpp"

int main ()
{
    Base *c;
    c = generate();
    identify(c);
    identify(*c);²
    return 0;
}