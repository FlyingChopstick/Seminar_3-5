#include "s4_dependances.h"
#include "stdafx.h"

//IDENTICAL() -> int* numbers, finds and returns the array of numbers of identical r&c
int* identical(int** t_array, unsigned int dimension)
{
	unsigned int i;
	int result = 0;
	bool is_found = false;
	int* numbers = new int[dimension];


	//i[0-k] loop, checks the first numbers in columns/rows
	for (i = 0; i < dimension; i++) 
	{
		numbers[i] = -1;
		if (t_array[0][i] == t_array[i][0]) 
		{
			//COMPARE() is called, output is stored in <result>
			if (compare(t_array, dimension, i) == true)
			{
				result = i;
				is_found = true;
			}

			//cout << "The result is \"" << result << "\"";//DEBUG

			if (is_found == true)
			{
				numbers[i] = result;
			}

		}
	}

	return numbers;
}