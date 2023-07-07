/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 17:33:36 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/07 18:09:43 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void) {
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
	return (EXIT_SUCCESS);
}
