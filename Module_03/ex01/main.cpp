/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:31:47 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 10:52:26 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap *scav = new ScavTrap("ziko lghlid");
    ScavTrap scav2(*scav);
    ScavTrap scav3;
    
    scav3 = scav2;

    ScavTrap scoov = ScavTrap();
    
    scav2.attack("l9royed");
    scav3.attack("ziko lghlid");
    scoov.attack("lamsafi");
    scav->attack("bruh");
    scav->takeDamage(1);
    scav->takeDamage(1);
    scav->beRepaired(2);
    scoov.beRepaired(10);
    scoov.takeDamage(23);
    scav2.guardGate();
    scav->beRepaired(2);
    scav3.guardGate();
    scav2.takeDamage(2);
    scoov.guardGate();

    delete scav;
}