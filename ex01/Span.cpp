/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:28:05 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/21 14:10:33 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->_N = N;
	this->_elems = 0;
}

Span::Span(const Span &other)
{
	operator=(other);
}

const Span &Span::operator=(const Span &other)
{
	int j = 0;

	if (this == &other)
		return (*this);
	this->_N = other._N;
	this->_elems = other._elems;
	while (other.i[j])
		j++;
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
	if (this->_elems > this->_N - 1)
		throw arrayFullException();
	else
	{
		this->i.push_back(num);
		this->_elems++;
	}
}

int Span::longestSpan()
{
	if (this->_elems < 2)
		throw elementsException();
	int min = *std::min_element(this->i.begin(), this->i.end());
	int max = *std::max_element(this->i.begin(), this->i.end());
	return (max - min);
}

int Span::shortestSpan()
{
	if (this->_elems < 2)
		throw elementsException();
	std::vector<int> i_copy = this->i;
	std::sort(i_copy.begin(), i_copy.end());
	int minDiff = INT_MAX;
	for (size_t i = 1; i < i_copy.size(); ++i)
	{
		int diff = i_copy[i] - i_copy[i - 1];
		if (diff < minDiff)
			minDiff = diff;
	}
	return (minDiff);
}

void Span::addNumberIter(int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		try
		{
			this->addNumber(i);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return ;
		}
	}
}
