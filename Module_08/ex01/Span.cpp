#include "Span.hpp"
#include <algorithm>
#include <valarray>

Span::Span() {}
Span::~Span() {}

Span::Span(const Span &span) {
    *this = span;
}

Span &Span::operator=(const Span &span) {
    return  *this;
}

void    Span::addNumber(int n) {

    int size = vec.size();

    if (size >= N)
        throw std::exception();

    vec.push_back(n);

}

int    Span::longestSpan() const {

    if (vec.size() < 2)
        throw std::exception();

    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());

    return max - min;

}

int     Span::shortestSpan() const {

    if (vec.size() < 2)
        throw std::exception();

    std::vector<int> diffs;

    std::sort(vec.begin(), vec.end());

    for (int i = 0 ; i < vec.size() - 1 ; i++)
        diffs.push_back(vec[i + 1] - vec[i]);

    std::sort(diffs.begin(), diffs.end());

    return diffs[0];

}