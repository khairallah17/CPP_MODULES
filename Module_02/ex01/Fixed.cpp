/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:27:55 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/15 11:34:14 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

Fixed::Fixed(): fixedPoint(0) {
    std::cout << PURPLE << "Default Constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int number): fixedPoint(number << fractionalBits) {
    std::cout << PURPLE << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float number): fixedPoint(roundf(number * (1 << fractionalBits))) {
    std::cout << PURPLE << "Float constructor called" << RESET << std::endl;
}

Fixed::~Fixed() {
    std::cout << PURPLE << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << PURPLE << "Copy constructor called" << RESET << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed& other) {
    std::cout << PURPLE << "Copy assignment operator called" << RESET << std::endl;
    this->fixedPoint = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    return (this->fixedPoint);
}

void Fixed::setRawits(int const raw) {
    this->fixedPoint = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)this->getRawBits() / (1 << this->fractionalBits));
}

int     Fixed::toInt(void) const {
    return (this->getRawBits() >> this->fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed &number) {
    os << number.toFloat();
    return os;
}