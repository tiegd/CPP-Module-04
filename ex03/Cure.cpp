#include "Cure.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:03:12 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/25 17:03:13 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Cure::Cure()
{
	std::cout << YELLOW << "Cure constructor called" << RESET << std::endl;
    _type = "cure";
	_isUsed = false;
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
	std::cout << YELLOW << "Cure copy constructor called" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
    std::cout << YELLOW << "Cure copy assignment operator called" << RESET << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << YELLOW << "Cure destructor called" << RESET << std::endl;
}

std::string const &Cure::getType() const
{
	return (_type);
}

Cure *Cure::clone() const
{
    Cure *res = new Cure();
	res->_type = this->_type;
	return (res);
}

void Cure::use(ICharacter &target)
{
	std::cout << YELLOW << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl; 
}

bool Cure::getUsed() const
{
	return (this->_isUsed);
}

void Cure::setUsed()
{
	this->_isUsed = true;
}
