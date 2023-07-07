/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 17:05:26 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/07 17:54:33 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <iostream>

Span::Span(void) {
}

Span::Span(unsigned int N) {
	this->_N = N;
	this->_current = 0;
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span(void) {
	std::cout << "Destructor called" << std::endl;
}

Span & Span::operator=(Span const & src) {
	if (this == &src)
		return (*this);

	return (*this);
}

void	Span::addNumber(int n) {
	if (this->_current < this->_N) {
		this->_array.push_back(n);
		this->_current++;
	}
	else {
		throw std::overflow_error("Can't add number: Maximum amount of numbers already stored");
	}
}

int	Span::shortestSpan(void) {
	if (this->_current <= 1) {
		throw ; // no stack can be found
	}
	std::sort(this->_array.begin(), this->_array.end());
	// return kortste
}

int	Span::longestSpan(void) {
	if (this->_current <= 1) {
		throw ; // no stack can be found
	}
	std::sort(this->_array.begin(), this->_array.end());
	return (((*this->_array.end() - 1)) - (*this->_array.begin()));
}
