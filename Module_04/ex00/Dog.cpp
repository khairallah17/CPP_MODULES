/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:55:15 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 13:36:49 by mkhairal         ###   ########.fr       */
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

void Dog::makeSound(void) const {
    std::cout << GRN << "bark bark!" << RESET << std::endl;
}