/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 15:51:54 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/07 17:00:38 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

// .begin()
//   v
// ['a', 'b']
//            ^
//         .end()

int main(void) {
	// const std::vector<char> vec;
	// vec.push_back('a');
	// vec.push_back('b');
	// easyfind<std::vector>(vec, 'x');

	// std::vector<int> vec;
	// vec.push_back(2);
	// vec.push_back(4);
	// easyfind<std::vector>(vec, 'x');

	// char foo[5] = {'a', 'b'};

	// easyfind<char [5]>(foo, 'x');
	std::vector<int> test;
	for (int i = 0; i < 4; i++) {
		test.push_back(i);
	}
	std::vector<int>::iterator result = easyfind(test, 0);
	assert(result != test.end());
	assert(*result == 0);

	const std::vector<int> test_const(test);
	std::vector<int>::const_iterator result_const = easyfind(test_const, 3);
	assert(result_const != test_const.end());
	assert(*result_const == 3);

	std::list<int> test2;
	for (int i = 0; i < 4; i++) {
		test2.push_back(i);
	}
	std::list<int>::iterator result2 = easyfind(test2, 5);
	assert(result2 == test2.end());
}
