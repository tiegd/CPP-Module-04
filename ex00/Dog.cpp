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
	std::cout << RED << "Dog constructor called" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << RED << "Waff" << RESET << std::endl;
}
