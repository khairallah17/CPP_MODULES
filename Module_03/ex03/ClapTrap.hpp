/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:05:00 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:18:22 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap {
    
    protected:
        std::string name;
        int         points;
        int         energy;
        int         damage;

    public:
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& trap);
        ClapTrap& operator=(const ClapTrap& trap);
        void    attack(const std::string& target);
        virtual void    takeDamage(unsigned int amount);
        virtual void    beRepaired(unsigned int amount);
        
};