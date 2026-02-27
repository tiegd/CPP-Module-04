/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:12:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 12:11:34 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

Character::Character() : _nbMateria(0), _name("none")
{
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(std::string name) : _nbMateria(0), _name(name)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &obj)
{
	*this = obj;
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &obj)
{
    std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_name = obj._name;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (_nbMateria >= 4)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			this->_inventory[i] = m;
			this->_nbMateria++;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 4)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	this->_inventory[idx]->use(target);
}

