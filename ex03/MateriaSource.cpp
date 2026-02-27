#include "MateriaSource.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:13:28 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 10:13:29 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this != &obj)
		*this->_inventory = *obj._inventory;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			this->_inventory[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    if (type == "ice")
	{
		Ice *ice = new Ice();
		return (ice);
	}
	else if (type == "cure")
	{
		Cure *cure = new Cure();
		return (cure);
	}
	return (NULL);
}
