#include "Dog.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:54 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 09:20:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Dog::Dog()
{
    _type = "Dog";
	_brain = new Brain;
	std::cout << RED << "Dog constructor called" << RESET << std::endl;
	std::cout << "......................." << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
		_brain = new Brain(*obj._brain);
	return (*this);
}

Dog::~Dog()
{
	delete	this->_brain;
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Waff" << std::endl;
}

void Dog::getIdeas()
{
	this->_brain->getIdeas();
}

void Dog::setIdea()
{
	this->_brain->setIdea();
}
