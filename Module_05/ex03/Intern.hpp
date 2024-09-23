#pragma once
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>
class AForm;
class Intern {

    public:
        Intern();
        ~Intern();
        Intern(Intern const &intern);
        Intern   &operator=(Intern const &intern);
        AForm    *makeForm(std::string form_type, std::string form_name);

};