#include "stdafx.h"

//int INPUT() -> int*, creates and fills the array
int input(int* &t_array, unsigned int* size, bool* is_created)
{
	unsigned int i;																			//iterator
	char selector = 'n';																	//local selector

	cout
		<< endl
		<< "----INPUT----"
		<< endl;

	//check whether the array is already created
	if (*is_created==true)
	{
		//override confirmation selector
		cout << "The array is already created. If you continue, it will be deleted. Proceed? (y/n): ";
		do
		{
			cin >> selector;
			//confirmation
			switch (selector)
			{
				//go back if 'n'
			case 'n': return *t_array;

				//proceed if 'y'
			case 'y':
			{
				//array is deleted, state changed to <not created>
				delete[] t_array;
				*is_created = false;
				break;
			}
			default: cout << "Wrong input, try again." 
				<< endl;
			}
		} while ((selector != 'y') && (selector != 'n'));
	}
	   
	cout << "Enter the number of elements: ";
	cin >> *size;

	t_array = new int[*size];																		//NEW t_array[size]

	//filling the array
	cout << "Filling the array with " << *size << " element(s).\n";
	for (i = 0; i < *size; i++) {
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