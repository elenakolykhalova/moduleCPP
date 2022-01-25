/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:34 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/11 21:03:46 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string _type;
		
	public:
		const	std::string &getType();
		void	setType(std::string type);
		Weapon(std::string type);
		~Weapon(void);
};

#endif