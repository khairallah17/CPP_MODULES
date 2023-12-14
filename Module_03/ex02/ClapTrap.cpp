/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:07:30 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/14 22:50:17 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"

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
    this->damage = trap.damage;
    this->energy = trap.energy;
    this->name = trap.name;
    this->points = trap.points;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& trap): name(trap.name) {
    std::cout << BGRN << "ClapTrap Copy Constructor called" << RESET << std::endl;
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
    this->points += amount;
    this->energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->points <= 0 || this->energy <= 0) {
        std::cout << BRED << "CHUF CHI CHWIYA LDIK JIH" << RESET << std::endl;
        return ;
    }
    if (amount > this->points)
        this->points = 0;
    else
        this->points -= amount;
}

std::string ClapTrap::getName() const {
    return (this->name);
}

int     ClapTrap::getPoints() const {
    return (this->points);
}

int     ClapTrap::getDamage() const {
    return (this->damage);
}

int     ClapTrap::getEnergy() const {
    return (this->energy);
}

void    ClapTrap::setName(std::string name) {
    this->name = name;
}

void    ClapTrap::setDamage(int amount) {
    this->damage = amount;
}

void    ClapTrap::setPoints(int amount) {
    this->points = amount;
}

void    ClapTrap::setEnergy(int amount) {
    this->energy = amount;
}