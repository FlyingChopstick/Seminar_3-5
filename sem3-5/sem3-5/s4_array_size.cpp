#include "stdafx.h"

//ARRAY_SIZE() -> unsigned int dimension, handles the array size setting
unsigned int array_size(unsigned int pre_alloc)
{
	unsigned int dimension = 0;

	cout << "Enter the size of the array (NxN, max 10): ";
	cin >> dimension;

	while (true)
	{
		//input check
		if ((dimension <= 0) || (dimension > pre_alloc))
		{
			cout << "Error: Wrong size of the array. It must be between 1 and " << pre_alloc << ", please try again: ";
			cin >> dimension;
		}
		else
			break;
	}

	return dimension;
}