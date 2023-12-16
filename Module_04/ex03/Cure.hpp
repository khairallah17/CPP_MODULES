/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:09:57 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 22:48:28 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        ~Cure();
        Cure(const Cure& cure);
        Cure& operator=(const Cure& cure);
        AMateria* clone() const;
        void use(ICharacter& target);
};

