/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:37:25 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:42:49 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    WrongAnimal *wa = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wa->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    wa->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    delete wa;

    return 0;
}