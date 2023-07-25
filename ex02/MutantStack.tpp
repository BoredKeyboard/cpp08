/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.tpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/25 11:04:00 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/25 13:52:22 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) {
	*this = src;
}

template<class T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & src) {
	if (this == &src)
		return (*this);
	std::stack<T>::operator = src;
	return (*this);
}
