#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    // initialisez les membres du PhoneBook au besoin
}

PhoneBook::~PhoneBook() {
    // initialisez les membres du PhoneBook au besoin
}

void PhoneBook::add(std::string i, std::string j, std::string k, std::string l)
{
    if (this->compte == 8)
        this->compte = 0;
    this->tab[this->compte].firtN = i;
    this->tab[this->compte].lastN = j;
    this->tab[this->compte].nickN = k;
    this->tab[this->compte].nbr = l;
    this->compte++;
}

void PhoneBook::search(int index)
{
    std::cout << "|";
    std::cout << std::setw(10) << this->tab[index].firtN.substr(0, 10);
    if (this->tab[index].firtN.size() > 10)
        std::cout << ".";
    std::cout << "|";
    std::cout << std::setw(10) << this->tab[index].lastN.substr(0, 10);
    if (this->tab[index].lastN.size() > 10)
         std::cout << ".";
    std::cout << "|";
    std::cout << std::setw(10) << this->tab[index].nickN.substr(0, 10);
    if (this->tab[index].nickN.size() > 10)
         std::cout << ".";
    std::cout << "|";
    std::cout << std::setw(7) << this->tab[index].nbr.substr(0, 10);
    if (this->tab[index].nbr.size() > 10)
         std::cout << ".|";
    std::cout << "\n";
}