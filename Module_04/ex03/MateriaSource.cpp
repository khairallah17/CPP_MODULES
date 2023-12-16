/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:52:52 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 22:58:45 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0 ; i < 4 ; i++)
        this->materias[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0 ; i < 4 ; i++)
        delete this->materias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource) {
    for (int i = 0 ; i < 4 ; i++) {
        this->materias[i] = materiaSource.materias[i]->clone();
    }
    return (*this);    
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource) {
    *this = materiaSource;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return ;
    for (int i = 0 ; i < 4 ; i++) {
        if (!this->materias[i]) {
            this->materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0 ; i < 4 ; i++)
        if (this->materias[i]->getType() == type)
            return (this->materias[i]->clone());
    return (NULL);
}