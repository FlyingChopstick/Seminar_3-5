#include "stdafx.h"

//SEARCH() ->int tmp, checks whether the row has <0 elements, sums if true
int search(int** t_array, unsigned int dimension)
{
	unsigned int t, i, j;
	int tmp = 0;


	for (i = 0; i < dimension; i++)
	{
		//j[0-k] loop, searches for negatives, sums the row in <tmp> if found
		for (j = 0; j < dimension; j++)
		{
			if (t_array[i][j] < 0)
			{
				std::cout << "The sum of the row #" << i << " is ";
				for (t = 0; t < dimension; t++)
				{
					tmp += t_array[i][t];
				}

				std::cout << tmp;
				std::cout << std::endl;

				break;
			}
		}
	}

	//std::cout << std::endl;

	return tmp;
}