#pragma once
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm: public AForm {

    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &form);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
        void    executeAction() const;

};