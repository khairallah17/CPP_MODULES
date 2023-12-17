/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:45:43 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 09:47:33 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << PURPLE << "wrongAnimal constructor called" << RESET << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
    std::cout << PURPLE << "WrongAnimal desctructor called" << RESET << std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& animal) {
    std::cout << GRN << "WrongAnimal Copy assignement operator called" << RESET << std::endl;
    this->type = animal.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal): type(animal.type) {
    std::cout << PURPLE << "WrongAnimal copy constructor called" << RESET << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}

void WrongAnimal::makeSound() const {
    std::cout << GRN << "WrongAnimal sound" << RESET << std::endl;
}