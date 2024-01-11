#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    try
{
    Intern someRandomIntern;
    Bureaucrat a("a", 2);
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->beSigned(a);
    a.signForm(*rrf);
    rrf->execute(a);
}
catch(const std::runtime_error &e)
{
    std::cerr << "fatal error:" << e.what() << std::endl;
    return -1;
}
return 0;
}