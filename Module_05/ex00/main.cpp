#include "Bureaucrat.hpp"

int main ()  {
    
    try {

        Bureaucrat br;

        std::cout << br << std::endl;

        br.increment();
        br.increment();
        br.increment();
        br.decrement();
        br.decrement();
        br.decrement();
        br.decrement();

    } catch (std::exception &e) {
        std::cerr << BRED << e.what() << RESET << std::endl;
    }

    return EXIT_SUCCESS;
}