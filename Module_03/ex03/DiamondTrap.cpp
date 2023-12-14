/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:25:29 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/14 22:50:17 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"

DiamondTrap::DiamondTrap(void) {
    std::cout << PURPLE << "DiamondTrap constructor called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << PURPLE << "DiamondTrap destructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << PURPLE << "DiamondTrap parametrized constructor called" << RESET << std::endl;
    this->name = name;
    this->setName(name + "_clap_name");
    this->setDamage(30);
    this->setEnergy(50);
    this->setPoints(100);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& trap) {
    this->setDamage(trap.getDamage());
    this->setEnergy(trap.getEnergy());
    this->setName(trap.getName());
    this->setPoints(trap.getPoints());
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap) {
    std::cout << BGRN << "DiamondTrap Copy Constructor called" << RESET << std::endl;
    this->setName(trap.getName());
}

void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::beRepaired(unsigned int amount) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->setPoints(this->getPoints() + amount);
    this->setEnergy(this->getEnergy() - 1);
}

void DiamondTrap::takeDamage(unsigned int amount) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    if (amount > (unsigned int)this->getPoints())
        this->setPoints(0);
    else
        this->setPoints(this->getPoints() - amount);
}

void    DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " ClapTrap " << this->getName() << std::endl;
}