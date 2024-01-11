#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    private:
    Contact tab[8];
    int compte;
    
    public:
    PhoneBook();
    ~PhoneBook();
    void add(std::string i, std::string j, std::string k, std::string l);
    void search(int index);
};

#endif