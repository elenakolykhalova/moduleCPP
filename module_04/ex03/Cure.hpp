/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:54:36 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 18:01:32 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &value);
		Cure &operator=(const Cure &value);
		virtual ~Cure();

		AMateria* 	clone() const;
		void 		use(ICharacter &target);
};

#endif