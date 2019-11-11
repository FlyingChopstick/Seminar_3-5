#include "s4_dependances.h"
#include "stdafx.h"

//IDENTICAL() -> int result, cout<< of the identical rows and columns
int identical(int** t_array, unsigned int dimension)
{
	unsigned int i;
	int result = 0;
	bool is_found = false;

	//i[0-k] loop, checks the first numbers in columns/rows
	for (i = 0; i < dimension; i++) 
	{
		if (t_array[0][i] == t_array[i][0]) 
		{
			//COMPARE() is called, output is stored in <result>
			if (compare(t_array, dimension, i) == true)
			{
				result = i;
				is_found = true;
			}

			//cout << "The result is \"" << result << "\"";										//DEBUG raw <result>

			//output determination
			if (is_found == true)
			{
				cout << "The row #" << result << " is identical to the column #" << result
					<< endl;
			}

		}
	}

	if (is_found == false)
	{
		cout << "There are no identical rows and columns in the array."
			<< endl;
	}

	return 0;
}