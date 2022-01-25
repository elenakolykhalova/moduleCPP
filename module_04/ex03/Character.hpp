/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:01:46 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/27 15:00:29 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"

class Character : public ICharacter {
	protected:
		std::string _name;
		AMateria *_AM[4];
	
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &value);
		Character &operator=(const Character &value);
		virtual ~Character();
		
		std::string const & getName() const;
	
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
