/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:11 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 15:54:20 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
    std::cout << BRED << "weapon constructor has been called" << RESET << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << BRED << "weapon desctruoctor has been called" << RESET << std::endl;
}

std::string&    Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string newOne)
{
    this->type = newOne;
}