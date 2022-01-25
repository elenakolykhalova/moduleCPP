/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:38:19 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/22 14:32:20 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point(void);
		~Point(void);
		Point(const Point &input);
			
};


#endif