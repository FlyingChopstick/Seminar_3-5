#include "stdafx.h"

//DISPLAY_ARRAY(), prints the array
void display_array(int** target, unsigned int dimension)
{
	unsigned int i, j;

	cout << endl;
	cout << "Array output: ";
	cout << endl;
	
	for (i = 0; i < dimension; i++)
	{
		for (j = 0; j < dimension; j++)
		{
			cout << target[i][j] << "	";
		}
		cout << endl;
	}
}