#include "Bureaucrat.hpp"

int main ()
{
try
{
    Bureaucrat b("jackman", 1);
    Form a("a", 10, 10);
    std::cout << b.getGrade() << std::endl;
    a.beSigned(b);
    b.signForm(a);
}

catch(const std::runtime_error& e)
{
    std::cerr << "fatal error" << e.what() << std::endl;
    return -1;
}
return 0;
}