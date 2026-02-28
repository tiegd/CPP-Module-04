#include "Vector.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:14:14 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 12:14:15 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Vector::Vector()
{
	this->init(0);
}

Vector::Vector(size_t val_size)
{
	this->init(val_size);
}

Vector::Vector(const Vector &obj)
{
}

Vector &Vector::operator=(const Vector &obj)
{
    // TODO: insert return statement here
}

Vector::~Vector()
{
}

void Vector::init(size_t val_size)
{
	this->_capacity = 0;
	this->_len = 0;
	this->_array = NULL;
	this->_size_type = val_size;
}

int Vector::realloc()
{
	AMateria	**new_tab;

	if (this->_capacity == 0)
		_capacity = 4;
	else if (this->_capacity > 0)
		_capacity *= 2;
	try
	{
		new_tab = new AMateria*[_capacity * sizeof (AMateria)];
		for (int i = 0; this->_array[i]; i++)
			new_tab[i] = _array[i];
		if (this->_capacity)
			delete[] this->_array;
		this->_array = new_tab;
		return (0);
	}
	catch(std::bad_alloc &ba)
	{
		return (1);
	}
}

int Vector::add()
{
	// if (this->_len == this->_capacity)
	// 	if (this->realloc() == 1)
	// 		return (1);
	// for (int i = 0; this->_capacity; i++)
	// {
		
	// }
	return 0;
}

void Vector::free()
{
}

void Vector::memcp()
{
}
