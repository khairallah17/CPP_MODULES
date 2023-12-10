/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:51:07 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/10 17:12:41 by mkhairal         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& os, const Fixed &number);