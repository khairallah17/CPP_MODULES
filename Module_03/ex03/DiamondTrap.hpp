/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:25:19 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:15:58 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

    private:
        std::string name;
    
    public:
        DiamondTrap(void);
        ~DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& trap);
        DiamondTrap& operator=(const DiamondTrap& trap);
        void    attack(const std::string& target);
        void    whoAmI();

};