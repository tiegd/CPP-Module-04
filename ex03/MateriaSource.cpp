/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:13:28 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 16:07:46 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
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
	{
		for (int i = 0; i < 4; i++)
		{
			if (obj._inventory[i])
				this->_inventory[i] = obj._inventory[i]->clone(); 
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << RED << "MateriaSource Destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			if (type == "ice" && this->_inventory[i]->getType() == "ice")
			{
					Ice *ice = new Ice();
					return (ice);
			}
			else if (type == "cure" && this->_inventory[i]->getType() == "cure")
			{
				Cure *cure = new Cure();
				return (cure);
			}
		}
	}
	return (NULL);
}
