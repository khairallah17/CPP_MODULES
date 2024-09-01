#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): name("le mah"), grade(1) {
    std::cout << GRN << "Constructor Called Burreaucrat Created!" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name) {
    std::cout << GRN << "Paramtrized Constructor Called!" << RESET << std::endl;
    if (grade < 1) {
        throw GradeTooHighException();
    } else if(grade > 150) {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) {
    std::cout << PURPLE << "Burreaucrat Created!" << RESET << std::endl;
    this->setGrade(bureaucrat.grade);
}

Bureaucrat::~Bureaucrat() {
    std::cout << BRED << "Destructor Called Burreaucrat Destroyed!" << RESET << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
    std::cout << PURPLE << "Copy Assignement Operator Called!" << RESET << std::endl;
    this->grade = bureaucrat.grade;
    return (*this);
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

void Bureaucrat::setGrade(int grade) {
    this->grade = grade;
}

void Bureaucrat::decrement() {
    if (this->getGrade() == 150)
        throw Bureaucrat::GradeTooLowException();
    this->setGrade(this->getGrade() + 1);
}

void Bureaucrat::increment() {
    if (this->getGrade() == 1)
        throw Bureaucrat::GradeTooHighException();
    this->setGrade(this->getGrade() - 1);
}

void    Bureaucrat::signForm(AForm &form) const {
    
    try {
        if (this->getGrade() <= form.getSignGrade()) {
            form.setSigne(true);
            std::cout << this->getName() << " signed " << form.getName() << std::endl;
        } else 
            throw AForm::GradeTooLowException();
    } catch (std::exception &e) {
        std::cout << this->getName() << " counldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }

}

void    Bureaucrat::executeForm(AForm const &form) {
    try {
        form.execute(*this);
        std::cout << PURPLE << this->getName() << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    return (os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}