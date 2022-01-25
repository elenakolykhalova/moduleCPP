/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:55:59 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 18:01:28 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
	
		Ice();
		virtual ~Ice();
		Ice(const Ice &value);
		Ice &operator=(const Ice &value);
		
		AMateria	*clone() const;
		void 		use(ICharacter &target);
};

#endif