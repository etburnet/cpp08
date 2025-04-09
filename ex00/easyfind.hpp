/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:35:42 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/09 16:25:00 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>

template <typename T>
T find(T int_cont, int to_find)
{
	T *res = std::find(int_cont.begin(), int_cont.end(), to_find);
	if (*res == int_cont.end())
		return (NULL);
	return (*res);
}
