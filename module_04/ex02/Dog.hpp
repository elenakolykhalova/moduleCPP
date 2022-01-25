/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:02:17 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 17:54:36 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	
	private:
		Brain *_brain;
		
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &value);
		Dog &operator=(const Dog &value);
		std::string 	getType() const;
		void	makeSound() const;		
};

#endif