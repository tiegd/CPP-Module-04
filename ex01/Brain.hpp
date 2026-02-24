/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:03:08 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/24 15:20:47 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
	#define __BRAIN__

	#include <string>
	
	class	Brain
	{
		private:
			std::string	_ideas[100];
		public:
			Brain();
			Brain(const Brain &obj);
			Brain& operator=(const Brain &obj);
			~Brain();
	};

#endif
