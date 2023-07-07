/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 17:05:31 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/07 17:51:32 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

# include<vector>

class Span {
	private:
		unsigned int _N;
		unsigned int _current;
		std::vector<int>	_array;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		virtual ~Span(void);
		Span & operator=(Span const & src);
		void	addNumber(int n);
		int	shortestSpan(void);
		int	longestSpan(void);
};

#endif
