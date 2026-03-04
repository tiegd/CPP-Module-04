/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:22:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/04 10:24:46 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT__
	#define __WRONGCAT__

	#include "WrongAnimal.hpp"

	class	WrongCat : public WrongAnimal
	{
		public:
			WrongCat();
			~WrongCat();
			void makeSound() const;
	};

#endif
