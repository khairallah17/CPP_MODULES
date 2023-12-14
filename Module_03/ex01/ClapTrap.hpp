/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:05:00 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/14 22:14:25 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
    
    private:
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
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        std::string getName() const;
        int         getPoints() const;
        int         getEnergy() const;
        int         getDamage() const;

        void    setName(std::string name);
        void    setPoints(int amount);
        void    setEnergy(int amount);
        void    setDamage(int amount);
};