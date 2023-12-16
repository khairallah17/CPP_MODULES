/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:53:10 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 14:31:29 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void) {
    std::cout << PURPLE << "Animal Constructor called" << RESET << std::endl;
    this->setType("Animal");
}

Animal::~Animal(void) {
    std::cout << PURPLE << "Animal desctructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& animal) {
    std::cout << PURPLE << "Animal copy constructor called" << RESET << std::endl;
    this->setType(animal.type);
}

Animal& Animal::operator=(const Animal& animal) {
    std::cout << GRN << "Animal copy assignement operator called" << RESET << std::endl;
    this->type = animal.type;
    return (*this);
}

void    Animal::makeSound() const {
    std::cout << YEL << "animal sound" << std::endl;
}

std::string Animal::getType() const {
    return (this->type);
}

void    Animal::setType(std::string type) {
    this->type = type;
}