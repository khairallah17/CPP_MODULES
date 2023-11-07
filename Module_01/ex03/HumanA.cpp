/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:25 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 15:50:39 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon, std::string name): weapon(weapon), name(name)
{
    std::cout << PURPLE << "constructor has been called" << RESET << std::endl;
}

HumanA::~HumanA()
{
    std::cout << PURPLE << "desctructor has been called" << RESET << std::endl;
}

std::string    HumanA::getName(void)
{
    return (this->name);
}

void    HumanA::attack()
{
    std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl;
}