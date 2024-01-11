#include <iostream>

int main()
{
    std::string  s = "HI THIS IS BRAIN";
    std::string  *stringPTR = &s;
    std::string&  stringREF = s;

    cout << &s << endl << stringPTR << endl << &stringREF << endl;

    cout << s << endl << *stringPTR << endl << stringREF << endl;
}