/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:42:31 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 12:01:09 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        _inv[i] = NULL;
}

MateriaSource::~MateriaSource(){
}

MateriaSource::MateriaSource(const MateriaSource &c)
{
    for (int n = 0; n < 4; n++)
        _inv[n] = c._inv[n]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &c){
	for (int i = 0; i < 4; i++)
        delete _inv[i];
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i]->clone();
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (_inv[3])
        return;
    int i = 0;
    while (_inv[i])
        i++;
    _inv[i] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
        if (_inv[i] && _inv[i]->getType() == type)
            return _inv[i]->clone();
    return NULL;
}

