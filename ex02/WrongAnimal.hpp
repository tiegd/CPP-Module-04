/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:22:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 13:25:14 by gaducurt         ###   ########.fr       */
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
