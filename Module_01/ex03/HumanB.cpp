/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:19 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 16:01:57 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) 
{
    std::cout << PURPLE << "constructor has been called" << RESET << std::endl;
}

HumanB::~HumanB()
{
    std::cout << PURPLE << "desctructor has been called" << RESET << std::endl;
}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

std::string HumanB::getName(void)
{
    return (this->name);
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << this->getName() << " attacks with their " << (this->weapon == NULL ? "NULL" : this->weapon->getType()) << std::endl;
}