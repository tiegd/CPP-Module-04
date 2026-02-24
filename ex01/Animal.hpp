/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 13:55:25 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
	#define __ANIMAL__

	#include <string>

	class	Animal
	{
		protected:
			std::string	_type;
		public:
			Animal();
			Animal(const Animal &obj);
			Animal& operator=(const Animal &obj);
			virtual ~Animal();
			virtual void makeSound() const;
			std::string getType() const;
	};

#endif
