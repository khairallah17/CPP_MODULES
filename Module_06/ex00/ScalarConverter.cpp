#include "ScalarConverter.hpp"
#include <cctype>
#include <iomanip>

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &convert) {
    *this = convert;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &convert) {
    (void)convert;
    return (*this); 
}

void pseudo_literals_checker (std::string str) {

    if (str == "nan" || str == "+inf" || str == "-inf") {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        exit(0);
    } else if (str == "nanf" || str == "+inff" || str == "-inff") {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str.erase(str.size() - 1) << std::endl;
        exit(0);
    }


}

int value_checker(std::string s) {

    int i = 0;

    const char *str = s.c_str();

    if (((str[i] == '-' || str[i] == '+') && s.length() == 1) || (s.length() == 1 && std::isalpha(str[i])))
        return (2);
    else if (!std::isdigit(str[i]) && s.length() > 1)
        return (0);
    if (str[i] == '-' || str[i] == '+' || std::isdigit(str[i])) {
        i++;
        while (str[i] && std::isdigit(str[i]))
            i++;
        if (str[i] == '.' )
            i++;
        while (str[i] && std::isdigit(str[i]))
            i++;
        if (str[i] && str[i] == 'f')
            i++;
        return 1;
    } else if (s.length() == 1){
        return 2;
    }
    return 0;

}

int printable (int ascii) {
    return ascii >= 32 && ascii <= 126;
}

void parse_value(std::string &str, std::string type) { 

    int check = value_checker(str);

    if(check == 1) {

        int i = std::atoi(str.c_str());
        char value = static_cast<char>(i);

        if (type == "char" && printable(i))
            std::cout << "char: " << value << std::endl;
        else if (type == "char")
            std::cout << "char: " <<  "Non displayable" << std::endl;
        if (type == "int")
            std::cout << "int: " << i << std::endl;
        else if (type == "float")
            std::cout << "float: " <<  i << ".0f" << std::endl;
        else if (type == "double")
            std::cout << "double: " << i << ".0" << std::endl;  
    } else if (check == 2) {

        int i = static_cast<int>(str[0]);

        if (type == "char" && printable(i))
            std::cout << "char: " << "'" << str[0] << "'" << std::endl;
        if (type == "int")
            std::cout << "int: " << i  << std::endl;
        else if (type == "float")
            std::cout << "float: " <<  i << ".0f" << std::endl;
        else if (type == "double")
            std::cout << "double: " << i << ".0" << std::endl;  
    } else {
        std::cout << "Invalid conversion" << std::endl;
        exit(0);
    }
}

void    print_value(std::string &toConvert) {

    parse_value(toConvert, "char");
    parse_value(toConvert, "int");
    parse_value(toConvert, "float");
    parse_value(toConvert, "double");

}

void    ScalarConverter::converter(std::string toConvert) {
    pseudo_literals_checker(toConvert);
    print_value(toConvert);
}