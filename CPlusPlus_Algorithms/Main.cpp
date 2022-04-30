#include <iostream>
#include "MergeSort.h"

int main()
{
	std::cout << "Hello C++ Algorithms!";

	const int testSize = 10;
	int test[ testSize ] = { 432, 765, 28, 999, 64, 651, 123, 88, 543, 0 };

	MergeSort::Sort( test, 0, testSize - 1 );

	for( auto number : test )
	{
		std::cout << number << std::endl;
	}

	return 0;
}