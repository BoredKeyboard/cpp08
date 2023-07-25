/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/25 11:01:41 by mforstho      #+#    #+#                 */
/*   Updated: 2023/07/25 14:25:21 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>
#include <deque>

int main(void) {
	std::cout << "MutantStack:" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		std::cout << std::endl;

		mstack.pop();
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "List:" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::list<int>::iterator print = ++mstack.begin();
		std::cout << *print << std::endl;
		std::cout << std::endl;


		mstack.erase(++mstack.begin());
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Vector:" << std::endl;
	{
		std::vector<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::vector<int>::iterator print = ++mstack.begin();
		std::cout << *print << std::endl;
		std::cout << std::endl;


		mstack.erase(++mstack.begin());
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Deque:" << std::endl;
	{
		std::deque<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::deque<int>::iterator print = ++mstack.begin();
		std::cout << *print << std::endl;
		std::cout << std::endl;


		mstack.erase(++mstack.begin());
		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::deque<int>::iterator it = mstack.begin();
		std::deque<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mstack);
	}
}
