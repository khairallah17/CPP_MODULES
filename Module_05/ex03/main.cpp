#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()  {
    
	Intern intern;
	Bureaucrat bureaucrat("Bureaucrat007", 1);
	AForm *form;

	// try
	// {
	// 	form = intern.makeForm("robotomy request", "Bureaucrat007");
	// 	bureaucrat.signForm(*form);
	// 	bureaucrat.executeForm(*form);
	// 	delete form;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	try
	{
		form = intern.makeForm("shrubbery creation", "Bureaucrat007");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// try
	// {
	// 	form = intern.makeForm("presidential pardon", "Bureaucrat007");
	// 	bureaucrat.signForm(*form);
	// 	bureaucrat.executeForm(*form);
	// 	delete form;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return (0);
}