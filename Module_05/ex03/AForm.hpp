#pragma once
#include "Bureaucrat.hpp"

class AForm {

    private:
        const std::string   name;
        const int           signGrade;
        const int           execGrade;
        bool                signe;

    public:
        virtual ~AForm();
        AForm();
        AForm(const AForm &form);
        virtual AForm &operator=(const AForm &form);
        AForm(const std::string name, int signGrade, int execGrade);

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
        void        execute(const Bureaucrat &executor) const;
        virtual     void    executeAction() const = 0;

        class   GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

};
std::ostream &operator<<(std::ostream &os, const AForm &form);