/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:37:25 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 18:06:07 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{   
    {
        Cat	jim;
        Cat	kim(jim);

        kim = jim;
        kim.makeSound();
        jim.makeSound();
    }

    {
        Dog	jim;
        Dog	kim(jim);

        kim = jim;
        kim.makeSound();
        jim.makeSound();
    }



}