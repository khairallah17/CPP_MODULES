/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:00:30 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/17 10:05:55 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    
    public :
        WrongCat();
        ~WrongCat();
        WrongCat& operator=(const WrongCat& wrongCat);
        WrongCat(const WrongCat& wrongCat);
        void makeSound() const;

};