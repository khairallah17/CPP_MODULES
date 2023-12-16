/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:03:19 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 18:04:37 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string AAnimal::getType() const {
    return (this->type);
}

void    AAnimal::setType(std::string type) {
    this->type = type;
}
