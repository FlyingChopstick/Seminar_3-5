#include "stdafx.h"

int output(int max_pos, int n_product, const int* t_array, unsigned int* size, bool* is_created, bool* two_negatives)
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
		char selector = '0';

		std::cout
			<< " 1. The greatest element"
			<< std::endl
			<< " 2. The product of the elements between zeroes"
			<< std::endl
			<< " 3. Array output"
			<< std::endl
			<< " 5. Return"
			<< std::endl;
		do
		{
			std::cout << "Your selection: ";
			std::cin >> selector;
			
			switch (selector)
			{
			//max_pos output
			case '1': std::cout << std::endl 
				<< "The position of the greatest element is #" << max_pos << " (" << t_array[max_pos] << ")" 
					<< std::endl;
				break;

			//n_product output
			case '2': 
				switch (*two_negatives)
				{
				case true: std::cout << std::endl 
					<< "The product of the elements between the first and the second 0 is " << n_product
						<< std::endl;
					break;
				case false: std::cout << "There are no 0 elements or only one 0 element in the array." 
						<< std::endl;
					break;
				}
				break;
			
			//array output
			case'3': 		
			{
				unsigned int i;

				std::cout << std::endl
					<< "Array output: ";
				for (i = 0; i < *size; i++)
				{
					std::cout << t_array[i] << " ";
				}
				std::cout << std::endl;

				break;
			}

			//return
			case '5': return 0;

			default: std::cout << "Wrong input, please try again."
						<< std::endl;
			}
		} while (selector != '5');

		break;
	}

	//if false go back
	case false: std::cout << "Array was not created. You need to input first.";
		break;
	}

	std::cout 
		<< std::endl
		<< "----OUTPUT END----"
		<< std::endl;

	return 0;
}