/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:44:11 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 16:12:35 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &value);
		AMateria &operator=(const AMateria &value);
		virtual ~AMateria();
		
		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif