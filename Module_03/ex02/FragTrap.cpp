/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:59:23 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:27:19 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"
#define BRED "\e[1;31m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"

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
    std::cout << GRN << "FragTrap copy assignement operator called" << RESET << std::endl;
    this->damage = (trap.damage);
    this->energy = (trap.energy);
    this->name = (trap.name);
    this->points = (trap.points);
    return (*this);
}

FragTrap::FragTrap(const FragTrap& trap) {
    std::cout << GRN << "FragTrap Copy Constructor called" << RESET << std::endl;
    this->name = (trap.name);
}

void    FragTrap::highFivesGuys() {
    std::cout << GRN << "FragTrap " << this->name << " wants to high five" << RESET << std::endl;
}