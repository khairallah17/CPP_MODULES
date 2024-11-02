#include "RPN.hpp"
#include <cctype>
#include <cstring>
#include <sstream>
#include <stdexcept>

RPN::RPN() {}
RPN::~RPN() {}

RPN::RPN(std::string input) {
    RPN::parseInput(input);
}

const char *RPN::RPNError::what() const throw() {
    return "Error";
}

const char  *RPN::RPNZeroDivisionError::what() const throw() {
    return "Error: Zero division";
}

void    RPN::popAndDo(char sign) {

    int n1 = rpn.top();
    rpn.pop();
    int n2 = rpn.top();
    rpn.pop();

    switch (sign) {
        case '+': rpn.push(n1 + n2); break;
        case '-': rpn.push(n2 - n1); break;
        case '*': rpn.push(n1 * n2); break;
        case '/': if (n1 == 0) 
                    throw RPN::RPNZeroDivisionError();
                rpn.push(n2 / n1); break;
    }

}

void    RPN::parseInput(std::string input) {

    std::stringstream ss(input);
    std::string number;

    while (ss >> number) {

        if (number.length() > 1)
            throw std::logic_error("Error: Invalid Number");
        char c = number[0];
        if (std::isdigit(c))
            rpn.push(c - '0');
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (rpn.size() < 2)
                throw RPNError();
            RPN::popAndDo(c);
        }
        else if (c == ' ')
            continue;
        else
            throw RPN::RPNError();

    }

    if (rpn.size() != 1)
        throw RPN::RPNError();
    std::cout << rpn.top() << std::endl;
}