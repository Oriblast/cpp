#pragma once 

#include <string>
#include <iostream>
#include <limits>
#include <cmath>

bool estEntier(double nombre) {
    double partieFractionnaire;
    return std::modf(nombre, &partieFractionnaire) == 0.0;
}

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
        j = j * 10 + val[i] - '0';
        val[i] = val[i] / 10;
        i++;
    }
    if (j > 127 || (j >= 0 && j <= 32) || nega == 1)
        std::cout << "char :non affichable" << std::endl;
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
    std::cout << "float:" << i;
    if (estEntier(i))
       std::cout << ".0f"; 
    std::cout << std::endl;
}

void pDouble (std::string val)
{
    double i = std::stof(val);
    std::cout << "double:" << i;
    if (estEntier(i))
       std::cout << ".0"; 
    std::cout << std::endl;
}

void general(std::string val)
{
    pChar(val);
    pInt(val);
    PFloat(val);
    pDouble(val);   
}

void p_inf()
{
    std::cout << "  char : impossible" << std::endl;
    std::cout << "  int  : impossible" << std::endl;
    std::cout << " float : +inff" << std::endl;
    std::cout << "double : +inf" << std::endl;
}

void nan()
{
    std::cout << "  char : impossible" << std::endl;
    std::cout << "  int  : impossible" << std::endl;
    std::cout << " float : nanf" << std::endl;
    std::cout << "double : nan" << std::endl;
}

void m_inf()
{
    std::cout << "  char : impossible" << std::endl;
    std::cout << "  int  : impossible" << std::endl;
    std::cout << " float : -inff" << std::endl;
    std::cout << "double : -inf" << std::endl;
}

bool checkS(std::string val) 
{
    int i = 0;
    if (val[0] == '.')
        return false;
    while (val[i])
    {
        if ((val[i] < '0' || val[i] > '9') && val[i] != '.')
            return false;
        i++;
    }
    return true;
}
void bof()
{
    std::cout << "char: imposible" << std::endl;
    std::cout << "int: imposible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

class SclarConverter {
    public:
    static int Converter(std::string val) {
        if (val.length() > std::numeric_limits<int>::max())
        {
            bof ();
            return -1;
        }
        if (checkS(val) == true)
            general(val);
        else
        {
            if (val == "+inf" || val == "+inff")
                p_inf();
            else if (val == "-inf" || val == "-inff")
                m_inf();
            //else if (val == "nan")
              //  nan();
            else
                bof();
        }
        return 1;
    }
};