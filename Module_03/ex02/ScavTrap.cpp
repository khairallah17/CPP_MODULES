/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:32:50 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/14 22:50:17 by mkhairal         ###   ########.fr       */
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
    this->setName(name);
    this->setDamage(20);
    this->setEnergy(50);
    this->setPoints(100);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& trap) {
    this->setDamage(trap.getDamage());
    this->setEnergy(trap.getEnergy());
    this->setName(trap.getName());
    this->setPoints(trap.getPoints());
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& trap) {
    std::cout << BGRN << "ScavTrap Copy Constructor called" << RESET << std::endl;
    this->setName(trap.getName());
}

void    ScavTrap::attack(const std::string& target) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->setEnergy(this->getEnergy() - 1);
    std::cout << "ScavTrap " << this->getName() <<  " attacks " << target << ", causing " << this->getDamage() <<" points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->setPoints(this->getPoints() + amount);
    this->setEnergy(this->getEnergy() - 1);
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    if (amount > this->getPoints())
        this->setPoints(0);
    else
        this->setPoints(this->getPoints() - amount);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap "<< this->getName() <<" is now in Gate keeper mode." << std::endl;
}