/*
 * utilities.cc
 *
 *  Created on: Dec 21, 2017
 *      Author: richj
 */

#include <iostream>

void printList(const Container& list)
{
	Container::const_iterator iter = list.begin();
	for (; iter != list.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}
	std::cout << std::endl;
}


