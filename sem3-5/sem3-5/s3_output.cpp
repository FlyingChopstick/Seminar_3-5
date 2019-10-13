#include <iostream>

int output(int max_pos, int n_product, int* t_array, unsigned int* size, bool* is_created, bool* two_negatives, bool* is_sorted)
{
	std::cout << std::endl;
	std::cout << "----OUTPUT----";
	std::cout << std::endl;

	//check whether the array is created
	switch (*is_created)
	{
		//if true output
	case true:
		{
			unsigned int i;

			//max_pos output
			std::cout << "The position of the greatest element is #" << max_pos << " (" << t_array[max_pos] << ")";
			std::cout << std::endl;

			//n_product output
			switch (*two_negatives)
			{
			case true: std::cout << "The product of the elements between the first and the second 0 is " << n_product;
				break;
			case false: std::cout << "There are no 0 elements or only one 0 element in the array.";
				break;
			}
			std::cout << std::endl;

			//state output (sorted/not sorted)
			switch (*is_sorted)
			{
			case true: std::cout << "Array (sorted): ";
				break;
			case false: std::cout << "Array (not sorted): ";
				break;
			}

			//array output
			for (i = 0; i < *size; i++)
			{
				std::cout << t_array[i] << " ";
			}
		}
			break;
		
		//if false go back
	case false: std::cout << "Array was not created. You need to input first.";
		break;
	}

	std::cout << std::endl;
	std::cout << "----OUTPUT END----";
	std::cout << std::endl;

	return 0;
}