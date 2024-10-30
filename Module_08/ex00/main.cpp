#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(15);
    lst.push_back(25);
    lst.push_back(35);
    lst.push_back(45);

    try {
        std::cout << "Searching in vector..." << std::endl;
        int foundInVec = easyfind(vec, 30);
        std::cout << "Found in vector: " << foundInVec << std::endl;

        std::cout << "Searching in list..." << std::endl;
        int foundInList = easyfind(lst, 25);
        std::cout << "Found in list: " << foundInList << std::endl;

        std::cout << "Searching for a missing value in vector..." << std::endl;
        int notFoundInVec = easyfind(vec, 100); 
        std::cout << "Found in vector: " << notFoundInVec << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
