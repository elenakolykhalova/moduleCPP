/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:33:43 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/13 18:38:54 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (){
	
	std::string 	str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str; //указатель на строку
	std::string		&stringREF = str; //ссылка на строку
	
	std::cout << "This is adress string:\t " << &str << std::endl;
	std::cout << "This is adress PTR:\t " << stringPTR << std::endl;
	std::cout << "This is adress REF:\t " << &stringREF << std::endl;
	std::cout << "This is string PTR:\t " << *stringPTR << std::endl;
	std::cout << "This is string REF:\t " << stringREF << std::endl;	
}