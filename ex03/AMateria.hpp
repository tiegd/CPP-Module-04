/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:09:35 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/04 13:19:55 by gaducurt         ###   ########.fr       */
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
			bool	_isUsed;
		public:
			AMateria();
			AMateria(const AMateria &obj);
			virtual AMateria& operator=(const AMateria &obj);
			virtual ~AMateria();
			virtual std::string const& getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
			virtual bool getUsed() const;
			virtual void setUsed();
	};
    
#endif

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE  "\033[35m"
#define RESET   "\033[0m"
