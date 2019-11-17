#include "stdafx.h"

//ARRAY_SIZE() -> unsigned int dimension, handles the array size setting and <is_created> check
unsigned int array_size(unsigned int pre_alloc, unsigned int dimension, bool* is_created)
{
	//overwrite check
	if (*is_created == true)
	{
		char selector = 'a';

		//overwrite confirmation
		cout << "The array is already created. If you proceed it will be overwritten. Continue? (y/n)" << endl;
		while (selector != 'y')
		{
			cout << "Your selection: ";
			cin >> selector;
			switch (selector)
			{
				//if 'y' set <size> to 0 and re-enter it
			case 'y':
			{
				*is_created = false;
				break;
			}

			//if 'n' do not change <size>
			case 'n': return dimension;

			default: cout << "Wrong input, try again." << endl;
			}
		}
	}

	dimension = 0;
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