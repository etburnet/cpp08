/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:35:15 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/21 15:19:42 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		MutantStack();
		MutantStack(const MutantStack &);
		MutantStack &operator=(const MutantStack &);
		~MutantStack();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &)
{

}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &)
{

}
