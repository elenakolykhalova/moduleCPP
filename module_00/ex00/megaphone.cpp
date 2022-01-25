/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 14:54:08 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/01 15:29:29 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **ag)
{
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	ag++;
	while (*ag)
	{
		for (int i = 0; (*ag)[i]; i++)
		{
			if ((*ag)[i] >= 'a' && (*ag)[i] <= 'z')
				std::cout << char((*ag)[i] - 32);
			else
				std::cout << (*ag)[i];
		}
		ag++;
	}
	std::cout << std::endl;
	return (0);	
}
