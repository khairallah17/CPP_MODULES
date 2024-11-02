#include "PmergeMe.hpp"
#include <utility>
#include <vector>

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(std::vector<int> &v) {
    this->vec = v;
    PmergeMe::fordJohnsonSort();
}

void    PmergeMe::sortPairs(int &n1, int &n2) {
    if (n1 > n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }
}

void recursiveSort(std::vector<std::pair<int, int> > &vec0, int left, int right) {
    int i = left;
    int j = right;
    std::pair<int, int> pivot = vec0[(left + right) / 2];

    while (i <= j) {
        while (vec0[i].first > pivot.first) {
            i++;
        }
        while (vec0[j].first < pivot.first) {
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
    return a.first > b.first;
}

void recursiveSortIntegers(std::vector<int> &vec0, int left, int right) {
    if (left < right) {
        int i = left;
        int j = right;
        int pivot = vec0[(left + right) / 2];

        while (i <= j) {
            while (vec0[i] > pivot) {
                i++;
            }
            while (vec0[j] < pivot) {
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


void PmergeMe::jacobsthalMergeInsertion(std::vector<int> &main, std::vector<int> &target) {
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

    for (unsigned int i = 0; i < main.size(); i++)
        std::cout << main[i] << " ";
    std::cout << std::endl;
}


void    PmergeMe::fordJohnsonSort() {

    std::vector<std::pair<int, int> > pairs;
    for (unsigned int i = 0 ; i < vec.size() ; i+=2) {
        if (i + 1 < vec.size()) {
            PmergeMe::sortPairs(vec[i], vec[i + 1]);
            pairs.push_back(std::make_pair(vec[i], vec[i+1]));
        } else {
            pairs.push_back(std::make_pair(vec[i], -1));
        }
    }

    recursiveSort(pairs, 0, pairs.size() - 1);


    std::vector<int> main;
    std::vector<int> target;

    for (unsigned int i = 0 ; i < pairs.size() ; i++) {
        main.push_back(pairs[i].first);
        if (pairs[i].second != -1)
            target.push_back(pairs[i].second);
    }

    // for (unsigned int i = 0 ; i < main.size() ; i++) {
    //     std::cout << main[i] << " ";
    // }
    // std::cout << std::endl;
    // for (unsigned int i = 0 ; i < target.size() ; i++) {
    //     std::cout << target[i] << " ";
    // }

    PmergeMe::jacobsthalMergeInsertion(main, target);

}