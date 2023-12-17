/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:55:15 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:04:02 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << PURPLE << "Dog constructor called" << RESET << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void) {
    std::cout << PURPLE << "Dog destructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
    std::cout << GRN << "Dog copy assignemet operator" << RESET << std::endl;
    (void)dog;
    return (*this);
}

Dog::Dog(const Dog& dog) {
    std::cout << PURPLE << "Dog copy constructor called" << RESET << std::endl;
    *this = dog;
}

void Dog::makeSound(void) const {
    std::cout << GRN << "bark bark!" << RESET << std::endl;
}