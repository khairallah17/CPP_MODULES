#pragma once
#include <iostream>

template<typename T>
int easyfind(T &arr, int n) {

    typename T::iterator it;

    it = std::find(arr.begin(), arr.end(), n);
    if (it != arr.end())
        return *it;
    throw std::exception();
}