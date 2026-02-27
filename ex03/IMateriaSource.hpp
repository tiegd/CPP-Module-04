/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:08:18 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 12:06:41 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE__
	#define __IMATERIASOURCE__

	#include "AMateria.hpp"
	
	class IMateriaSource
	{
		public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria* materia) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
	};

#endif