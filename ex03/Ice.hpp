/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:03:35 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 09:28:28 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE__
	#define __ICE__

	#include "AMateria.hpp"
	#include "Character.hpp"

	class	Ice : public AMateria
	{
		public:
			Ice();
			Ice(const Ice &obj);
			Ice& operator=(const Ice &obj);
			~Ice();
			std::string const &getType() const;
			Ice* clone() const;
			void use(ICharacter& target);
	};

#endif
