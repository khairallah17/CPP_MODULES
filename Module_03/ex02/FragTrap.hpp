/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:59:30 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:27:21 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

    public:
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& trap);
        FragTrap& operator=(const FragTrap& trap);

        void    highFivesGuys();

};