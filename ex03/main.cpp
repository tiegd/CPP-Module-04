/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:09:38 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/04 13:45:04 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "---------------------------" << std::endl;
	src->learnMateria(new Ice());
	std::cout << "---------------------------" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "---------------------------" << std::endl;
	
	ICharacter* me = new Character("me");
	std::cout << "---------------------------" << std::endl;
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->unequip(3);
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->unequip(2);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	std::cout << "---------------------------" << std::endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "---------------------------" << std::endl;
	
	delete bob;
	std::cout << "---------------------------" << std::endl;
	delete me;
	std::cout << "---------------------------" << std::endl;
	Character paul("paul");
	tmp = src->createMateria("ice");
	paul.equip(tmp);
	std::cout << "---------------------------" << std::endl;
	tmp = src->createMateria("cure");
	paul.equip(tmp);
	std::cout << "---------------------------" << std::endl;
	paul.displayInventory();
	std::cout << "---------------------------" << std::endl;
	Character mlouis(paul);
	std::cout << "---------------------------" << std::endl;
	tmp = src->createMateria("ice");
	mlouis.equip(tmp);
	std::cout << "---------------------------" << std::endl;
	paul.displayInventory();
	std::cout << "---------------------------" << std::endl;
	mlouis.displayInventory();
	std::cout << "---------------------------" << std::endl;
	delete src;
	Character::clear_lst();
	return 0;
}