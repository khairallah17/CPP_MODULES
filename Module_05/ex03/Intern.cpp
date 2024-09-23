#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <sys/types.h>

Intern::Intern() {
    std::cout << GRN << "Intern Constructor Called!" << RESET << std::endl;
}

Intern::~Intern() {
    std::cout << BRED << "Intern Desctructor Called!" << RESET << std::endl;
}

Intern::Intern(const Intern &intern) {
    *this = intern;
    std::cout << "Intern Copy Constructor Called!" << std::endl;
}

Intern &Intern::operator=(const Intern &intern) {
    if (this != &intern)
    {}
    return (*this);
}

AForm   *Intern::makeForm(std::string form_type, std::string form_name) {
    
    std::string forms[4] = {"presidential pardon","shrubbery creation","robotomy request"};
    
    int i = 0;

    for ( ; i < 4 ; i++) {
        if (forms[i] == form_type)
            break;
    }

    switch(i) {
        case 0:
            return new PresidentialPardonForm(form_name);
            break;
        case 1:
            return new ShrubberyCreationForm(form_name);
            break;
        case 2:
            return new RobotomyRequestForm(form_name);
            break;
        default:
            std::cout << BRED << "No Form Found For: " << form_type << RESET << std::endl;
    }

    return NULL;

}
