#include <iostream>

//int SORT() -> 0, sorts the array with odd positioned numbers before odd
int sort(int* t_array, unsigned int* size, bool* is_created)
{
	//check whether the array is created
	switch (*is_created)
	{
		//if true next selector (confirmation)
	case true:
	{
		//sort start
		unsigned int i;

		std::cout << std::endl 
			<< "Sorting the array..."
			<< std::endl;

		//collecting EVEN positions
		for (i = 0; i < *size; i += 2)
		{
			std::cout << t_array[i] << " ";
		}

		//collecting ODD positions
		for (i = 1; i < *size; i += 2)
		{
			std::cout << t_array[i] << " ";
		}

		std::cout << std::endl 
			<< "Array is sorted."
			<< std::endl;

		return 0;																	//-> 0
	}

	//if false -> 0
	case false:
		std::cout << std::endl 
			<< "Error: The array is not created."
			<< std::endl;
		return 0;
	}


	return 0;
}


	