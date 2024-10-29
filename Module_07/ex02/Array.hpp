#include <ios>
#include <iostream>
#include <new>

template<typename T>
class Array {

    private:
        T   *arr;
        unsigned int arr_size;

    public:
        Array();
        Array(unsigned int size);
        Array(const Array &copy);
        Array &operator=(const Array &copy);
        T   &operator[](unsigned int n);
        ~Array();
        unsigned int size() const;
};

template<typename T>
Array<T>::Array() {
    this->arr = NULL;
    arr_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int size) {
    this->arr = new T[size];
    arr_size = size;
}

template<typename T>
Array<T>::Array(const Array &copy){
    *this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy) {

    if (this != copy) {
        if (arr)
            delete [] arr;
        arr = new T[copy.size()]();
        for (int i = 0 ; i < copy.size() ; i++) {
            arr[i] = copy.arr[i];
        }
        arr_size = copy.arr_size;
    }

}

template<typename T>
T &Array<T>::operator[](unsigned int n) {
    if (n >= arr_size)
        throw std::exception();
    return (this->arr[n]);
}

template<typename T>
unsigned int    Array<T>::size() const {
    return this->arr_size;
}

template<typename T>
Array<T>::~Array() {
    if (arr)
        delete [] arr;
}