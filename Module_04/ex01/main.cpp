/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:37:25 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 17:40:22 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    {
        Animal* animals[100] = {};

        for (int i = 0 ; i < 50 ; i++) {
            animals[i] = new Dog();    
        }
        
        for (int i = 50 ; i < 100 ; i++) {
            animals[i] = new Cat();
        }
        
        for (int i = 0 ; i < 100 ; i++) {
            delete animals[i];
        }
    }
    
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