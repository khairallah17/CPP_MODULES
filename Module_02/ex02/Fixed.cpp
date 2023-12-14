/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:27:55 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/14 14:57:39 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

// MIN MAX DEFIN

Fixed::Fixed(): fixedPoint(0) {
}

Fixed::Fixed(const int number): fixedPoint(number << fractionalBits) {
}

Fixed::Fixed(const float number): fixedPoint(roundf(number * (1 << fractionalBits))) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& other): fixedPoint(other.fixedPoint) {
}

Fixed &Fixed::operator=(const Fixed& other) {
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
    return ((float)fixedPoint / (1 << fractionalBits));
}

int     Fixed::toInt(void) const {
    return (this->getRawBits() >> this->fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed &number) {
    os << number.toFloat();
    return os;
}

Fixed Fixed::operator+(const Fixed& n1) {
    return (Fixed(this->fixedPoint + n1.fixedPoint).toFloat());
}

Fixed  Fixed::operator-(const Fixed& n1) {
    return (Fixed(this->fixedPoint - n1.fixedPoint).toFloat());
}

Fixed  Fixed::operator*(const Fixed& n1) {
    return (Fixed(this->toFloat() * n1.toFloat()));
}

Fixed  Fixed::operator/(const Fixed& n1) {
    return (Fixed(this->toFloat() / n1.toFloat()));
}

bool  Fixed::operator>(const Fixed& n1) {
    return (this->fixedPoint > n1.fixedPoint);
}

bool  Fixed::operator<(const Fixed& n1) {
    return (this->fixedPoint < n1.fixedPoint);
}

bool  Fixed::operator>=(const Fixed& n1) {
    return (this->fixedPoint >= n1.fixedPoint);
}

bool  Fixed::operator<=(const Fixed& n1) {
    return (this->fixedPoint <= n1.fixedPoint);
}

bool  Fixed::operator==(const Fixed& n1) {
    return (this->fixedPoint == n1.fixedPoint);
}

bool  Fixed::operator!=(const Fixed& n1) {
    return (this->fixedPoint != n1.fixedPoint);
}

Fixed&  Fixed::operator++() {
    this->fixedPoint++;
    return (*this);
}

Fixed&  Fixed::operator--() {
    this->fixedPoint--;
    return (*this);
}

Fixed  Fixed::operator++(int) {
    Fixed tmp(this->toFloat());
    this->fixedPoint++;
    return (tmp);
}

Fixed  Fixed::operator--(int) {
    Fixed tmp(this->toFloat());
    this->fixedPoint--;
    return (tmp);
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2) {
    return (n1.getRawBits() > n2.getRawBits() ? n2 : n1);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2) {
    return (n1.getRawBits() > n2.getRawBits() ? n1 : n2);
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2) {
    return (n1.getRawBits() > n2.getRawBits() ? n2 : n1);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2) {
    return (n1.getRawBits() > n2.getRawBits() ? n1 : n2);
}