/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:07:30 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:31:45 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BRED "\e[1;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define RED "\e[0;31m"

ClapTrap::ClapTrap(void): name("ZIKO LGHLID"), points(10), energy(10), damage(0) {
    std::cout << PURPLE << "ClapTrap constructor called" << RESET << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << PURPLE << "ClapTrap destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), points(10), energy(10), damage(0) {
    std::cout << PURPLE << "ClapTrap parametrized constructor called" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
    std::cout << GRN << "ClapTrap Copy assignement operator called" << RESET << std::endl;
    this->damage = trap.damage;
    this->energy = trap.energy;
    this->name = trap.name;
    this->points = trap.points;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& trap): name(trap.name), points(trap.points), energy(trap.energy), damage(trap.damage) {
    std::cout << GRN << "ClapTrap Copy Constructor called" << RESET << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    if (this->points <= 0 || this->energy <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->energy -= 1;
    std::cout << "ClapTrap " << this->name <<  " attacks " << target << ", causing " << this->damage <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->points <= 0 || this->energy <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    std::cout << YEL << "ClapTrap " << this->name << " repaired it self for " << amount << RESET << std::endl;
    this->points += amount;
    this->energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->points <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    this->points -= amount;
    std::cout << RED << "ClapTrap " << this->name << " took " << amount << " of damage" << RESET << std::endl;
}
