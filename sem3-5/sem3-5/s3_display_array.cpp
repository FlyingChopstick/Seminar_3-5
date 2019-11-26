#include "stdafx.h"

//DISPLAY_ARRAY(), prints the 1d array
void display_array(const int* t_array, unsigned int size)
{
	unsigned int i;

	cout << endl;
	cout << "Array output: ";

	for (i = 0; i < size; i++)
	{
		cout << t_array[i] << " ";
	}

	cout << endl;
}