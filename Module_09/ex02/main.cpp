#include "PmergeMe.hpp"
#include <exception>
#include <sstream>
#include <stdexcept>

int main(int ac, char **av) {

    try {

        if (ac < 2) {
            std::cerr << "Error: invalid mumber of arguments" << std::endl;
            return 1;
        }

        std::vector<int> vec;

        for (int i = 1 ; av[i] ; i++) {
            std::stringstream ss(av[i]);
            int number;
            ss >> number;
            
            if (number < 0 || ss.fail() || !ss.eof())
                throw std::logic_error("Error: invalid number");

            vec.push_back(number);
        }

        PmergeMe PmergeMe(vec);
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;

}