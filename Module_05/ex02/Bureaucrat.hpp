#pragma once
#include <iostream>
#include <string.h>
#include <stdexcept>

#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define GRN "\e[0;32m"
#define BRED "\e[1;31m"
#define YEL "\e[0;33m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"

class AForm;

class Bureaucrat {

    private:
        const std::string name;
        int   grade;

    public:
        ~Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat& operator=(const Bureaucrat& bureaucrat);
        Bureaucrat();
        std::string   getName() const;
        void                setGrade(int grade);
        int           getGrade() const;
        void                increment();
        void                decrement();
        void                signForm(AForm &form) const;
        void                executeForm(AForm const &form);

        class   GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
