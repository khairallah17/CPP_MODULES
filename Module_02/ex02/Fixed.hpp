/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:51:07 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/10 17:45:46 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>

class Fixed {

    private:
        int              fixedPoint;
        static const int fractionalBits = 8;
    
    public:
        Fixed(void);
        Fixed(const int number);
        Fixed(const float number);
        ~Fixed(void);
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed& other);
        
        int     getRawBits(void) const;
        void    setRawits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
        static Fixed& min(const Fixed& n1, const Fixed& n2);
        static Fixed& min(Fixed& n1, Fixed& n2);
        static Fixed& max(const Fixed& n1, const Fixed& n2);
        static Fixed& max(Fixed& n1, Fixed& n2);

        Fixed  operator+(const Fixed& n1);
        Fixed  operator-(const Fixed& n1);
        Fixed  operator*(const Fixed& n1);
        Fixed  operator/(const Fixed& n1);
        
        bool  operator>(const Fixed& n1);
        bool  operator<(const Fixed& n1);
        bool  operator>=(const Fixed& n1);
        bool  operator<=(const Fixed& n1);
        bool  operator==(const Fixed& n1);
        bool  operator!=(const Fixed& n1);
        
        Fixed&  operator++();
        Fixed&  operator--();
        Fixed&  operator++(int);
        Fixed&  operator--(int);
};

std::ostream& operator<<(std::ostream& os, const Fixed &number);