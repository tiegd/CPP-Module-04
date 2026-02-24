/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:48 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 15:25:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
	#define __CAT__

	#include "Animal.hpp"
	#include "Brain.hpp"

	class	Cat : public Animal
	{
		private:
			Brain	*_brain;
		public:
			Cat();
			~Cat();
			void makeSound() const;
	};

#endif
