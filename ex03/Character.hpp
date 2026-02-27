/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:51:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 12:12:00 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
	#define __CHARACTER__

	#include "ICharacter.hpp"
	#include <vector>
	
	class Character : public ICharacter
	{
		private:
			int								_nbMateria;
			std::string						_name;
			AMateria						*_inventory[4];
		public:
			Character();
			Character(std::string name);
			Character(const Character &obj);
			Character& operator=(const Character &obj);
			~Character();
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
	};
	
#endif
