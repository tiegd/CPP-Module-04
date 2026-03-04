/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:03:29 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/04 13:19:13 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE__
	#define __CURE__

	#include "AMateria.hpp"
	#include "Character.hpp"

	class	Cure : public AMateria
	{
		public:
			Cure();
			Cure(const Cure &obj);
			Cure& operator=(const Cure &obj);
			~Cure();
			std::string const &getType() const;
			Cure* clone() const;
			void use(ICharacter& target);
			bool getUsed() const;
			void setUsed();
	};
	
#endif
