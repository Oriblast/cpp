#include "Form.hpp"

Form::Form() : _name("formulaire"), _sign(false), _sign_grade(10), _ex_grade(10) {

}

Form::~Form() {}

Form::Form(Form const &form) : _name(form._name), _sign(form._sign), _sign_grade(form._sign_grade), _ex_grade(form._ex_grade) {}

Form &Form::operator=(Form const &form)  {
    _name = form._name;
    _sign = form._sign;
    return *this;
}

Form::Form(std::string name, int const sign_grade, int const ex_grade) : _name(name), _sign(0), _sign_grade(sign_grade), _ex_grade(ex_grade) {

}

int Form::getGrade() const  {
    return _sign_grade;
}

int Form::getEx() const  {
    return _ex_grade;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::getSign() const {
    return _sign;
}

void Form::beSigned (Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() < _sign_grade)
        _sign = true;
    else
        throw Form::GradeTooLowException();
}
