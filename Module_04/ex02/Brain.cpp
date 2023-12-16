/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:52:32 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 16:01:16 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << PURPLE << "Brain constructor called" << RESET << std::endl;
}

Brain::~Brain() {
    std::cout << PURPLE << "Brain desctructor called" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& brain) {
    std::cout << PURPLE << "Brain copy assignement operator called" << RESET << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        this->ideas[i] = brain.ideas[i];
    return (*this);
}

Brain::Brain(const Brain& brain) {
    std::cout << PURPLE << "Brain copy constructor called" << RESET << std::endl;
    *this = brain;
}