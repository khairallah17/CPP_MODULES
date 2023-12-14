/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:59:23 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/14 22:50:17 by mkhairal         ###   ########.fr       */
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
    this->setName(name);
    this->setDamage(30);
    this->setEnergy(100);
    this->setPoints(100);
}

FragTrap& FragTrap::operator=(const FragTrap& trap) {
    this->setDamage(trap.getDamage());
    this->setEnergy(trap.getEnergy());
    this->setName(trap.getName());
    this->setPoints(trap.getPoints());
    return (*this);
}

FragTrap::FragTrap(const FragTrap& trap) {
    std::cout << BGRN << "FragTrap Copy Constructor called" << RESET << std::endl;
    this->setName(trap.getName());
}

void    FragTrap::attack(const std::string& target) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->setEnergy(this->getEnergy() - 1);
    std::cout << "FragTrap " << this->getName() <<  " attacks " << target << ", causing " << this->getDamage() <<" points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->setPoints(this->getPoints() + amount);
    this->setEnergy(this->getEnergy() - 1);
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->getPoints() <= 0 || this->getEnergy() <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    if (amount > this->getPoints())
        this->setPoints(0);
    else
        this->setPoints(this->getPoints() - amount);
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->getName() << " wants to high five" << std::endl;
}