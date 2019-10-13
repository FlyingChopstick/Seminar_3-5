#include <iostream>

//int SORT() -> int* t_array or 0, sorts the array with odd positioned numbers before odd
int sort(int* &t_array, unsigned int* size, bool* is_created, bool* is_sorted)
{
	char selector = 'n';																		//local selector


	//check whether the array is created
	switch (*is_created)
	{
		//if true next selector (confirmation)
	case true:
	{
		std::cout << "WARNING: Sorting the array will affect the output values. This action is irreversable. Proceed? (y/n): ";
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
				//sort start
				unsigned int i;
				int even_size = *size / 2;														//the size of the array of EVEN positions
				int odd_size = *size - even_size;												//the size of the array of ODD positions

				int* even_arr = new int[even_size];																		//NEW even_arr
				int* odd_arr = new int[odd_size];																		//NEW odd_arr

				//collecting EVEN positions
				for (i = 0; i < *size; i += 2)
				{
					even_arr[i / 2] = t_array[i];
				}

				//collecting ODD positions
				for (i = 1; i < *size; i += 2)
				{
					odd_arr[i / 2] = t_array[i];
				}

				//reforming t_array with ODDs in the beginning
				for (i = 0; i < odd_size + 1; i++)
				{
					t_array[i] = odd_arr[i];
				}
				//reforming t_array, EVEN after ODD
				for (i = 0; i < even_size + 1; i++)
				{
					t_array[i + odd_size - 1] = even_arr[i];
				}

				*is_sorted = true;																	//array state change (sort)
				std::cout << "Array is sorted." << std::endl;

				return *t_array;																	//-> *t_array
			}

				//repeat if neither
				default: std::cout << "Wrong input, try again." << std::endl; break;
			}

		} while ((selector != 'y') && (selector != 'n'));

		//if false -> 0
	case false:
		std::cout << "Error: The array is not created." << std::endl;
		return 0;
	}

	}
}