#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;
    Harl dacc;
    dacc.complain(argv[1]);
    return 0;
}