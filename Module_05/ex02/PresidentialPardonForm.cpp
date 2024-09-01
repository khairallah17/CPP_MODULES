#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("home") {
    std::cout << GRN << "PresidentialPardonForm Constructor Called :)" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), target(target) {
    std::cout << GRN << "PresidentialPardonForm Paramtrized Constructor Called :)" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << BRED << "PresidentialPardonForm Destructor Called :)" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form) {
    std::cout << YEL << "PresidentialPardonForm Copy assignement overload called :)" << RESET << std::endl;
    this->target = form.target;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) {
    std::cout << YEL << "PresidentialPardonForm Copy constructor called :)" << RESET << std::endl;
    *this = form;
}

void    PresidentialPardonForm::executeAction() const {
    std::cout << CYN << this->target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}