/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:57:40 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 14:33:50 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << PURPLE << "Cat constructor called" << RESET << std::endl;
    this->setType("Cat");
}

Cat::~Cat(void) {
    std::cout << PURPLE << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const{
    std::cout << GRN << "meow meow" << std::endl;
}