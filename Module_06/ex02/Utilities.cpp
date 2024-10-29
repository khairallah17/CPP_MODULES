#include "Utilities.hpp"
#include <exception>
#include <unistd.h>

Base    *generate() {
    
    int number = std::rand() % 3;

    if (number == 0) {
        return new A();
    } else if (number == 1) {
        return new B();
    }

    return new C();

}

void    identify(Base *p) {

    if (dynamic_cast<A*>(p))
        std::cout << "identify(Base *p) ~ A class" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "identify(Base *p) ~ B class" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "identify(Base *p) ~ C class" << std::endl;

}

void    identify(Base &p) {

    Base base;

    try {

        base = dynamic_cast<A&>(p);
        std::cout << "indentify (Base &p) ~ A class" << std::endl;
        return ;

    } catch (std::exception &e) {}

    try {

        base = dynamic_cast<B&>(p);
        std::cout << "indentify (Base &p) ~ B class" << std::endl;
        return ;

    } catch (std::exception &e) {}

    try {

        base = dynamic_cast<C&>(p);
        std::cout << "indentify (Base &p) ~ C class" << std::endl;
        return ;

    } catch (std::exception &e) {}

}