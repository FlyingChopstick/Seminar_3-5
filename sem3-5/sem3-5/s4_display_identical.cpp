#include "stdafx.h"

//DISPLAY_IDENTICAL(), prints the numbers of the identical r&c if found
void display_identical(int* target, unsigned int dimension)
{
	unsigned int i;
	bool is_found = false;

	for (i = 0; i < dimension; i++)
	{
		if (target[i] > -1)
		{
			cout << "Row #" << target[i] << "is identical to the column #" << target[i] << "." << endl;
			is_found = true;
		}
	}

	if (is_found == false)
		cout << "There are no identical rows and columns in the array." << endl;
}