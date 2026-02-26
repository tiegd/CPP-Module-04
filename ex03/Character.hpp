/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:51:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/26 16:29:28 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
	#define __CHARACTER__

	#include "ICharacter.hpp"
	
	class Character : public ICharacter
	{
		private:
			struct lst
			{
				AMateria *materia;
				struct lst *next;
			};
			static lst	*floor;
			int			_nbMateria;
			std::string	_name;
			AMateria	*_inventory[4];
		public:
			Character();
			Character(std::string name);
			Character(const Character &obj);
			Character& operator=(const Character &obj);
			~Character();
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, Character& target);
			static void new_lst(AMateria &mat);
	};
	
#endif
	