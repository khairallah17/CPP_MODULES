/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:10:43 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 22:34:02 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
    this->type = "cure";    
}

Cure::~Cure() {   
}

Cure& Cure::operator=(const Cure& cure) {
    (void)cure;
    return (*this);
}

Cure::Cure(const Cure& cure) {
    *this = cure;
}

AMateria* Cure::clone() const {
    return (new Cure());
}

void    Cure::use(ICharacter& target) {
    std::cout << GRN << "* heals "<< target.getName() <<"'s wounds *" << RESET << std::endl;
}
