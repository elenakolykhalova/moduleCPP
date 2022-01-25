/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:42:34 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/15 00:42:30 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(){
	
	Karen Karen;
	
	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("Hello, how a you?");

	return (0);	
}
