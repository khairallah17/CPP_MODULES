#include <iostream>

template<typename T>
void    iter(T *ptr, int size, void func(T &)) {

    if (!ptr)
        return;
    for (int i = 0 ; i < size ; i++) {
        func(ptr[i]);
    }

}