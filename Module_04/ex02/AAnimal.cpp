/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:03:19 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:16:26 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << PURPLE << "AAnimal constructor called" << RESET << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << PURPLE << "AAnimal destructor called" << RESET << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& animal) {
    std::cout << GRN << "AAnimal copy assignement operator called" << RESET << std::endl;
    this->type = animal.type;
    return (*this);
}

AAnimal::AAnimal(const AAnimal& animal) {
    std::cout << GRN << "AAnimal copy constructor called" << RESET << std::endl;
    *this = animal;
}

std::string AAnimal::getType() const {
    return (this->type);
}

void    AAnimal::setType(std::string type) {
    this->type = type;
}
