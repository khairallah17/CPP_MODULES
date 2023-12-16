/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:31:47 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 11:03:13 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap tist("frag");
    FragTrap tist2(tist);
    FragTrap tist3;

    tist3 = tist2;

    tist.attack("ziko lghlid");
    tist.takeDamage(4);
    tist.beRepaired(2);
    tist.highFivesGuys();

    tist2.attack("ziko lghlid");
    tist2.takeDamage(4);
    tist2.beRepaired(2);
    tist2.highFivesGuys();
}