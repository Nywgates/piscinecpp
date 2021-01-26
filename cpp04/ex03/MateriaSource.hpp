/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:39:27 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 11:50:24 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* _inv[4];

    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &c);
        MateriaSource &operator=(const MateriaSource &c);

        virtual void learnMateria(AMateria *materia);
        virtual AMateria *createMateria(const std::string &type);
};

#endif