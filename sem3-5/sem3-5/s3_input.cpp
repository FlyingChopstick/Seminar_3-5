#include "stdafx.h"

//int INPUT() -> int*, creates and fills the array
int input(int* &t_array, unsigned int* size, bool* is_created)
{
	unsigned int i;																			//iterator
	char selector = 'n';																	//local selector

	std::cout
		<< std::endl
		<< "----INPUT----"
		<< std::endl;

	//check whether the array is already created
	if (*is_created==true)
	{
		//override confirmation selector
		std::cout << "The array is already created. If you continue, it will be deleted. Proceed? (y/n): ";
		do
		{
			std::cin >> selector;
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
			default: std::cout << "Wrong input, try again." 
				<< std::endl;
			}
		} while ((selector != 'y') && (selector != 'n'));
	}
	   
	std::cout << "Enter the number of elements: ";
	std::cin >> *size;

	t_array = new int[*size];																		//NEW t_array[size]

	//filling the array
	std::cout << "Filling the array with " << *size << " element(s).\n";
	for (i = 0; i < *size; i++) {
		std::cout << "Element #" << i << ": ";
		std::cin >> t_array[i];
	}

	*is_created = true;																		//array state change (creation)
	std::cout << "Array created";

	std::cout 
		<< std::endl 
		<< "----INPUT END----" 
		<< std::endl;

	return *t_array;																		//-> *t_array
}