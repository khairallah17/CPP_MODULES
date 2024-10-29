#include <iostream>

template<typename T>
void    swap(T &n1, T &n2) {
    T temp = n1;
    n1 = n2;
    n2 = temp;
}

template<typename T>
T   min(T &n1, T &n2) {
    return (n1 > n2 ? n2 : n1);
}

template<typename T>
T   max(T &n1, T &n2) {
    return (n1 < n2 ? n2 : n1);
}