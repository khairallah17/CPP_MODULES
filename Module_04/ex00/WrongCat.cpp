/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:37:40 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 14:58:53 by mkhairal         ###   ########.fr       */
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

void WrongCat::makeSound() {
    std::cout << GRN << "WrongCat meow meow" << RESET << std::endl;
}