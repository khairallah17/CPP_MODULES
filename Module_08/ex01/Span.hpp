#include <iostream>
#include <vector>

class Span{

    private:
        std::vector<int> vec;
        unsigned int N;

    public:
        Span();
        ~Span();
        Span(const Span &span);
        Span &operator=(const Span &span);
        Span(unsigned int n);

        template<typename T> void    addNumber(T start, T end);
        void    addNumber(int n);
        int    shortestSpan();
        int    longestSpan();

};

template<typename T>
void    Span::addNumber(T start, T end) {

    unsigned int n;

    n = 0;
    while (start != end) {
        if (n >= N) {
            std::cout << "n ==> " << n << " N ==> " << N << std::endl;
            throw std::exception();
        }
        vec.push_back(start);
        n++;
        start++;
    }

}
