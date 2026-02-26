/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:09:35 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/26 15:50:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA__
	#define __AMATERIA__

	#include <string>
	#include <iostream>
	#include "ICharacter.hpp"

	class	AMateria
	{
		protected:
			std::string	_type;
		public:
			AMateria();
			AMateria(const AMateria &obj);
			virtual AMateria& operator=(const AMateria &obj);
			virtual ~AMateria();
			virtual std::string const& getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
	};
    
#endif
