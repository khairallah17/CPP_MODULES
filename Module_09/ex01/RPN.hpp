#include <exception>
#include <iostream>
#include <stack>

class RPN {

    private:
        std::stack<int> rpn;
        void    parseInput(std::string input);
        void    popAndDo(char sign);

    public:
        RPN();
        RPN(std::string input);
        ~RPN();
        RPN &operator=(const RPN &r);
        RPN(const RPN &r);

        class RPNError: public std::exception {
            public:
                const char *what() const throw();
        };

        class RPNZeroDivisionError: public std::exception {
            public:
                const char *what() const throw();
        };

};