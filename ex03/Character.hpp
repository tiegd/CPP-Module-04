/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:51:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/04 11:00:21 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
	#define __CHARACTER__

	#include "ICharacter.hpp"
	
	typedef struct	s_lst
	{
		AMateria		*_content;
		struct	s_lst	*_next;
	}				t_lst;

	class Character : public ICharacter
	{
		private:
			int								_nbMateria;
			std::string						_name;
			AMateria						*_inventory[4];
			static t_lst					*_floor;
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
			static t_lst* getFloor();
			static void addFloor(t_lst *node);
			static void clear_lst();
			void displayInventory();
	};
	
#endif

