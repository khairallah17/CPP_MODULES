#include <iostream>

template<typename T, typename S>
void    iter(T *ptr, int size, void func(S &)) {

    if (!ptr)
        return;
    for (int i = 0 ; i < size ; i++) {
        func(ptr[i]);
    }

}