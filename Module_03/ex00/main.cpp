/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:31:47 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 10:26:15 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap *c1 = new ClapTrap("ziko lghlid");
    ClapTrap *c2 = new ClapTrap();
    ClapTrap c3 ( *c1 );
    ClapTrap c4 = ClapTrap();
    
    c4 = *c2;
    
    c3.attack("l9royed");
    c4.attack("L3AZZI");
    c1->attack("lamsafi");
    c2->attack("ziko lghlid");
    c1->takeDamage(8);
    c2->takeDamage(5);
    c1->beRepaired(9);
    c2->beRepaired(10);
    c1->attack("lamsafi");
    delete c1;
}