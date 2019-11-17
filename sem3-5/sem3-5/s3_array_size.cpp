#include "stdafx.h"

//ARRAY_SIZE() -> unsigned int size, handles setting the size of the array and <is_created> check
unsigned int array_size(int* t_array, unsigned int size, bool *is_created)
{
	//overwrite check
	if (*is_created == true)
	{
		char selector = 'a';
		
		//overwrite confirmation
		cout << "The array is already created. If you proceed it will be overwritten. Continue? (y/n)" << endl;
		while (selector!='y')
		{
			cout << "Your selection: ";
			cin >> selector;
			switch (selector)
			{
			//if 'y' set <size> to 0 and re-enter it
			case 'y': 
			{
				break;
			}

			//if 'n' do not change <size>
			case 'n': return size;

			default: cout << "Wrong input, try again." << endl;
			}
		}
	}
	

	size = 0;
	while (size <= 0)
	{
		cout << "Enter the size of the array: ";
		cin >> size;

		//check if the input is valid (>0)
		if (size <= 0)
			cout << "Error: Array size must be >0. Please try again." << endl;

	}


	return size;
}