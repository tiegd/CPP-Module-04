#include "AMateria.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:09:20 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/26 11:27:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default name")
{
	std::cout << BLUE << "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << BLUE << "AMateria copy constructor called" << RESET << std::endl;
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	std::cout << BLUE << "AMateria copy assignment operator called" << RESET << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << BLUE << "AMateria destructor called" << RESET << std::endl;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

AMateria *AMateria::clone() const
{
	return (NULL);
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	return;
}
