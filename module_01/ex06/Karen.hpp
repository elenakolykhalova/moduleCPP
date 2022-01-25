/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:33:27 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/15 01:19:39 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <map>
#include <string>

class Karen {
	
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
	
	public:
		Karen(void);
		~Karen(void);
		int complain(std::string level);
		void (Karen::*arr[4])(void);
};

#endif
