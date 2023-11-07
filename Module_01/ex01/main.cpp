/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:52:28 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 12:02:08 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *z;

    z = zombieHorde(5, "ziko lghlid");
    for (int i = 0 ; i < 5 ; i++)
        std::cout << "zombie " << i << " ==> " << z[i].getName() << std::endl;
    delete[] z;
}