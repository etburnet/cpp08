/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:35:13 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/22 11:18:46 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Last elem added: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.pop();
	mstack.push(15);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Iterator \"it\" value: " <<  *it << std::endl;
		++it;
	}
	
	std::cout << "My own tests" << std::endl;
	it--;
	it--;
	std::cout << "Iterator \"it\" value: " <<  *it << std::endl;
	--ite;
	--ite;
	std::cout << "Iterator \"ite\" value: " <<  *ite << std::endl;
	ite = mstack.end();
	std::stack<int> s(mstack);
	return 0;
}