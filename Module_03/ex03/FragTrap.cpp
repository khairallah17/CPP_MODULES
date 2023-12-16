/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:59:23 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:21:29 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"

FragTrap::FragTrap(void) {
    std::cout << PURPLE << "FragTrap constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << PURPLE << "FragTrap destructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) {
    std::cout << PURPLE << "FragTrap parametrized constructor called" << RESET << std::endl;
    this->name = (name);
    this->damage = (30);
    this->energy = (100);
    this->points = (100);
}

FragTrap& FragTrap::operator=(const FragTrap& trap) {
    this->damage = (trap.damage);
    this->energy = (trap.energy);
    this->name = (trap.name);
    this->points = (trap.points);
    return (*this);
}

FragTrap::FragTrap(const FragTrap& trap) {
    std::cout << BGRN << "FragTrap Copy Constructor called" << RESET << std::endl;
    this->name = (trap.name);
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->name << " wants to high five" << std::endl;
}