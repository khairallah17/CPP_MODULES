/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:37:40 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:06:01 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << PURPLE << "WrongCat constructor called" << RESET << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << PURPLE << "WrongCat desctuctor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat) {
    std::cout << "WrongCat copy assignement operator called" << RESET << std::endl;
    (void)wrongCat;
    return (*this);
}

WrongCat::WrongCat(const WrongCat& wrongCat) {
    std::cout << "WrongCat copy constructor called" << RESET << std::endl;
    *this = wrongCat;
}

void WrongCat::makeSound() const {
    std::cout << GRN << "WrongCat meow meow" << RESET << std::endl;
}