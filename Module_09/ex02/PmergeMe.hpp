#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {

    private:
        std::vector<int> vec;
        std::deque<int> deq;

        void    sortPairs(int &n1, int &n2);
        void    fordJohnsonSort();
        void    jacobsthalMergeInsertion(std::vector<int> &main,std::vector<int> &target);
        std::vector<int>    generateJacobsthalSeq(int n);

    public:
        PmergeMe();
        PmergeMe(std::vector<int> &v);
        ~PmergeMe();
        PmergeMe(const PmergeMe &merge);
        PmergeMe &operator=(const PmergeMe &merge);

};