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
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
