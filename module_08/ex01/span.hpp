/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:05:18 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/05 18:00:14 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
	private:
		unsigned int _N;
		unsigned int _checkN;
	public:
		std::vector<int> my_array;
		Span(int N);
		Span(const Span &value);
		Span &operator=(const Span &value);
		unsigned int getN() const;
		virtual ~Span();

		void	addNumber(int number);
		int		shortestSpan(void);
		int		longestSpan(void);

		class SizeException : public std::exception {
			virtual const char* what() const throw ();
		};

		class SmallArrayException : public std::exception {
			virtual const char* what() const throw ();
		};	

		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end) {
			if (end - begin > this->_N)
				throw SizeException();
			else {
				this->_checkN = std::distance(begin, end);
				my_array.assign(begin, end);
			}
	}	
};

#endif