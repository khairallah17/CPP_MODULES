#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {

    private:
        std::vector<int> vec;
        std::deque<int> deq;

        void    sortPairs(int &n1, int &n2);
        template<typename C, typename S>
        C    fordJohnsonSort(C &container, S &pairs);
        template<typename C>
        void    jacobsthalMergeInsertion(C &main,C &target);
        std::vector<int>    generateJacobsthalSeq(int n);
        template<typename T>
        void recursiveSort(T &vec0, int left, int right);
        template<typename T>
        void recursiveSortIntegers(T &vec0, int left, int right);
        void    parse();
        template<typename C>
        void    print(C &c);

    public:
        PmergeMe();
        PmergeMe(std::string &input);
        ~PmergeMe();
        PmergeMe(const PmergeMe &merge);
        PmergeMe &operator=(const PmergeMe &merge);

};