/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:28:10 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/21 14:08:46 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <algorithm>
#include <vector>
#include <string>
#include <limits.h>
#include <iostream>

class Span
{
	private:
		std::vector<int> i;
		unsigned int _N;
		unsigned int _elems;
	public:
		Span(unsigned int N);
		Span(const Span &);
		const Span & operator=(const Span &);
		~Span();
		void addNumber(int num);
		void addNumberIter(int begin, int end);
		int shortestSpan();
		int longestSpan();
		class elementsException : public std::exception
		{
			public:
				const char* what() const throw() {
					return "Not enough elements to compare!";
				}
		};
		class arrayFullException : public std::exception
		{
			public:
				const char* what() const throw() {
					return "Array is full!";
				}
		};
};

