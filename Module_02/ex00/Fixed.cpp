/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:27:55 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/10 16:00:25 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

Fixed::Fixed(): fixedPoint(0) {
    std::cout << PURPLE << "Default Constructor called" << RESET << std::endl;
}

Fixed::~Fixed() {
    std::cout << PURPLE << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& other): fixedPoint(other.fixedPoint) {
    std::cout << PURPLE << "Copy constructor called" << RESET << std::endl;
}

Fixed &Fixed::operator=(const Fixed& other) {
    std::cout << PURPLE << "Copy assignment operator called" << RESET << std::endl;
    this->fixedPoint = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawits(int const raw) {
    this->fixedPoint = raw;
}