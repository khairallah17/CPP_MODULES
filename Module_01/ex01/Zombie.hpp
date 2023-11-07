/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:43:15 by mkhairal          #+#    #+#             */
/*   Updated: 2023/11/07 11:59:50 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    
    private:
        std::string  name;

    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void        announce(void);

        void        setName(std::string name);
        std::string getName(void);
};

Zombie* zombieHorde(int n, std::string name);