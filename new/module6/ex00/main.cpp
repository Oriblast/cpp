#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return -1;
    SclarConverter::Converter(argv[1]);
    return 0;
}