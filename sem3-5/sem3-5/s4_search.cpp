#include "stdafx.h"

//SEARCH() ->int** sums, checks whether the row has <0 elements, sums and puts in the array if true
int** search(int** t_array, const unsigned int dimension)
{
	unsigned int t, i, j;
	int tmp = 0;
	//bool is_found = false;

	int** sums = new int* [dimension];
	for (i = 0; i < dimension; i++)
	{
		sums[i] = new int[2];
		sums[i][0] = -1;
		sums[i][1] = 0;
	}


	for (i = 0; i < dimension; i++)
	{
		//j[0-k] loop, searches for negatives, sums the row in <tmp> if found
		for (j = 0; j < dimension; j++)
		{
			if (t_array[i][j] < 0)
			{
				for (t = 0; t < dimension; t++)
				{
					tmp += t_array[i][t];
				}
				sums[i][0] = i;
				sums[i][1] = tmp;
				tmp = 0;
			}
		}
	}

	return sums;
}