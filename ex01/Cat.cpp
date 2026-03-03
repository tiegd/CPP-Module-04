#include "Cat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:42 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 09:41:24 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Cat::Cat()
{
    _type = "Cat";
	_brain = new Brain;
	std::cout << BLUE << "Cat constructor called" << RESET << std::endl;
	std::cout << "......................." << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &obj)
		_brain = new Brain(*obj._brain);
	return (*this);
}

Cat::~Cat()
{
	delete	this->_brain;
	std::cout << BLUE << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

void Cat::getIdeas()
{
	this->_brain->getIdeas();
}

void Cat::setIdea()
{
	this->_brain->setIdea();
}
