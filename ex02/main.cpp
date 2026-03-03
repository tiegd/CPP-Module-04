/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:16:50 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:54:07 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;

	Cat cat;
	Cat cpy(cat);
	std::cout << "\n-----------------------\n" << std::endl;
	cat.getIdeas();
	cpy.getIdeas();
	cpy.setIdea();
	cat.getIdeas();
	cpy.getIdeas();

	AAnimal	*array[10];
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		if (i < 5)
			array[i] = new Dog();
		else if (i >= 5)
			array[i] = new Cat;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			std::cout << std::endl;
		if (i < 5)
			std::cout << RED << "array[" << i << "].type = " << array[i]->getType() << RESET << std::endl;
		else
			std::cout << BLUE << "array[" << i << "].type = " << array[i]->getType() << RESET << std::endl;
	}
	std::cout << "\n-----------------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		delete array[i];
	}
	return (0);
}
