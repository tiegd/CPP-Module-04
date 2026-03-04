/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:22:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/04 10:21:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL__
	#define __WRONGANIMAL__

	#include <string>

	class	WrongAnimal
	{
		protected:
			std::string	_type;
		public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal &obj);
			WrongAnimal& operator=(const WrongAnimal &obj);
			~WrongAnimal();
			void makeSound() const;
			std::string getType() const;
	};

#endif

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE  "\033[35m"
#define RESET   "\033[0m"
