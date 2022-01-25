/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:35:15 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/08 12:45:53 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <_ctype.h>
# include <cstddef>
# include <iomanip>
# include <ostream>
# include <sstream>
# include "contact.hpp"

class phonebook
{
	private:
		contact _contacts[8];
		int		_cout_index;
		
	public:
		phonebook();
		void	exit( void );
		void	add( void );
		void	search();	
		void	print_phbook( void );
		void	set_cout_index(int cout);
		void	found_index();	
};

#endif
