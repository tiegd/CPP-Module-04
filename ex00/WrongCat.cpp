#include "WrongCat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:22:05 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 13:22:06 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << PURPLE << "WrongCat constructor called" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << PURPLE << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << YELLOW << "WrongCat sound" << RESET << std::endl;
}
