#include "RPN.hpp"
#include <cctype>
#include <cstring>

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

    for (unsigned int i = 0 ; i < input.size() ; i++) {
        if (std::isdigit(input[i]))
            rpn.push(input[i] - '0');
        else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
            if (rpn.size() < 2)
                throw RPNError();
            RPN::popAndDo(input[i]);
        }
        else if (input[i] == ' ')
            continue;
        else
            throw RPN::RPNError();
    }

    if (rpn.size() != 1)
        throw RPN::RPNError();
    std::cout << rpn.top() << std::endl;
}