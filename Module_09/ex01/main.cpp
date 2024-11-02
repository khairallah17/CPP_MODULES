#include "RPN.hpp"
#include <exception>

int main(int ac, char **av) {

    if (ac != 2) {
        std::cerr << "Error: invalid params" << std::endl;
        return 1;
    }

    try {
        RPN(std::string(av[1]));
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}