#pragma once
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &form);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(RobotomyRequestForm const &form);
        void    executeAction() const;

};