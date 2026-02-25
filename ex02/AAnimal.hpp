/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/25 16:14:13 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL__
	#define __AANIMAL__

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
