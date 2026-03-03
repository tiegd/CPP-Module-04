/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:09:38 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 11:46:53 by gaducurt         ###   ########.fr       */
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
	delete src;
	std::cout << "---------------------------" << std::endl;
	Character::clear_lst();
	return 0;
}