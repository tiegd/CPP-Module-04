#include "Animal.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:26 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 09:32:25 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Animal::Animal() : _type("Undefined")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}
