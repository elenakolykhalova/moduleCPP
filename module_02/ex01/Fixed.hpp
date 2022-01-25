/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:56:38 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/18 20:23:54 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	
	private:
		int _fix;
		const static int _bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &input);
		Fixed(const int fixed);
		Fixed(const float fixed);
		~Fixed(void);
		Fixed &operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif