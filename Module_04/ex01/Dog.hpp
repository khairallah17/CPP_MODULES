/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:54:53 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:18:06 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

    private:
        Brain* brain;

    public: 
        Dog(void);
        ~Dog(void);
        Dog& operator=(const Dog& dog);
        Dog(const Dog& dog);
        void makeSound(void) const;

};