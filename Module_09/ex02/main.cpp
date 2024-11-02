#include "PmergeMe.hpp"
#include <deque>
#include <exception>
#include <sstream>
#include <stdexcept>

int main(int ac, char **av) {

    try {

        if (ac < 2) {
            std::cerr << "Error: invalid mumber of arguments" << std::endl;
            return 1;
        }


        std::string input;
        int i = 1;
        for (; i < ac - 1 ; i++) {
            input += av[i];
            input += " ";
        }
        input += av[i];

        PmergeMe PmergeMe(input);
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;

}