#include "Base.hpp"
#include "Utilities.hpp"

int main(void)
{
    Base *base[10];

    for (int i = 0 ; i < 10 ; i++) {
        base[i] = generate();
    }

    std::cout << "POINTERS" << std::endl;

    for (int i = 0 ; i < 10 ; i++) {
        identify(base[i]);
    }

    std::cout << "REFERENCES" << std::endl;

    for (int i = 0 ; i < 10 ; i++) {
        identify(*base[i]);
    }

}
