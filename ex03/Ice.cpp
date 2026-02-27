#include "Ice.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:03:21 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/25 17:03:22 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &obj)
{
	*this = obj;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

std::string const &Ice::getType() const
{
	return (_type);
}

Ice* Ice::clone() const
{
	Ice *res = new Ice();
	return (res);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
