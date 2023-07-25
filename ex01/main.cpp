/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 17:33:36 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/25 10:59:47 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void) {
	{
		Span test(2);
		try {
			test.addNumber(1);
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
		try {
			test.addNumber(2);
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
		try {
			test.addNumber(6);
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Span test(5);
		test.addNumber(100);
		test.addNumber(54);
		test.addNumber(7);
		test.addNumber(19);
		test.addNumber(3);
		try {
			int n = test.shortestSpan();
			std::cout << "shortest span: " << n << std::endl;
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
		try {
			int n = test.longestSpan();
			std::cout << "longest span: " << n << std::endl;
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Span test(1);
		test.addNumber(19);
		try {
			test.shortestSpan();
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
		try {
			test.longestSpan();
		}
		catch (std::exception &a) {
			std::cout << a.what() << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}
