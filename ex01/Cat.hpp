/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:20:48 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 17:20:07 by gaducurt         ###   ########.fr       */
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
			Cat(const Cat &obj);
			Cat& operator=(const Cat &obj);
			~Cat();
			void makeSound() const;
			void getIdeas();
			void setIdea();
	};

#endif
