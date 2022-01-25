/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Castes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:09:41 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/03 11:15:47 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTES_HPP
# define CASTES_HPP

#include <string>
#include <iostream>
#include <limits>
# include <cmath>

class Castes {
	public:
		std::string str; //строка аргументов для преобразования
		
		float		f;
		double		d;
		int			i;
		char		c;

		float		temp;

		void	isChar(float x);
		int		isInt(float x);
		float	isFloat(float x);
		double	isDouble(float x);

		Castes	(std::string const &str);
		int		converter();
		~Castes();
};


#endif