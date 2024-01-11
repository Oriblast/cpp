#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("president", 25, 5), _tar("presi") {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &pre) : Form("president", 25, 5), _tar("presi") {}

PresidentialPardonForm::~PresidentialPardonForm () {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &pre) {
    _tar = pre._tar;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string tar) : Form("president", 25, 5), _tar(tar) {}

void PresidentialPardonForm::execute(Bureaucrat const &excutor) const {
    checkSignForm(excutor);
    std::cout << excutor.getName() << " has been pardoned by Zaphod Beeblebrox\n"; 
}