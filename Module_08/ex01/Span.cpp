#include "Span.hpp"
#include <algorithm>
#include <valarray>
#include <iostream>

Span::Span() {
    N = 0;
}

Span::Span(unsigned int n) {
    N = n;
}

Span::~Span() {}

Span::Span(const Span &span) {
    *this = span;
}

Span &Span::operator=(const Span &span) {
    if (this != &span) {
        N = span.N;
        vec = span.vec;
    }
    return *this;
}

void    Span::addNumber(int n) {

    unsigned int size = vec.size();

    if (size >= N)
        throw std::exception();

    vec.push_back(n);

}

int    Span::longestSpan() {

    if (vec.size() < 2)
        throw std::exception();

    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());

    return max - min;

}

int     Span::shortestSpan() {

    if (vec.size() < 2)
        throw std::exception();

    std::vector<int> diffs;

    std::sort(vec.begin(), vec.end());

    for (unsigned int i = 0 ; i < vec.size() - 1 ; i++)
        diffs.push_back(vec[i + 1] - vec[i]);

    std::sort(diffs.begin(), diffs.end());

    return diffs[0];

}