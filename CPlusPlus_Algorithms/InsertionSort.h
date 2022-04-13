#pragma once

namespace InsertionSort
{
	void Sort( int unsortedArray[], const int arraySize )
	{
		int key, currentItem;
		for( int index = 1; index < arraySize; index++ )
		{
			key = unsortedArray[ index ];
			currentItem = index - 1;
			while( currentItem > -1 && unsortedArray[ currentItem ] > key )
			{
				unsortedArray[ currentItem + 1 ] = unsortedArray[ currentItem ];
				currentItem--;
			}
			unsortedArray[ currentItem + 1 ] = key;
		}
	}
}