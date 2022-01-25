/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:01:09 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/25 18:12:13 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	
	private:
		Brain *_brain;
	
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &value);
		Cat &operator=(const Cat &value);
		std::string 	getType() const;
		virtual void	makeSound() const;		
};

#endif