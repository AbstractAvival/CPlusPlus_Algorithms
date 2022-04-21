/***************************************
Selection Sort:

Sorts an array by repeatedly finding the minimum element
(or largest, depending on sorting order) in the unsorted list,
swapping it with the leftmost unsorted element, and moving
the sublist boundaries one element to the right.

Similiar to Insertion Sort, but generally performs worse.
***************************************/
#pragma once

namespace SelectionSort
{
	void Sort( int unsortedArray[], const int arraySize )
	{
		for( int currentIndex = 0; currentIndex < arraySize; currentIndex++ )
		{
			int minimumIndex = currentIndex;
			int offsetIndex = minimumIndex + 1;
			while( offsetIndex < arraySize )
			{
				if( unsortedArray[ offsetIndex ] < unsortedArray[ minimumIndex ] )
				{
					minimumIndex = offsetIndex;
				}
				offsetIndex++;
			}
			int valueholder = unsortedArray[ currentIndex ];
			unsortedArray[ currentIndex ] = unsortedArray[ minimumIndex ];
			unsortedArray[ minimumIndex ] = valueholder;
		}
	}
}