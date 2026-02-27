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
	this->capacity = 0;
	this->len = 0;
	this->array = NULL;
	this->size_type = val_size;
}

int Vector::realloc()
{
    return 0;
}

int Vector::add()
{
    return 0;
}

void Vector::free()
{
}
