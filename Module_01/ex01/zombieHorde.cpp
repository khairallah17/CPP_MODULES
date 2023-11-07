/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:47:12 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 11:54:36 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    Zombie *zombies;

    zombies = new Zombie[n];
    for (int i = 0 ; i < n ; i++)
        zombies[i].setName(name);
    return (zombies);
}