#include <iostream>
#include "QuickSort.h"

int main()
{
	std::cout << "Hello C++ Algorithms!" << std::endl;

	int test1[ 10 ] = { 372, 122, 987, 666, 0, 12, 498, 297, 675, 10 };

	QuickSort::Sort( test1, 0, 9 );

	for( int number : test1 )
	{
		std::cout << number << std::endl;
	}

	return 0;
}