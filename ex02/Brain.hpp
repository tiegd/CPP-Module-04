/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:03:08 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/03 16:55:23 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
	#define __BRAIN__

	#include <string>
	
	class	Brain
	{
		private:
			std::string	_ideas[3];
		public:
			Brain();
			Brain(const Brain &obj);
			Brain& operator=(const Brain &obj);
			~Brain();
			void getIdeas();
			void	setIdea();
	};

#endif

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE  "\033[35m"
#define RESET   "\033[0m"
