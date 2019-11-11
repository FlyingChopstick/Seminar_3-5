#include "stdafx.h"

//int SORT() -> 0, sorts the array with odd positioned numbers before odd
int sort(const int* t_array, unsigned int* size, bool* is_created)
{
	//check whether the array is created
	switch (*is_created)
	{
		//if true next selector (confirmation)
	case true:
	{
		//sort start
		unsigned int i;

		cout << endl 
			<< "Sorting the array..."
			<< endl;

		//collecting EVEN positions
		for (i = 0; i < *size; i += 2)
		{
			cout << t_array[i] << " ";
		}

		//collecting ODD positions
		for (i = 1; i < *size; i += 2)
		{
			cout << t_array[i] << " ";
		}

		cout << endl 
			<< "Array is sorted."
			<< endl;

		return 0;																	//-> 0
	}

	//if false -> 0
	case false:
		cout << endl 
			<< "Error: The array is not created."
			<< endl;
		return 0;
	}


	return 0;
}


	