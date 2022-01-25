/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:00:20 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 11:57:20 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &value);
		MateriaSource &operator=(const MateriaSource &value);
		virtual ~MateriaSource();
		AMateria *MS[4];
		
		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);
};

#endif
