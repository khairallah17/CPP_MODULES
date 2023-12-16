/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:32:50 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:21:58 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"

ScavTrap::ScavTrap(void) {
    std::cout << PURPLE << "ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << PURPLE << "ScavTrap destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << PURPLE << "ScavTrap parametrized constructor called" << RESET << std::endl;
    this->name = (name);
    this->damage = (20);
    this->energy = (50);
    this->points = (100);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& trap) {
    this->damage = (trap.damage);
    this->energy = (trap.energy);
    this->name = (trap.name);
    this->points = (trap.points);
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& trap) {
    std::cout << BGRN << "ScavTrap Copy Constructor called" << RESET << std::endl;
    this->name = (trap.name);
}

void    ScavTrap::attack(const std::string& target) {
    if (this->points <= 0 || this->energy <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->energy = (this->energy - 1);
    std::cout << "ScavTrap " << this->name <<  " attacks " << target << ", causing " << this->damage <<" points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap "<< this->name <<" is now in Gate keeper mode." << std::endl;
}