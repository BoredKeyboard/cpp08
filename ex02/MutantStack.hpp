/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/25 11:01:55 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/25 13:31:44 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<class T>
class MutantStack : public std::stack<T> {
	private:

	public:
		MutantStack() {};
		MutantStack(MutantStack<T> const & src);
		virtual ~MutantStack() {};
		MutantStack<T> & operator=(MutantStack<T> const & src);

		typedef typename std::stack<T>::container_type container_type;
    	typedef typename container_type::iterator iterator;
    	typedef typename container_type::const_iterator const_iterator;

		iterator begin() { return this->c.begin(); }
    	iterator end() { return this->c.end(); }
    	const_iterator cbegin() const { return this->c.cbegin(); }
    	const_iterator cend() const { return this->c.cend(); }

};

#endif
