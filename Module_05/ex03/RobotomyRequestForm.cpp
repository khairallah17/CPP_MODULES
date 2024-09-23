#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("home") {
    std::cout << GRN << "RobotomyRequestForm Contructor called :)" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << BRED << "RobotomyRequestForm Detructor called :)" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), target(target) {
    std::cout << GRN << "RobotomyRequestForm Paramtrized Contructor called :)" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) {
    *this = form;
    std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form) {
    this->target = form.target;
    std::cout << GRN << "RobotomyRequestForm Copy Assignement Overload called :)" << RESET << std::endl;
    return (*this);
}

void    RobotomyRequestForm::executeAction() const {
    int timer = std::rand() % 10;
    int chance = std::rand() % 2;
    for (int i = 0 ; i < timer ; i++)
        std::cout << YEL << "drilling noise" << RESET << std::endl;
    if (chance)
        std::cout << CYN << this->target << " has been robotomized successfully 50% of the time" << RESET << std::endl;
    else
        std::cout << BRED << "Robotomy failed" << RESET <<  std::endl;
}