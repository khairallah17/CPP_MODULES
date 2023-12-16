/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:54:53 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:58:31 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {

    private:
        Brain* brain;

    public: 
        Dog(void);
        ~Dog(void);
        Dog& operator=(const Dog& dog);
        Dog(const Dog& dog);
        void makeSound(void) const;

};