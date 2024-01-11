
#include "ScalarConverter.hpp"

void pChar (std::string val)
{
    int i = 0;
    int j = 0;
    int nega = 0;

    if (val[i] == -1)
    {
       i++;
       nega++;
    }
    while (val[i] && val[i] != '.' && val[i] != ',')
    {
        j = j * 10 + val[i];
        i++;
    }

    if (j > 127 || (j >= 0 && j >= 32))
        std::cout << "non affichable" << std::endl;
    else
    {
        char c = j;
        std::cout << "char:" << c << std::endl;
    }
}

void pInt (std::string val)
{
    int i = std::stoi(val);
    std::cout << "int:" << i << std::endl;
}

void PFloat (std::string val)
{
    float i = std::stof(val);
    std::cout << "float:" << i << std::endl;
}

void pDouble (std::string val)
{
    double i = std::stof(val);
    std::cout << "double:" << i << std::endl;
}

void general(std::string val)
{
    pChar(val);
    pInt(val);
    PFloat(val);
    pDouble(val);   
}
