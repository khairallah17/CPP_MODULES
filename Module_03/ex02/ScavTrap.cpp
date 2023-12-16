/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:32:50 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 10:58:03 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BRED "\e[1;31m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"

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
    std::cout << GRN << "ScavTrap copy assignement operator called" << RESET << std::endl;
    this->damage = (trap.damage);
    this->energy = (trap.energy);
    this->name = (trap.name);
    this->points = (trap.points);
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& trap) {
    std::cout << GRN << "ScavTrap Copy Constructor called" << RESET << std::endl;
    this->name = trap.name;
    this->damage = trap.damage;
    this->energy = trap.energy;
    this->points = trap.points;
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
    if (this->points <= 0) {
        std::cout << BRED << "S7AYBI MAT" << std::endl;
        return ;
    }
    std::cout << GRN << "ScavTrap "<< this->name <<" is now in Gate keeper mode." << RESET << std::endl;
}