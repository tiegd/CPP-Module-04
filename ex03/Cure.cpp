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
    _type = "cure";
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
    std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

std::string const &Cure::getType() const
{
	return (_type);
}

Cure *Cure::clone() const
{
    Cure *res = new Cure();
	return (res);
}

void Cure::use(Character &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}
