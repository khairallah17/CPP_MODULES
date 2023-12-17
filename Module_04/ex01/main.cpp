/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:37:25 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:08:20 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void f() { system("leaks Animal"); }

int main()
{

    atexit(f);

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
        Cat	obj;
        Cat	obj1(obj);
        obj1 = obj;
        obj1.makeSound();
        obj.makeSound();
    }

    {
        Dog	obj;
        Dog	obj1(obj);
        obj1 = obj;
        obj1.makeSound();
        obj.makeSound();
    }



}