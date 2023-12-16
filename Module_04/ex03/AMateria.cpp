/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:21:04 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 22:36:52 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const & type) {
    this->type = type;
}

AMateria::~AMateria() {
}

AMateria& AMateria::operator=(const AMateria& materia) {
    (void)materia;
    return (*this);
}

AMateria::AMateria(const AMateria& materia) {
    *this = materia;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}

std::string const & AMateria::getType() const {
    return (this->type);
}