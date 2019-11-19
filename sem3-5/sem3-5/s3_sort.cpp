#include "stdafx.h"

//SORT() -> 0, sorts the array with odd positioned numbers before odd
int* sort(const int* t_array, unsigned int size)
{
	int* result = new int[size];
	unsigned int i;
	unsigned int j = 0;

	cout << endl << "Sorting the array..." << endl;

	//collecting EVEN positions
	for (i = 0; i < size; i += 2)
	{
		//cout << t_array[i] << " ";
		result[j] = t_array[i];
		j++;
	}

	//collecting ODD positions
	for (i = 1; i < size; i += 2)
	{
		//cout << t_array[i] << " ";
		result[j] = t_array[i];
		j++;
	}

	//DEBUG
	/**
	for (i = 0; i < size; i++)
		cout << result[i];
	/**/
	cout << endl << "Array is sorted." << endl;

	return result;
}


	