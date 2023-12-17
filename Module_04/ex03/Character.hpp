/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:20:45 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:25:24 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter {
    
    private:
        AMateria* inventory[4];
        std::string name;
        
    public:
        Character();
        ~Character();
        Character(std::string name);
        Character(const Character& character);
        Character& operator=(const Character& character);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
