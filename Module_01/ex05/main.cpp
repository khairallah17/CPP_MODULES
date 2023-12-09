/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:10:07 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/09 11:10:17 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain("chilaayba");
	harl.complain("tist");

	harl.complain("DEBUG");
	harl.complain("info");

	harl.complain("debug");
	harl.complain("INFO");

	harl.complain("ERROR");
	harl.complain("warning");

	harl.complain("error");
	harl.complain("WARNING");

	return (0);
}
