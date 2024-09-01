#include "Form.hpp"

Form::Form(): name("some random name"), signGrade(10), execGrade(50), signe(false) {
    std::cout << GRN << "Constructor called, Form created :)!" << RESET << std::endl;
}

Form::~Form() {
    std::cout << BRED << "Destructor called, Form Destroyed :(!" << RESET << std::endl;
}

Form::Form(const std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade), signe(false) {
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    else if (execGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << GRN << "Paramtrized Constructor called, Form created :)!" << RESET << std::endl;
}

Form::Form(const Form &form): name(form.getName()), signGrade(form.getSignGrade()), execGrade(form.getExecGrade()), signe(form.getSigne()) {
    *this = form;
    std::cout << GRN << "Copy constructor called, Form created :)!" << RESET << std::endl;
}

Form &Form::operator=(const Form &form) {
    std::cout << GRN << "Copy assignment operator called, Form created :)!" << RESET << std::endl;
    const_cast<std::string&>(name) = form.name;
    return *this;
}

std::string Form::getName() const {
    return this->name;
}

void    Form::setSigne(bool signe) {
    this->signe = signe;
}

int     Form::getSignGrade() const {
    return this->signGrade;
}

int     Form::getExecGrade() const {
    return this->execGrade;
}

bool    Form::getSigne() const {
    return this->signe;
}

void    Form::beSigned(const Bureaucrat &bureaucrat) {
    try {
        bureaucrat.signForm(*this);
    } catch (std::exception &e) {
        std::cout << BRED << e.what() << RESET << std::endl;
    }
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    return (
        os << "Form name: " << form.getName() << "\n" << "\tForm execution Grade: " << form.getSignGrade() << "\n" << "\tForm Sign Grade: " << form.getExecGrade() << "\n" << "\tIs Form Singed: " << form.getSigne()
    );
}