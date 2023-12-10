/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:51:07 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/10 15:56:34 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {

    private:
        int              fixedPoint;
        static const int fractionalBits = 8;
    
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed& other);
        int     getRawBits(void) const;
        void    setRawits(int const raw);
};