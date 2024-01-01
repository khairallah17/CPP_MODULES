/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:10:25 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:49:03 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp1;
    AMateria* tmp2;
    AMateria* tmp3;
    AMateria* tmp4;
    tmp = src->createMateria("ice");
    tmp1 = src->createMateria("cure");
    tmp2 = src->createMateria("ice");
    tmp3 = src->createMateria("cure");
    tmp4 = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp1);
    me->equip(tmp2);
    me->equip(tmp3);
    me->unequip(1);
    me->equip(tmp1);
    me->unequip(1);
    me->equip(tmp3);
    //me->equip(tmp4);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    //me->use(4, *bob);
    delete bob;
    delete me;
    delete src;
    delete tmp4;
    delete tmp1;
    return 0;
}