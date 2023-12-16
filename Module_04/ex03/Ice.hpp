/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:08:21 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 22:48:59 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria{
    private:
        /* data */
    public:
        Ice();
        ~Ice();
        Ice(const Ice& ice);
        Ice& operator=(const Ice& ice);
        AMateria* clone() const;
        void use(ICharacter& target);
};
