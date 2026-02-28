/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:51:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/28 14:10:34 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
	#define __CHARACTER__

	#include "ICharacter.hpp"
	#include <vector>
	
	class Character : public ICharacter
	{
		private:
			typedef struct	s_lst
			{
				AMateria		*_content;
				struct	s_lst	*_next;
			}				t_lst;
			int								_nbMateria;
			std::string						_name;
			AMateria						*_inventory[4];
			static t_lst							*_floor;
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
