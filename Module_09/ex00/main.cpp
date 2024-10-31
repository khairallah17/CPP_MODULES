#include "BitcoinExchange.hpp"
#include <stdexcept>

int main (int ac, char **av) {


    try {

        if (ac != 2)
            throw std::logic_error("Error: no file found");

        BitcoinExchange(std::string(av[1]));

    } catch (std::logic_error &e) {
        std::cerr << e.what() << std::endl;
    }

}