/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:26 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/25 16:13:25 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("Undefined")
{
	std::cout << "Animal constructor called" << std::endl;
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
	std::cout << "Animal destructor called" << std::endl;
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
