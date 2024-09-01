#pragma once
#include "Bureaucrat.hpp"

class Form {

    private:
        const std::string   name;
        const int           signGrade;
        const int           execGrade;
        bool                signe;

    public:
        ~Form();
        Form();
        Form(const Form &form);
        Form &operator=(const Form &form);
        Form(const std::string name, int signGrade, int execGrade);

        void        setName(const std::string name);
        void        setSignGrade(int signeGrade);
        void        setExecGrade(int execGrade);
        void        setSigne(bool signe);

        std::string getName() const;
        int         getSignGrade() const;
        int         getExecGrade() const;
        bool        getSigne() const;
        void        beSigned(const Bureaucrat &bureaucrat);
        void        signForm() const;

        class   GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

};
std::ostream &operator<<(std::ostream &os, const Form &form);