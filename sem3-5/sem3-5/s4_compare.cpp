#include "stdafx.h"

//COMPARE() -> bool t/f, compares the <start_index> column and row, ->true if identical
bool compare(int** t_array, unsigned int dimension, int start_index) 
{
	unsigned int c = 0;


	while ((t_array[c][start_index] == t_array[start_index][c]) && (c<dimension))
	{							
		c++;																//counts equal elements in row/column
	}

	if (c == dimension) {													//if all elements are equal -> true
		return true;
	}

	return false;															//-> false
}
