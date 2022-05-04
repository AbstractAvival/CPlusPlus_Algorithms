/***************************************
Quick Sort:

A divide and conquer algorithm. It picks an element as
a pivot point and partitions the given array around said
pivot into sub-arrays. The sub-arrays are then sorted 
recursively.
***************************************/
#pragma once

namespace QuickSort
{
	int Partition( int unsortedArray[], int startIndex, int endIndex )
	{
		int pivotValue = unsortedArray[ endIndex ];
		int currentPivotIndex = startIndex - 1;

		for( int currentIndex = startIndex; currentIndex < endIndex; currentIndex++ )
		{
			if( unsortedArray[ currentIndex ] < pivotValue )
			{
				currentPivotIndex++;
				std::swap( unsortedArray[ currentIndex ], unsortedArray[ currentPivotIndex ] );
			}
		}

		currentPivotIndex++;
		std::swap( unsortedArray[ currentPivotIndex ], unsortedArray[ endIndex ] );
		return currentPivotIndex;
	}

	void Sort( int unsortedArray[], int startIndex, int endIndex )
	{
		if( startIndex >= endIndex )
			return;

		int pivotIndex = Partition( unsortedArray, startIndex, endIndex );
		Sort( unsortedArray, startIndex, pivotIndex - 1 );
		Sort( unsortedArray, pivotIndex + 1, endIndex );
	}
}