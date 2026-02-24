/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:48 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 15:05:06 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
	#define __CAT__

	#include "Animal.hpp"

	class	Cat : public Animal
	{
		public:
			Cat();
			~Cat();
			void makeSound() const;
	};

#endif
