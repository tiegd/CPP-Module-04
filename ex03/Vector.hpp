/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:14:16 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/27 12:29:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VECTOR__
	#define __VECTOR__

	#include <cstdlib>
	
	class	Vector
	{
		
		private:
			void	**array;
			size_t	len;
			size_t	size_type;
			size_t	capacity;
		public:
			Vector();
			Vector(size_t val_size);
			Vector(const Vector &obj);
			Vector& operator=(const Vector &obj);
			~Vector();
			void	init(size_t val_size);
			int		realloc();
			int		add();
			void	free();
			void	memcp()
	};

#endif