/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:16:50 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:56:56 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << "\n-----------------------\n" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "\n-----------------------\n" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\n-----------------------\n" << std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << "\n-----------------------\n" << std::endl;
	const WrongAnimal	wanimal;
	const WrongCat		wcat;
	std::cout << "\n-----------------------\n" << std::endl;
	wanimal.makeSound();
	wcat.makeSound();
	std::cout << "\n-----------------------\n" << std::endl;
	std::cout << wanimal.getType() << " " << std::endl;
	std::cout << wcat.getType() << " " << std::endl;
	std::cout << "\n-----------------------\n" << std::endl;

	Dog dog;
	Dog cpy(dog);
	return 0;
}