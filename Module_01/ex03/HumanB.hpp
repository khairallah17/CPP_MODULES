/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:17 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 16:00:43 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB {

    private:
        std::string name;
        Weapon      *weapon;

    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);

        void                setName(std::string name);
        std::string         getName(void);

        void                setWeapon(Weapon &weapon);
};