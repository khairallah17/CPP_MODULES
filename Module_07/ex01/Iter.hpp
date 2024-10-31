template<typename T, typename S>
void    iter(T *ptr, int size, S function) {

    if (!ptr)
        return;
    for (int i = 0 ; i < size ; i++) {
        function(ptr[i]);
    }

}