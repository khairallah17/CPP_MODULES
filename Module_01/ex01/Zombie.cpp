/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:52:11 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 12:00:08 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

Zombie::Zombie(std::string name): name(name) {}

Zombie::Zombie()
{
    std::cout << PURPLE << "Constructor has been called" << RESET << std::endl;
}

Zombie::~Zombie()
{
    std::cout << PURPLE << "Destructor has been called" << RESET << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void)
{
    return (this->name);
}