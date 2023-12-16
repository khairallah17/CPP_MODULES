/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:55:15 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:36:42 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << PURPLE << "Dog constructor called" << RESET << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(void) {
    std::cout << PURPLE << "Dog destructor called" << RESET << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog& dog) {
    std::cout << GRN << "Dog copy assignement operator called" << RESET << std::endl;
    this->type = dog.getType();
    *this->brain = *dog.brain;
    return (*this);
}

Dog::Dog(const Dog& dog) {
    std::cout << PURPLE << "Dog copy constructor called" << RESET << std::endl;
    this->brain = new Brain();
    *this = dog;
}

void Dog::makeSound(void) const {
    std::cout << GRN << "bark bark!" << RESET << std::endl;
}