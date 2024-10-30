#include <iostream>
#include "Span.hpp"

int main() {
    try {
        // Initialize Span with a maximum capacity of 5 elements
        Span span(5);
        
        // Add numbers to the span
        span.addNumber(5);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);

        // Display shortest and longest spans
        std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << span.longestSpan() << std::endl;

        // Attempt to add another number should throw an exception
        std::cout << "Adding an extra number..." << std::endl;
        span.addNumber(19);  // This should throw an exception

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Test with a large number of elements
    try {
        unsigned int largeN = 10000;
        Span largeSpan(largeN);

        // Fill with 10,000 numbers
        for (unsigned int i = 0; i < largeN; i++) {
            largeSpan.addNumber(i);
        }

        std::cout << "Shortest Span in large Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span in large Span: " << largeSpan.longestSpan() << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Edge cases: Not enough numbers to calculate spans
    try {
        Span emptySpan(5);
        std::cout << "Attempting to calculate spans with no elements..." << std::endl;
        emptySpan.shortestSpan();  // Should throw an exception

    } catch (const std::exception &e) {
        std::cerr << "Exception caught (no elements): " << e.what() << std::endl;
    }

    try {
        Span oneElementSpan(5);
        oneElementSpan.addNumber(42);
        std::cout << "Attempting to calculate spans with only one element..." << std::endl;
        oneElementSpan.shortestSpan();  // Should throw an exception

    } catch (const std::exception &e) {
        std::cerr << "Exception caught (one element): " << e.what() << std::endl;
    }

    return 0;
}
