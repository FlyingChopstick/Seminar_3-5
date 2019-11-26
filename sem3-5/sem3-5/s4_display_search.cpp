#include "stdafx.h"

//DISPLAY_SEARCH(), prints the sums of the rows with negative elements
void display_search(int** target, unsigned int dimension)
{
	unsigned int i;
	bool is_found = false;

	for (i = 0; i < dimension; i++)
	{
		if (target[i][0] != -1)
		{
			cout << "The sum of the row #" << i << " is " << target[i][1] << "." << endl;
			is_found = true;
		}
	}

	if (is_found == false)
		cout << "There are no negative elements in the array." << endl;
}