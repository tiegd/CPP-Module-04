/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:03:15 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:30:14 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << PURPLE << "Brain constructor called" << RESET << std::endl;
	this->_ideas[0] = "eat";
	this->_ideas[1] = "drink";
	this->_ideas[2] = "sleep";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 3; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << PURPLE << "Brain destructor called" << RESET << std::endl;
}

void Brain::getIdeas()
{
	std::cout << "ideas : {" << this->_ideas[0] << ", " << this->_ideas[1] << ", "<< this->_ideas[2] << "}" << std::endl;
}

void Brain::setIdea()
{
	std::cout << "setting of ideas :" << std::endl;
	this->_ideas[0] = "run";
	this->_ideas[1] = "play";
	this->_ideas[2] = "eat";
}
