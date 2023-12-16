/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:59:30 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:20:09 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

    public:
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& trap);
        virtual FragTrap& operator=(const FragTrap& trap);

        void    highFivesGuys();

};