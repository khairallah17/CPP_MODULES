/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:54:53 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 09:55:14 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog: public Animal {

    public:
        Dog(void);
        ~Dog(void);
        Dog(const Dog& dog);
        Dog& operator=(const Dog& dog);
        void makeSound(void) const;

};