/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:26 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:42:27 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Undefined")
{
	std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	*this = obj;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
	std::cout << "......................." << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (_type);
}
