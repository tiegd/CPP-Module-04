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
	std::cout << BLUE << "Cat constructor called" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << BLUE << "Miaou" << RESET << std::endl;
}
