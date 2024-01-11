#ifndef DEF_CONTACT
#define DEF_CONTACT

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
    public:
    std::string firtN;
    std::string lastN;
    std::string nickN;
    std::string nbr;
    Contact();
    ~Contact();
};

#endif