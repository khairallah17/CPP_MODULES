/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:22 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 15:50:41 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {

    private:
        Weapon      &weapon;
        std::string name;

    public:
        HumanA(Weapon &weapon, std::string name);
        ~HumanA(void);
        void    attack(void);
        
        std::string getName(void);
};