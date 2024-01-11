#include "Bureaucrat.hpp"

int main ()
{
try
{
    Bureaucrat b("jackman", 1);
    std::cout << b.getGrade() << std::endl;
}
catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Caught GradeTooLowException: " << std::endl;
        return -1;
}
catch(const std::runtime_error& e)
{
    std::cerr << "fatal error" << e.what() << std::endl;
    return -1;
}
return 0;
}