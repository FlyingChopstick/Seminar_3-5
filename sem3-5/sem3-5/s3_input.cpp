#include "stdafx.h"

//INPUT(), fills the array
void input(int* t_array, unsigned int size)
{
	unsigned int i;																			//iterator
	char selector = 'n';																	//local selector

	cout << endl << "----INPUT----" << endl;

	//if the array is already created, reallocate the memory. s3_array_size handles the confirmation now

	//filling the array
	cout << "Filling the array with " << size << " element(s)." << endl;
	for (i = 0; i < size; i++) {
		cout << "Element #" << i << ": ";
		cin >> t_array[i];
	}

	cout << "Array created";


	cout << endl << "----INPUT END----" << endl;
	//return *t_array;																		//-> *t_array
}