/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:25:29 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:16:16 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define GRN "\e[0;32m"
#define BRED "\e[1;31m"
#define YEL "\e[0;33m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"

DiamondTrap::DiamondTrap(void) {
    std::cout << PURPLE << "DiamondTrap constructor called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << PURPLE << "DiamondTrap destructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << PURPLE << "DiamondTrap parametrized constructor called" << RESET << std::endl;
    this->ClapTrap::name = name + "_clap_name";
    this->name = (name);
    this->damage = (30);
    this->energy = (50);
    this->points = (100);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& trap) {
    std::cout << PURPLE << "Diamond Trap copy assignement operator called" << RESET << std::endl;
    this->ClapTrap::name = trap.ClapTrap::name;
    this->damage = (trap.damage);
    this->energy = (trap.energy);
    this->name = (trap.name);
    this->points = (trap.points);
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap) {
    std::cout << BLU << "DiamondTrap Copy Constructor called" << RESET << std::endl;
    this->name = (trap.name);
    this->ClapTrap::name = trap.ClapTrap::name;
    this->energy = trap.energy;
    this->points = trap.points;
    this->damage = trap.damage;
}

void    DiamondTrap::attack(const std::string& target) {
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << CYN << "DiamondTrap " << this->name << " ClapTrap " << this->ClapTrap::name << RESET << std::endl;
}