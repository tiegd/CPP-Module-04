/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:12:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 16:05:24 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

t_lst *Character::_floor = NULL;

Character::Character() : _nbMateria(0), _name("none")
{
	std::cout << GREEN << "Character constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _nbMateria(0), _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
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
	{
		this->_name = obj._name;
		this->_nbMateria = obj._nbMateria;
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

Character::~Character()
{
	std::cout << RED << "Character destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (_nbMateria >= 4)
	{
		delete m;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			this->_nbMateria++;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	t_lst	*new_lst;

	if (idx >= 4)
		return ;
	if (!this->_inventory[idx])
		return ;
	try
	{
		new_lst = new t_lst;
		new_lst->_content = this->_inventory[idx];
		new_lst->_next = NULL;
		this->_inventory[idx] = NULL;
		this->_nbMateria--;
		addFloor(new_lst);
	}
	catch(std::bad_alloc &ba)
	{
		return ;
	}
}

void	Character::addFloor(t_lst *node)
{
	if (!_floor)
	{
		_floor = node;
		return;
	}
	t_lst	*tmp = _floor;
	while (tmp->_next)
		tmp = tmp->_next;
	tmp->_next = node;
}

void	Character::clear_lst()
{
	t_lst	*buff;
	t_lst	*tmp = getFloor();

	if (tmp)
	{
		while (tmp)
		{
			buff = tmp->_next;
			delete tmp->_content;
			delete tmp;
			tmp = buff;
		}
	}
	_floor = NULL;
	std::cout << YELLOW << "The floor has been cleaned" << RESET << std::endl;
}

t_lst*	Character::getFloor()
{
	return (_floor);
}

void Character::use(int idx, ICharacter &target)
{
	this->_inventory[idx]->use(target);
}

void Character::changeName(std::string name)
{
	this->_name = name;
}
