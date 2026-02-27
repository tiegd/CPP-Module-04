/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:11:06 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 12:06:05 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE__
	#define __MATERIASOURCE__

	#include "IMateriaSource.hpp"

	class MateriaSource : public IMateriaSource
	{
		private:
			AMateria	*_inventory[4];
		public:
			MateriaSource();
			MateriaSource(const MateriaSource &obj);
			MateriaSource& operator=(const MateriaSource &obj);
			~MateriaSource();
			void learnMateria(AMateria* materia);
			AMateria* createMateria(std::string const & type);
	};

#endif