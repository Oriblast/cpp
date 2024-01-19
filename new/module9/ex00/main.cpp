#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange change(argv[1]);
        change.execut();
    }
    return 0;
}