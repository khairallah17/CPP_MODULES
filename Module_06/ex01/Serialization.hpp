#include <iostream>

struct Data {
    int med;
};

class Serialization {

    private:
        Serialization();
        ~Serialization();
        Serialization(const Serialization &serialize);
        Serialization &operator=(const Serialization &serialize);

    public:
        static uintptr_t   serialize(Data *ptr);
        static Data        *deserialize(uintptr_t raw);

};