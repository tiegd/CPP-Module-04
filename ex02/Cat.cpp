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
	std::cout << "Cat constructor called" << std::endl;
	std::cout << "......................." << std::endl;
}

Cat::~Cat()
{
	delete	this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
