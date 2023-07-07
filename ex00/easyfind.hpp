/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 15:45:02 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/07 16:59:11 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int n) {
	return std::find(container.begin(), container.end(), n);
}

template<typename T>
typename T::const_iterator	easyfind(const T &container, int n) {
	return std::find(container.begin(), container.end(), n);
}

#endif
