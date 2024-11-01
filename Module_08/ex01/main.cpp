#include <iostream>
#include "Span.hpp"

int main() {
    try {
        Span span(5);
        
        span.addNumber(5);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);

        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;

        std::cout << "Adding an extra number..." << std::endl;
        span.addNumber(19);

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        unsigned int largeN = 10000;
        Span largeSpan(largeN);

        for (unsigned int i = 0; i < largeN; i++) {
            largeSpan.addNumber(i);
        }

        std::cout << "Shortest Span in large Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span in large Span: " << largeSpan.longestSpan() << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Span emptySpan(5);
        std::cout << "Attempting to calculate spans with no elements..." << std::endl;
        emptySpan.shortestSpan();

    } catch (const std::exception &e) {
        std::cerr << "Exception caught (no elements): " << e.what() << std::endl;
    }

    try {
        Span oneElementSpan(5);
        oneElementSpan.addNumber(42);
        std::cout << "Attempting to calculate spans with only one element..." << std::endl;
        oneElementSpan.shortestSpan();

    } catch (const std::exception &e) {
        std::cerr << "Exception caught (one element): " << e.what() << std::endl;
    }

    try {

        Span span(5);

        span.addNumber(5, 10);

        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortestSpan() << std::endl;

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
