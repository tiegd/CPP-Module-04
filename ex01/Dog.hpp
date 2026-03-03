/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:21:01 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:33:11 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
	#define __DOG__

	#include "Animal.hpp"
	#include "Brain.hpp"

	class	Dog : public Animal
	{
		private:
			Brain	*_brain;
		public:
			Dog();
			Dog(const Dog &obj);
			Dog& operator=(const Dog &obj);
			~Dog();
			void makeSound() const;
			void getIdeas();
			void setIdea();
	};

#endif
