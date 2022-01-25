/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Castes.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:48:23 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/03 16:24:41 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Castes.hpp"

Castes::Castes(std::string const &str) {
	this->str = str;
}

int Castes::converter() {
	try
	{
		if (str.length() == 1 && !isdigit(str[0]))
		{
			std::cout << "char: " << str[0] << std::endl;
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
			return (0);
		}
		else
			temp = std::stof(str);		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Castes::isChar(temp);
	Castes::isInt(temp);
	Castes::isFloat(temp);
	Castes::isDouble(temp);
	return (0);
}

void	Castes::isChar(float x) {
	std::cout << "char: ";
	c = static_cast<char>(x);
	if (x == std::numeric_limits<float>::infinity() || x == -std::numeric_limits<float>::infinity() || std::isnan(x) || (int)x > 126 || (int)x < 0)
		std::cout << "impossible" << std::endl;
	else if ((int)x < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << this->c << '\'' << std::endl;
}

int		Castes::isInt(float x){
	i = static_cast<int>(x);
	std::cout << "int: ";
	if (i == std::numeric_limits<int>::min() || i == std::numeric_limits<int>::max() || std::isnan(x))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	return (0);
}

float	Castes::isFloat(float x) {
	f = static_cast<float>(x);
	std::cout << "float: " << f;
	if (x - (int)x != (float)0)
		std::cout << "f" << std::endl;
	else
		std::cout << ".0f" << std::endl;
	return (0);
}

double Castes::isDouble(float x) {
	d = static_cast<double>(x);
	std::cout << "double: " << d;
	if (d - (int)d == (double)0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
	return (0);
}

Castes::~Castes(){}
