/***************************************
Bubble Sort:

A sorting algorithm that compares two adjacent elements and
swaps themif they are in the wrong order. This is repeated
until the list is sorted. Bubble sort is not a practical
sorting algorithm.
***************************************/
#pragma once

#include <utility>

namespace BubbleSort
{
	void Sort( int unsortedArray[], int arraySize )
	{
		for( int count = 0; count < arraySize; count++ )
		{
			for( int swapIndex = 0; swapIndex < ( arraySize - count - 1 ); swapIndex++ )
			{
				if( unsortedArray[ swapIndex ] > unsortedArray[ swapIndex + 1 ] )
				{
					std::swap( unsortedArray[ swapIndex ], unsortedArray[ swapIndex + 1 ] );
				}
			}
		}
	}
}