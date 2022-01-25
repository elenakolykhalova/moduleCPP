/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:35:36 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/23 21:35:37 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap { 
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &value);
		~FragTrap(void);
		FragTrap &operator=(const FragTrap &value);
		
		void	attack(std::string const &target);
		void	highFivesGuys(void);
};



#endif