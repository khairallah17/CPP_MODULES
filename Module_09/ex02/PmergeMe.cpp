#include "PmergeMe.hpp"
#include <deque>
#include <exception>
#include <stdexcept>
#include <sys/_types/_clock_t.h>
#include <utility>
#include <vector>
#include <sstream>


PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

template<typename C>
void    PmergeMe::print(C &c) {

    typename C::iterator start = c.begin();
    typename C::iterator end = c.end();

    while(start != end) {
        std::cout << *start << " ";
        start++;
    }
    std::cout << std::endl;

}

PmergeMe::PmergeMe(std::string &input) {
    

    try {

        if (!input.size())
            throw std::logic_error("Error: empty params");

        int number;
        std::stringstream ss(input);

        while (ss >> number) {
            if (number < 0)
                throw std::logic_error("Error: negative number");
            vec.push_back(number);
            deq.push_back(number);
        }
        if (ss.fail() && !ss.eof())
            throw std::logic_error("Error: invalid number");


    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        exit(1);
    }

    std::cout << "Before: ";
    std::cout << input << std::endl;

    clock_t t = clock();
    std::vector<std::pair<int, int> > pairs_vec;
    std::vector<int> ttt = PmergeMe::fordJohnsonSort(this->vec, pairs_vec);
    t = clock() - t;

    clock_t t1 = clock();
    std::deque<std::pair<int, int> > pairs_deq;
    std::deque<int> ddd = PmergeMe::fordJohnsonSort(this->deq, pairs_deq);
    t1 = clock() - t1;

    std::cout << "After: ";
    PmergeMe::print(ttt);

	std::cout << "Time to process std::vector sorting " << ((double)t / 1000) << " ms" << std::endl;
	std::cout << "Time to process std::deque sorting " << ((double)t1 / 1000) << " ms" << std::endl;
}

void    PmergeMe::sortPairs(int &n1, int &n2) {
    if (n1 > n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }
}

template<typename T>
void PmergeMe::recursiveSort(T &vec0, int left, int right) {
    int i = left;
    int j = right;
    std::pair<int, int> pivot = vec0[(left + right) / 2];

    while (i <= j) {
        // Change to sort in ascending order
        while (vec0[i].first < pivot.first) {
            i++;
        }
        while (vec0[j].first > pivot.first) {
            j--;
        }
        if (i <= j) {
            std::swap(vec0[i], vec0[j]);
            i++;
            j--;
        }
    }

    if (left < j) {
        recursiveSort(vec0, left, j);
    }
    if (i < right) {
        recursiveSort(vec0, i, right);
    }
}



std::vector<int>    PmergeMe::generateJacobsthalSeq(int n) {

    std::vector<int> seq;
    seq.push_back(0);
    seq.push_back(1);

    for (int i = 2 ; i < n ; i++) {
        seq.push_back(seq[i - 1] + 2 * seq[i - 2]);
    }

    return seq;
}

bool compareByFirst(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.first < b.first;
}

template<typename T>
void PmergeMe::recursiveSortIntegers(T &vec0, int left, int right) {
    if (left < right) {
        int i = left;
        int j = right;
        int pivot = vec0[(left + right) / 2];

        while (i <= j) {
            // Change comparison operators to sort in ascending order
            while (vec0[i] < pivot) {
                i++;
            }
            while (vec0[j] > pivot) {
                j--;
            }
            if (i <= j) {
                std::swap(vec0[i], vec0[j]);
                i++;
                j--;
            }
        }

        if (left < j) {
            recursiveSortIntegers(vec0, left, j);
        }
        if (i < right) {
            recursiveSortIntegers(vec0, i, right);
        }
    }
}


template<typename C>
void PmergeMe::jacobsthalMergeInsertion(C &main,C &target) {
    std::vector<int> seq = generateJacobsthalSeq(target.size());

    for (unsigned int i = 0; i < target.size(); i++) {
        unsigned int index = seq[i];

        if (index < main.size()) {
            main.insert(main.begin() + index, target[i]);
        } else {
            main.push_back(target[i]);
        }

        recursiveSortIntegers(main, 0, main.size() - 1);
    }

}

template<typename C, typename S>
C    PmergeMe::fordJohnsonSort(C &container, S &pairs) {

    for (unsigned int i = 0 ; i < container.size() ; i+=2) {
        if (i + 1 < container.size()) {
            PmergeMe::sortPairs(container[i], container[i + 1]);
            pairs.push_back(std::make_pair(container[i], container[i+1]));
        } else {
            pairs.push_back(std::make_pair(container[i], -1));
        }
    }

    recursiveSort(pairs, 0, pairs.size() - 1);


    C main;
    C target;

    for (unsigned int i = 0 ; i < pairs.size() ; i++) {
        main.push_back(pairs[i].first);
        if (pairs[i].second != -1)
            target.push_back(pairs[i].second);
    }

    PmergeMe::jacobsthalMergeInsertion(main, target);

    return main;

}