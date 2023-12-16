/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:05:00 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 10:51:39 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
    
    protected:
        std::string name;
        int         points;
        int         energy;
        int         damage;

    public:
        ClapTrap(void);
        virtual ~ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& trap);
        virtual ClapTrap& operator=(const ClapTrap& trap);
        virtual void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

};