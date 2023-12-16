/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:53:05 by mkhairal          #+#    #+#             */
/*   Updated: 2023/12/16 22:13:50 by mkhairal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    private:
        AMateria* materias[4];

    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& materiaSource);
        MateriaSource& operator=(const MateriaSource& materiaSource);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};
