/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:12:32 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 21:51:06 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    this->type = "ice";
}

Ice::~Ice() {
    
}

Ice& Ice::operator=(const Ice & ice) {
    (void)ice;
    return (*this);
}

Ice::Ice(const Ice& ice) {
    *this = ice;    
}

AMateria* Ice::clone() const{
    return (new Ice());
}

void    Ice::use(ICharacter& target) {
    std::cout << GRN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}