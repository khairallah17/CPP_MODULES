#include "AForm.hpp"

AForm::AForm(): name("some random name"), signGrade(10), execGrade(50), signe(false) {
    std::cout << GRN << "Constructor called, AForm created :)!" << RESET << std::endl;
}

AForm::~AForm() {
    std::cout << BRED << "Destructor called, AForm Destroyed :(!" << RESET << std::endl;
}

AForm::AForm(const std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade), signe(false) {
    if (signGrade < 1 || execGrade < 1)
        throw AForm::GradeTooHighException();
    else if (execGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();
    std::cout << GRN << "Paramtrized Constructor called, AForm created :)!" << RESET << std::endl;
}

AForm::AForm(const AForm &form): name(form.getName()), signGrade(form.getSignGrade()), execGrade(form.getExecGrade()), signe(form.getSigne()) {
    *this = form;
    std::cout << GRN << "Copy constructor called, AForm created :)!" << RESET << std::endl;
}

AForm &AForm::operator=(const AForm &form) {
    std::cout << GRN << "Copy assignment operator called, AForm created :)!" << RESET << std::endl;
    const_cast<std::string&>(name) = form.name;
    return *this;
}

std::string AForm::getName() const {
    return this->name;
}

void    AForm::setSigne(bool signe) {
    this->signe = signe;
}

int     AForm::getSignGrade() const {
    return this->signGrade;
}

int     AForm::getExecGrade() const {
    return this->execGrade;
}

bool    AForm::getSigne() const {
    return this->signe;
}

void    AForm::beSigned(const Bureaucrat &bureaucrat) {
    try {
        bureaucrat.signForm(*this);
    } catch (std::exception &e) {
        std::cout << BRED << e.what() << RESET << std::endl;
    }
}

void    AForm::execute(const Bureaucrat &executor) const {

    if (this->getSigne() && this->getExecGrade() >= executor.getGrade())
        this->executeAction();
    else
        throw AForm::GradeTooLowException();

}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
    return (
        os << "\tAForm name: " << form.getName() << "\n" << "\tAForm execution Grade: " << form.getSignGrade() << "\n" << "\tAForm Sign Grade: " << form.getExecGrade() << "\n" << "\tIs AForm Singed: " << form.getSigne()
    );
}