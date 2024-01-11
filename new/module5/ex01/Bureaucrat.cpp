#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("mr"), _grade(150) {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) {
    _grade = bureaucrat._grade;
    _name = bureaucrat._name;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat) {
    _grade = bureaucrat._grade;
    _name = bureaucrat._name;
    return (*this);
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : _name(name), _grade(grade) {
}

int Bureaucrat::getGrade() const {
    return _grade;
}

std::string Bureaucrat::getName() const {
    return _name;
}

void Bureaucrat::gradep() {
    if (_grade < 150)
        _grade++;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradem() {
    if (_grade > 1)
        _grade--;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form const &form) {
    if (form.getSign() == true)
        std::cout << _name << " a signer " << form.getName() << std::endl;
    else
        std::cout << _name << " n'a pas signer " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}
