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
	std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << GREEN << "Animal copy assignment operator called" << RESET << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
}

void Animal::makeSound() const
{
	std::cout << GREEN << "Animal sound" << RESET << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}
