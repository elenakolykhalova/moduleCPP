/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:56:51 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 17:34:19 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &value);
		Animal &operator=(const Animal &value);
		virtual ~Animal();
		virtual 		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif