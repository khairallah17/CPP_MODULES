/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:57:17 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:10:48 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    
    private:
        Brain *brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        void makeSound() const;

};