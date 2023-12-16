/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:21:27 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 23:08:16 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    this->name = "SBE3";
    for (int i = 0 ; i < 4 ; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name) {
    this->name = name;
    for (int i = 0 ; i < 4 ; i++)
        this->inventory[i] = NULL;
}

Character& Character::operator=(const Character& character) {
    this->name = character.getName();
    for (int i = 0 ; i < 4 ; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
        this->inventory[i] = character.inventory[i]->clone();
    }
    return (*this);
}

Character::Character(const Character& character) {
    *this = character;
}

Character::~Character()
{
    for (int i = 0 ; i < 4 ; i++)
        delete this->inventory[i];
}

void    Character::equip(AMateria* m) {
    for (int i = 0 ; i < 4 ; i++) {
        if (!this->inventory[i]) {
            for (int j = 0; j < 4; j++)
                if (inventory[j] && inventory[j] == m)
                    return ;
            this->inventory[i] = m;
            break;
        }
    }
}

void    Character::unequip(int idx) {
    if (idx < 0 || idx >= 4)
        return ;
    if (this->inventory[idx])
        this->inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4)
        return ;
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
}

std::string const & Character::getName() const {
    return (this->name);
}