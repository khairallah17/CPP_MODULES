#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main ()  {
    
	// {
	// 	try {

	// 		Form f1;
	// 		Bureaucrat b2("b2", 150);


	// 		std::cout << f1 << std::endl;
	// 		std::cout << b2 << std::endl;
	// 		f1.beSigned(b2);
	// 		std::cout << f1 << std::endl;

	// 	} catch (std::exception &e) {
	// 		std::cout << BRED << e.what() << RESET << std::endl;
	// 	}
	// }
	// {

	// 	try {
	// 		Bureaucrat b2("b2", 300);
	// 		Form f1("f1", 12, 15);


	// 		std::cout << f1 << std::endl;
	// 		std::cout << b2 << std::endl;

	// 		b2.signForm(f1);
	// 		std::cout << f1 << std::endl;
	// 	} catch (std::exception &e) {
	// 		std::cout << BRED << e.what() << RESET << std::endl;
	// 	}

	// }
	{
		try
		{
			Form f1("42Form", 42, 42);
			Bureaucrat b2("b2", 150);

			std::cout << f1 << std::endl;
			std::cout << b2 << std::endl;
			b2.signForm(f1);

		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
    return EXIT_SUCCESS;
}