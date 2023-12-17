/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:57:17 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 09:52:34 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat: public Animal {
    
    public:
        Cat();
        ~Cat();
        Cat& operator=(const Cat& cat);
        Cat(const Cat& cat);
        void makeSound() const;

};