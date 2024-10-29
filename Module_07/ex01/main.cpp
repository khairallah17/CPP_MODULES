#include "Iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void mul(T &a)
{
	a *= 2;
}

int main()
{
    int arr[10];

    for (int i = 0 ; i < 10 ; i++) {
        arr[i] = i;
    }

    std::cout << "============ INITIAL VALUES ============" << std::endl;
    for (int i = 0 ; i < 10 ; i++) {
        std::cout << arr[i] << std::endl;
    }

    iter(arr, 10, mul);

    std::cout << "============ AFTER ITER ============" << std::endl;
    for (int i = 0 ; i < 10 ; i++) {
        std::cout << arr[i] << std::endl;
    }

}