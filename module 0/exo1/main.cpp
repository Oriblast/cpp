#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook Book;
    string  entre;
    string  f;
    string  l;
    string  ni;
    string  n;
    int     index;

    while(1)
    {
        cout << "entre un ADD, EXIT ou SEARCH" << endl;
        cin >> entre;
        if (entre == "ADD")
        {
            cout << "entre le Nom" << endl;
            cin >> f;
            cout << "le prenom" << endl;
            cin >> l;
            cout << "le surnom" << endl;
            cin >> ni;
            cout << "le numero" << endl;
            cin >> n;
            Book.add(f, l, ni, n);
        }
        if (entre == "EXIT")
            break ;
        if (entre == "SEARCH")
        {
            cout << "entre un index entre 0 et 7" << endl;
            cin >> index;
            Book.search(index);
        }
    }
}