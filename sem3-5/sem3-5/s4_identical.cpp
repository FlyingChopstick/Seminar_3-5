#include "s4_dependances.h"
#include <iostream>

//IDENTICAL() -> int result, cout<< of the identical rows and columns
int identical(int** t_array, unsigned int dimension)
{
	unsigned int i;
	int result = -1;


	//i[0-k] loop, checks the first numbers in columns/rows
	for (i = 0; i < dimension; i++) 
	{
		if (t_array[0][i] == t_array[i][0]) 
		{
			result = (compare(t_array, dimension, i) == true) ? i : -1;									//COMPARE() is called, output is stored in <result>
			//std::cout << "The result is \"" << result << "\"";										//DEBUG raw <result>

			if (result != -1) std::cout << "The row #" << result << " is identical to the column #" << result 
				<< std::endl;
		}
	}

	return result;
}