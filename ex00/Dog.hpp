/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:21:01 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 15:05:38 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
	#define __DOG__

	#include "Animal.hpp"

	class	Dog : public Animal
	{
		public:
			Dog();
			~Dog();
			void makeSound() const;
	};

#endif
