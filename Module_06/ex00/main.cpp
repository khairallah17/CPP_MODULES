#include "ScalarConverter.hpp"
#include <iostream>

int main(int ac, char *av[]){

    if (ac == 2)
        ScalarConverter::converter(av[1]);
    else
        std::cout << "./covert <string_to_convert>" << std::endl;

}