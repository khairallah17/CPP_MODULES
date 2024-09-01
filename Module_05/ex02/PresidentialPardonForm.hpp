#pragma once
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & form);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & form);
        void    executeAction() const;
};