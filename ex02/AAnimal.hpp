/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:41:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
	#define __ANIMAL__

	#include <string>

	class	AAnimal
	{
		protected:
			std::string	_type;
		public:
			AAnimal();
			AAnimal(const AAnimal &obj);
			AAnimal& operator=(const AAnimal &obj);
			virtual ~AAnimal();
			virtual void makeSound() const = 0;
			std::string getType() const;
	};

#endif

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
