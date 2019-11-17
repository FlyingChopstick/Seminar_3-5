#include "stdafx.h"

//int INPUT() -> int*, creates and fills the array
int input(int* t_array, unsigned int size, bool* is_created)
{
	unsigned int i;																			//iterator
	char selector = 'n';																	//local selector

	cout
		<< endl
		<< "----INPUT----"
		<< endl;

	//if the array is already created, reallocate the memory. s3_array_size handles the confirmation now

	if (*is_created==true)
	{
		delete[] t_array;
		t_array = new int[size];
		*is_created = false;
	}

	//filling the array
	cout << "Filling the array with " << size << " element(s).\n";
	for (i = 0; i < size; i++) {
		cout << "Element #" << i << ": ";
		cin >> t_array[i];
	}

	*is_created = true;																		//array state change (creation)
	cout << "Array created";

	cout 
		<< endl 
		<< "----INPUT END----" 
		<< endl;

	return *t_array;																		//-> *t_array
}