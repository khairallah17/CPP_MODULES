/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:58:13 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 11:36:05 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    
    private:
        std::string  name;

    public:
        Zombie(void);
        ~Zombie(void);
        void        announce(void);

        void        setName(std::string name);
        std::string getName(void);

};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);