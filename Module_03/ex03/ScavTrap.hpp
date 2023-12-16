/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:33:08 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:21:48 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

    public:
        ScavTrap(void);
        ~ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& trap);
        virtual ScavTrap& operator=(const ScavTrap& trap);
        void    attack(const std::string& target);
        void    guardGate();

};