/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:57:40 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:30:18 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << PURPLE << "Cat constructor called" << RESET << std::endl;
    this->setType("Cat");
    this->brain = new Brain();
}

Cat::~Cat(void) {
    std::cout << PURPLE << "Cat Destructor called" << RESET << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat& cat) {
    std::cout << PURPLE << "Cat copy constructor called" << RESET << std::endl;
    this->brain = new Brain;
    *this = cat;
}

Cat& Cat::operator=(const Cat& cat) {
    std::cout << GRN << "Cat copy assignement operator called" << RESET << std::endl;
    this->type = cat.type;
    *this->brain = *cat.brain;
    return (*this);
}

void Cat::makeSound() const{
    std::cout << GRN << "meow meow" << std::endl;
}