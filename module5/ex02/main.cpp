#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
try
{
    Bureaucrat b("jackman", 1);
    PresidentialPardonForm a("presidenteee");
    std::cout << b.getGrade() << std::endl;
    a.beSigned(b);
    b.signForm(a);
    a.execute(b);
}

catch(const std::runtime_error& e)
{
    std::cerr << "fatal error" << e.what() << std::endl;
    return -1;
}
try
{
    Bureaucrat c("capman", 2);
    RobotomyRequestForm d("bot");
    std::cout << c.getGrade() << std::endl;
    d.beSigned(c);
    c.signForm(d);
    d.execute(c);
}
catch (const std::runtime_error& e)
{
    std::cerr << "fatal error" << e.what() << std::endl;
    return -1;
}

try
{
    Bureaucrat f("capman", 3);
    SherubberyCreationForm g("bot");
    std::cout << f.getGrade() << std::endl;
    g.beSigned(f);
    f.signForm(g);
    g.execute(f);
}
catch (const std::runtime_error& e)
{
    std::cerr << "fatal error" << e.what() << std::endl;
    return -1;
}
return 0;
}